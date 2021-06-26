Implemente  um  programa  de  computador  para  testar  estas  suposições  e 
compare  as  respostasoferecidas pelo programa com as respostas que você idealizou.
  
Eu entendi que era pra fazer um programa para sair o mesmo resultado  da questão 9, então foi isso que fiz.

------------------------------------------PROGRAMA ------------------------

#include <stdio.h>

int main() {
  char x_char[4];
  int x_int[4];
  float x_float[4];
  double x_double[4];

      for(int i = 0; i < 4; i++) {
          printf("char posicao %d = %p\n",i, x_char + i);
          printf("int posicao %d = %p\n",i, x_int + i);
          printf("float posicao %d = %p\n",i, x_float + i);
          printf("double posicao %d = %p\n",i, x_double + i);
          printf("\n");
}

  return 0;
}
