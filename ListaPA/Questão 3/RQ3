Se  i  e  j  são  variáveis  inteiras  e  p  e  q  ponteiros  para  int,  quais  das  seguintes  expressões  deatribuição são ilegais?

p = i;q = &j;p = &*&i;i = (*&)j;i = *&j;i = *&*&j;q = *p;i = (*p)++ + *q;

-----------------------------------------------------------------------------------


p = i; -:
Note que i não tem operador de endereço, partindo disso,  sabemos que o p não pode apontar para i, então é uma operação ilegal.

q = &j; :
Aqui, q consegui apontar para i, então esta operação é legal.

p = &*&i; :
COmo será retornado um endereço de memoria qualquer, a operação é legal.

i = (*&)j; :
Note que neste operação, o j está fora dos parênteses, sendo assim é impossível acessar o valor do mesmo, determinamos então que a operação é ilegal.

i = &j; :
i recebe o valor armazenado em j, portanto é uma opração legal.

i = *&*&j; :
i receberá um valor em um edereço, tornando a  operação, legal.

q = *p; :
Note que está sendo usado um operador de referência, quando na verdade , deveria ser um operador de endereço , isso torna nossa operação ilegal.

i = (*p)++ + *q; :
A operação é legal, pois irá retornar o valor para qual p aponta, vai somar e depois incrementar o valor apontado.
