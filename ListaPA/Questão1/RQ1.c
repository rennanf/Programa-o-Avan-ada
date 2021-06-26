 01. Seja o seguinte trecho de programa:
 int i=3,j=5;
 int *p, *q;
 p = &i;
 q = &j;
Determine o valor das seguintes expressões:

p == &i; 
É Feita uma comparação de valores arespeito do que está armazenado em p, comparando a igualdade ao endereço de i, como sabemos isso está correto, logo  entendemos
que é true( ou 1 ).

*p - *q; -
se o conteudo armazenado nas variáveis for diminuindo , o resultado vai ser -2, pois ficará [3-5].
            
**&p; - 
esse comando retornará o valor de P, nesse caso P=i=3 ou seja, o valor será 3.

3 - *p/(*q) + 7; - 
Se pegarmos os valores armazenados na memoria de dois ponteiros ,  no caso p e q, e vemos que são inteiros, percebemos que a divisão será 0, dai vemos que restarão apenas a somas do valores, 
soma essa que resulta em 10.
