#include <iostream>
#include <fstream>

using namespace std;

int main(){
    ifstream matriz("instancia.txt", ios::in);
    int peso[26][26];
    ofstream resultado("resultado.txt", ofstream::out);

    for (int i = 0; i < 26; i++){
        for(int j = 0; j < 26; j++){
            matriz >> peso[i][j];
        }
    }

    matriz.close();

    for (int i = 0; i < 26; i++){
        for(int j = 0; j < 26; j++){
            resultado << peso[i][j];
            resultado << "   ";
        }
        resultado << '\n';
    }
    
    resultado.close();
    return 0;
}