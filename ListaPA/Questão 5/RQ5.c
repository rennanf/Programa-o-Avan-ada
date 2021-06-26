Determine  o  que  será  mostrado  pelo  seguinte  programa  (compile-o,  execute-o  e  verifique  seforam obtidas as respostas esperadas)

#include<stdio.h>

int main(void){
float vet[5] = {1.1,2.2,3.3,4.4,5.5};
float *f;
int i;
f = vet;
printf("contador/valor/valor/endereco/endereco");

  for(i = 0 ; i <= 4 ; i++){
  printf("\ni = %d",i);
  printf("vet[%d] = %.1f",i, vet[i]);
  printf("*(f + %d) = %.1f",i, *(f+i));
  printf("&vet[%d] = %X",i, &vet[i]);
  printf("(f + %d) = %X",i, f+i);
  }
}

----- IMPRESSÃO--- 
  
  
  printf("\ni = %d",i);  :

  (0, 1, 2, 3, 4)

  printf("vet[%d] = %.1f",i, vet[i]); :

  vet[0] = 1.1, vet[1] = 2.2, vet[3] = 3.3, vet[4] = 4.4,vet[5] = 5.5
    
  printf("*(f + %d) = %.1f",i, *(f+i)); :

  (f+0) = 1.1, *(f+1) = 2.2, *(f+2) = 3.3 ...
    
  printf("&vet[%d] = %X",i, &vet[i]); :

  Retorna os endereços de memoria do vetor.
   
  printf("(f + %d) = %X",i, f+i); :

  Retorna endereços de memoria aleatórios.
    
