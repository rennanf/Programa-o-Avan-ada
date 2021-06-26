Implemente em linguagem C uma função em um programa de computador que leia n valores do
tipo float e os apresente em ordem crescente. Utilize alocação dinâmica de memória para
realizar a tarefa.
  
  
  
  
  ----------------- PROGRAMA --------------------
  
    #include <stdio.h>
    #include <stdlib.h> 
    #include <conio.h>
    
  int main(void)
    {
      float *v; 
      int i, num_componentes;
      
      printf("Informe o numero de componentes do vetor\n");
      scanf("%d", &num_componentes);
      
      v = (float *) malloc(num_componentes * sizeof(float));
      
   
      for (i = 0; i < num_componentes; i++)
      {
        printf("\nDigite o valor para a posicao %d do vetor: ", i+1);
        scanf("%f",&v[i]);
      }
      
   
      printf("\n*********** Valores do vetor dinamico ************\n\n");
      
      for (i = 0;i < num_componentes; i++)
      {
        printf("%.2f\n",v[i]);
      }
      
      
      free(v);
      
      getch();
      return 0;
    }
