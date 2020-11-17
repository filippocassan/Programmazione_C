#include <stdio.h>

//Sommare i numeri pari e dispari separatamente (i numeri inseriti sono 10).

int main(){

int somma_pari = 0;
int somma_dispari = 0;
int numero;
int i;

printf("Ora ti verrà richiesto di inserire 10 numeri\n");

for (i = 0; i < 10; i++){
  printf("Inserisci un numero: ");
  scanf("%d", &numero);

  if (numero%2 == 0)
    somma_pari = somma_pari + numero;

  else 
    somma_dispari = somma_dispari + numero;
}

printf("La somma dei numeri pari inseriti è: %d\n", somma_pari);

printf("La somma dei numeri dispari inseriti è: %d\n", somma_dispari);

return 0;
}