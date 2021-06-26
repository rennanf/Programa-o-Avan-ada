Determine  o  que  será  mostrado  pelo  seguinte  programa  (compile-o,  execute-o  e  verifique  seforam obtidas as respostas esperadas).


/* (a) */
valor = 10;
p1 = &valor;
*p1 = 20;
printf("%d \n", valor);  

(a )- RETORNA 28.

/* (b) */
temp = 26.5;
p2 = &temp;
*p2 = 29.0;
printf("%.1f \n", temp); 

(b) RETORNA 29

/* (c) */
p3 = &nome[0];
aux = *p3;
printf("%c \n", aux); 

(c) Retorna P, pois ele retorna o valor da primeira posição do vetor em questão, no caso o valor é P.

/* (d) */
p3 = &nome[4];
aux = *p3;
printf("%c \n", aux); 

(d) Retorna E, que é a quarta posição dentro do vetor como descrito no código.

/* (e) */
p3 = nome;
printf("%c \n", *p3); 

(e) Retorna P , pois o indice não é informado, sendo assim, é atribuido o padrão, ou seja, o endereço do primeiro indice, no caso, P.

/* (f) */
p3 = p3 + 4;
printf("%c \n", *p3); 

(f) Retorna E, Note que o ponteiro possui um incremente que nos auxulia a entender que temos permissão de passar pelo array que está indo ao indice 4.

/* (g) */
p3--;
printf("%c \n", *p3); 

(g) Retorna T, pois caminha para o elemento 5 e após ser decrementado, nos gera T.

/* (h) */
vetor[0] = 31;
vetor[1] = 45;
vetor[2] = 27;
p4 = vetor;
idade = *p4;
printf("%d \n", idade); 

(h) Retorna 31, pois idade receberá o conteudo de p4, e como não possui indice, retorna o primeiro valor.

/* (i) */
p5 = p4 + 1;
idade = *p5;
printf("%d \n", idade); 

(i) Como possui incremento. andamos para o proximo elemento armazenado pelo vetor, no caso será retornado 45.

/* (j) */
p4 = p5 + 1;
idade = *p4;
printf("%d \n", idade); 

(J) P5 está apontando para um array  e está no indice 2, quando incrementado, será recebido por p4 o ultimo elemento do array em questão, resultand no retorno de 27.

/* (l) */
p4 = p4 - 2;
idade = *p4;
printf("%d \n", idade); 

(l) Retorna 31.

/* (m) */
p5 = &vetor[2] - 1;
printf("%d \n", *p5); 

(m) Está apontando para a posição 2 do array, após decremento, temos o retorno 45,

/* (n) */
p5++;
printf("%d \n", *p5); 

(n) Caminha pelo array , é incrementado até chegar ao indice 2 e retornar o valor 27.


analisando rapidamente, vemos que os resultados são resultados esperados de acordo com o que conhecemos.
