#include "funcoes.h"

void solveCoin(){
    ifstream matriz("matriz_discrepancia.txt", ios::in);
    int peso[ELO][ELO];

    for (int i = 0; i < ELO; i++){
        for(int j = 0; j < ELO; j++){
            matriz >> peso[i][j];
        }
    }

    ifstream players("players.txt", ios::in);
    int player[4];

    for(int i = 0; i < 4; i++)
        players >> player[i];

    players.close();

   // Cria problema
    UFFProblem* prob = UFFLP_CreateProblem();


    // Cria variaveis X
	string varName, consName;
  	stringstream s;

    for (int i = 0; i < PLAYERS - 1; i++) {
		for (int j = i + 1; j < PLAYERS; j++) {
                s.clear();
				s << "X(" << i << "," << j << ")";
				s >> varName;
		        UFFLP_AddVariable(prob, (char*)varName.c_str(), 0.0, 1.0, peso[player[i]][player[j]], UFFLP_Binary);
		}
	}


    //PRIMEIRA RESTRIÇÃO DO MODELO - LIMITE DE CRÉDITOS POR PERÍODO
    for (int k = 0; k < PLAYERS; k++){
        s.clear();
        s << "Escolhe_Oponente_" << k;
        s >> consName;

        for (int i = 0; i < k; i++){
            s.clear();
            s << "X(" << i << "," << k << ")";
   	        s >> varName;
   	        UFFLP_SetCoefficient( prob, (char*)consName.c_str(),(char*)varName.c_str(), 1);
        }

        for (int j = k + 1; j < PLAYERS; j++){
            s.clear();
            s << "X(" << k << "," << j << ")";
   	        s >> varName;
   	        UFFLP_SetCoefficient( prob, (char*)consName.c_str(),(char*)varName.c_str(), 1);
        }

        UFFLP_AddConstraint( prob, (char*)consName.c_str(), 1, UFFLP_Equal);
    }

  
//--------------------------------------------------------------------------------------------------------------------------------------------*/
    // Escreve modelo no arquivo .lp
    UFFLP_WriteLP(prob, "match_lp.lp" );

    UFFLP_StatusType status = UFFLP_Solve( prob, UFFLP_Minimize );
    //cout << "qualquer coisa" << endl;
    if (status == UFFLP_Optimal) {

        double value;
        cout << "Solucao otima encontrada!" << endl << endl;
        cout << "Solucao:" << endl;

        UFFLP_GetObjValue( prob, &value );
        cout << "Valor da funcao objetivo = " << value << endl;


        // Imprime valor das variaveis nao-nulas

        for (int i = 0; i < PLAYERS-1; i++) {
            for (int j = i+1; j < PLAYERS; j++) {

                s.clear();
                s << "X(" << i << "," << j << ")";
                s >> varName;
                UFFLP_GetSolution( prob, (char*)varName.c_str(), &value );

                if (value > 0.1) {
                    cout << varName << " = " << value << endl;
                }
            }
        }
    }
    
    // Destroy the problem instance
    UFFLP_DestroyProblem( prob );
}

int main(){
    solveCoin();    
    return 0;
}