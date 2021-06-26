Suponha que as seguintes declarações tenham sido realizadas:

float aloha[10], coisas[10][5], *pf, value = 2.2;
int i=3;


Identifique quais dos seguintes comandos é válido ou inválido:

aloha[2] = value; ------- Válido
scanf("%f", &aloha); ------- Inválido, pois não retornar o endereço do vetor pois não tem posição especificada.
aloha = value"; -------  pois não está declarado a posição do vetor que recebe value, Além disso possui aspas não abertas, apenas fechadas.
printf("%f", aloha); ------  pois não está declarado a posição do vetor que recebe value.
coisas[4][4] = aloha[3];------- Válido 
coisas[5] = aloha; ---------- Inválido, pois a linha coisas não consegue receber o valor.
pf = value; ------- Inválido, pois ele não aponta para value, já que não tem  operador de endereço.
pf = aloha; Válida



