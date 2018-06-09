\Problem name: 

Minimize
obj: 100 X(0,1) + 200 X(0,2) + 300 X(0,3) + 3 X(1,3) + 32695 X(2,3)
Subject To
Qualquer_Coisa_0:  X(0,1) + X(0,2) + X(0,3) = 1
Qualquer_Coisa_1:  X(0,1) + X(1,2) + X(1,3) = 1
Qualquer_Coisa_2:  X(0,2) + X(1,2) + X(2,3) = 1
Qualquer_Coisa_3:  X(0,3) + X(1,3) + X(2,3) = 1
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
