#include <stdio.h>

int main() {

//Dichiaro le variabili
int i;
int numero;

//Utilizzo un ciclo for che dia la possibilità all'utente di inserire 10 numeri, chiedendogli per 10 volte (ovvero fino a quando i < 10) di inserire un numero
for(i = 0; i < 10; i++){
  printf("Inserisci un numero: ");
  scanf("%d", &numero);
}

return 0;
}