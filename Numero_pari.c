#include <stdio.h>

int main() 
{

//Dichiaro le variabili
int a;

//L'utente inserisce un numero
printf("Inserisci un numero: ");
scanf("%d", &a);

//Utilizzo if/else per stampare a schermo se il numero inserito è pari o dispari e a%2 == 0, per indicare che la divisione di a per 2 dà resto (%) 0 e quindi il numero è pari 
if (a%2 == 0)
  printf("Il numero inserito è pari");

else 
  printf("Il numero inserito è dispari");

return (0);
}