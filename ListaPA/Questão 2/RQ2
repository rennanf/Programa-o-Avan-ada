Mostre o que será impresso por programa supondo que i ocupa o endereço 4094 na memória.
int i=5, *p;p = &i;
printf("%x %d %d %d %d", p,*p+2,**&p,3**p,**&p+4);}


---------------------- ***********------------------------
ADICIONANDO A BIBLIOTECA PARA INICIAR
#include<stdio.h>

int main(){
int i=5, *p;
p = &i;
printf("%x %d %d %d %d", p,*p+2,**&p,3**p,**&p+4);
}

será impresso : 

(p): como será pego o valor da memoria de i, o valor será impresso 4094.

(*p+2): Ele vai recuperar o endereço armazenado no ponteiro e vai somar 2, resultando que a impressão será 7.

(**&p): Será impresso o valor de p, como ele se define em i,  será impresso 5.

(3**p): Ele vai imprimir o valor do ponteiro p que como vimos é 5, contudo , vai multiplicar por 3, resultando na impressão do valor 15.

(**&p+4): Ele vai imprimir o valor do ponteiro p que como vimos é 5, contudo , vai somar 4, dai teremos a impressão de 9. 

