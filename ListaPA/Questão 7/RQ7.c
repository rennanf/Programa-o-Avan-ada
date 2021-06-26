Considerando  a  declaração  int  mat[4],  *p,  x;,  quais  das  seguintes  expressões  são  válidas?Justifique.
  
p = mat + 1;
p = mat++;
p = ++mat;
x = (*mat)++;

------------------------------------
  
  
p = mat + 1;  É VALIDO ! 
Sabemos que vetores não precisam necessáriamente de um operador de endereço, e partindo disso, tem-se em mente que pode ser incrementado uma posião especifica.
  
p = mat++; NÃO É VÁLIDO !
Deveria existir ai um incremento em int[].
  
p = ++mat;  NÃO É VALIDO.
  
É tentado a incrementação de um valor inteiro (exatamente como na anterior) e novamente exite a falta do incremento em int.
  
x = (*mat)++;  VÁLIDO

Como x consegue receber o valor de mat e logo depois incrementa , esta operação é considerada válida.
  
