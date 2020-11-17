#include <stdio.h>

int main(){

int numero;
int i;
int somma = 0;

printf("Ora ti verrà richiesto di inserire 10 numeri \n");

for (i = 0; i < 10; i++){
  printf("Inserisci un numero: ");
  scanf("%d", &numero);
  somma = somma + numero;
}

printf("La somma dei numeri inseriti è: %d", somma);

return 0;

}