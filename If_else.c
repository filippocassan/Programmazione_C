#include <stdio.h>

int main() 
{

//Dichiaro le variabili
int a, b;

//Ricevo due numeri in input dall'utente
printf("Inserisci il primo numero: ");
scanf("%d", &a);

printf("Inserisci il secondo numero: ");
scanf("%d", &b);

//Utilizzo if/else if per stampare a schermo quale numero è maggiore
if (a > b)
  printf("Il primo numero è maggiore del secondo\n");

else if (a < b)
  printf("Il secondo numero è maggiore del primo\n");

//Se non è vero che a<b ne a>b allora vuol dire che a=b, quindi utilizzo else per stampare a schermo che i due numeri sono uguali
else 
  printf("I due numeri sono uguali\n");

return (0);
}