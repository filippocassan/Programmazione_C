#include <stdio.h>

//Sommare i numeri positivi e negativi separatamente (i numeri inseriti sono 10).

int main(){

int numero;
int i;
int somma_negativi = 0;
int somma_positivi = 0;

printf("Ora ti verrà richiesto di inserire 10 numeri\n");

for (i = 0; i < 10; i++){
  printf("Inserisci un numero: ");
  scanf("%d", &numero);

if (numero < 0)
  somma_negativi = somma_negativi + numero;

else 
  somma_positivi = somma_positivi + numero;
}

printf("La somma dei numeri positivi è: %d\n", somma_positivi);

printf("La somma dei numeri negativi è: %d\n", somma_negativi);

return 0;
}