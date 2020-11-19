#include <stdio.h>

int main() 
{

//Dichiaro le variabili e inizializzo le variabili somma_dispari e somma_pari
int somma_pari = 0;
int somma_dispari = 0;
int numero;
int i;

//Avviso l'utente che dovrà inserire 10 numeri
printf("Ora ti verrà richiesto di inserire 10 numeri\n");

//Utilizzo un ciclo for che dia la possibilità all'utente di inserire 10 numeri, chiedendogli per 10 volte (ovvero fino a quando i < 10) di inserire un numero 
for (i = 0; i < 10; i++){
  printf("Inserisci un numero: ");
  scanf("%d", &numero);

  //Utilizzo if/else per capire se il numero inserito è pari o dispari e su quale variabile somma agire in entrambi i casi
  if (numero%2 == 0)
    somma_pari = somma_pari + numero;

  else 
    somma_dispari = somma_dispari + numero;
}

//Stampo a schermo somma_pari e somma_dispari
printf("La somma dei numeri pari inseriti è: %d\n", somma_pari);
printf("La somma dei numeri dispari inseriti è: %d\n", somma_dispari);

return (0);
}