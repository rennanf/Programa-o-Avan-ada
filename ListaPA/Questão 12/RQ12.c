O  que  é  um  ponteiro  para  uma  função? O  que  é  um  ponteiro  para  uma  função?  Pesquise  na  Internet  referências  sobre  o  assunto  eescreva um pequeno programa exemplificando o uso deste recurso
Pesquise  na  Internet  referências  sobre  o  assunto  eescreva um pequeno programa exemplificando o uso deste recursoO  que  é  um  ponteiro  para  uma  função?  Pesquise  na  Internet  referências  sobre  o  assunto  eescreva um pequeno programa exemplificando o uso deste recurso.
  
-------------- DEFINIÇÃO ---------------------
  
Ponteiros principalmente na linguagem C, ajuda a definir qual função deve ser executada, ponteiros funcionam sendo apontados para 
 onde se deseja, ou seja, poupa o trabalho de ter que fazer a chamada da função em outro local, já que o ponteiro aposta e define a execução do mesmo.
  
   
--------------- PROGRAMA ---------------------
   
   
 #include <stdio.h>

int progteste(int x, int y) {
        return x+y;
}
int main()  {
    int (*pf)(int,int) = &progteste;
        printf("%d\n",pf(3,3));
        return 0;
}
