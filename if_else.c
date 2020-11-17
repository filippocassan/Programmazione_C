#include <stdio.h>

int main (){

int a, b;

//Ricevo due numero in input dall'utente
printf("Inserisci il primo numero: ");
scanf("%d", &a);

printf("Inserisci il secondo numero: ");
scanf("%d", &b);

if (a > b)
  printf("Il primo numero è maggiore del secondo\n");

else if (a < b)
  printf("Il secondo numero è maggiore del primo\n");

//Se non è vero che a<b ne a>b allora vuol dire che a=b
else 
  printf("I due numeri sono uguali\n");

return 0;
}