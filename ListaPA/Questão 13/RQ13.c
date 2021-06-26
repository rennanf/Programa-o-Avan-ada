Implemente em linguagem C uma função em um programa de computador que leia n valores do
tipo float e os apresente em ordem crescente. Utilize alocação dinâmica de memória para
realizar a tarefa.
  
  
  
  
  ----------------- PROGRAMA --------------------
  
   
#include <stdio.h>
#include <stdlib.h>

void OrdemC(int n, float *vetor) {
 
  for(int i = 0; i < n-1; i++) {
      for( int j = i + 1; j < n; j++){
        if(vetor[i] > vetor[j]){
            float a = vetor[i];
            vetor[i] = vetor[j];
            vetor[j] = a;
}
}
}
}

int main() {
   float *vetor;
   int n;

    
   printf("Informe o numero de componentes do vetor\n")
   scanf("%d", &n);
   vetor = malloc(n * sizeof(float));

   for(int i = 0; i < n; i++){
      scanf("%f", &vetor[i]);
   }
   OrdemC(n, vet);
   for(int i = 0; i < n; i++)
   {
     printf("%.2f ", vetor[i]);
   }
   
  
  free(vetor);
  getch();
 
  return 0;

}
