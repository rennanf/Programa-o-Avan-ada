O que fazem os seguintes programas em C?

int main(){
int vet[] = {4,9,13};
int i;
  for(i=0;i<3;i++){
  printf("%d ",*(vet+i)); 
  }
}

O programa acima  retorna o conteúdo do vetor em questão.


int main(){
int vet[] = {4,9,13};
int i;
  for(i=0;i<3;i++){
  printf("%X ",vet+i);
  }
}

O programa acima  retorna o endereço de memória de cada valor do vetor presente no programa.
