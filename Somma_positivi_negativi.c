#include <stdio.h>

int main() 
{

//Dichiaro le variabili e inizializzo le variabili somma_negativi e somma_positivi
int numero;
int i;
int somma_negativi = 0;
int somma_positivi = 0;

//Avviso l'utente che dovrà inserire 10 numeri
printf("Ora ti verrà richiesto di inserire 10 numeri\n");

//Utilizzo un ciclo for che dia la possibilità all'utente di inserire 10 numeri, chiedendogli per 10 volte (ovvero fino a quando i < 10) di inserire un numero 
for (i = 0; i < 10; i++){
  printf("Inserisci un numero: ");
  scanf("%d", &numero);

  //Utilizzo if/else per capire se il numero inserito è negativo o positivo e su quale variabile somma agire in entrambi i casi
  if (numero < 0)
    somma_negativi = somma_negativi + numero;
  
  else
    somma_positivi = somma_positivi + numero;
}

//Stampo a schermo somma_positivi e somma_negativi
printf("La somma dei numeri positivi è: %d\n", somma_positivi);
printf("La somma dei numeri negativi è: %d\n", somma_negativi);

return (0);
}