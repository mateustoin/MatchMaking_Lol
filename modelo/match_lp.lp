\Problem name: 

Minimize
obj: 600 X(0,1) + 300 X(0,2)
Subject To
Escolhe_Oponente_0:  X(0,1) + X(0,2) + X(0,3) = 1
Escolhe_Oponente_1:  X(0,1) + X(1,2) + X(1,3) = 1
Escolhe_Oponente_2:  X(0,2) + X(1,2) + X(2,3) = 1
Escolhe_Oponente_3:  X(0,3) + X(1,3) + X(2,3) = 1
Bounds
 0 <= X(0,1) <= 1
 0 <= X(0,2) <= 1
 0 <= X(0,3) <= 1
 0 <= X(1,2) <= 1
 0 <= X(1,3) <= 1
 0 <= X(2,3) <= 1
Integers
X(0,1) X(0,2) X(0,3) X(1,2) X(1,3) X(2,3) 
End
