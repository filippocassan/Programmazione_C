#include <stdio.h>

int main(){

int a;

printf("Inserisci un numero: ");
scanf("%d", &a);

//Utilizzo a%2 == 0, per indicare che la divisione di a per 2 da resto (%) 0
if (a%2 == 0)
  printf("Il numero inserito è pari");

else 
  printf("Il numero inserito è dispari");

return 0;

}