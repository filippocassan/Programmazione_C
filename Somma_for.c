#include <stdio.h>

int main() 
{

//Dichiaro le variabili e inizializzo la variabile somma
int numero;
int i;
int somma = 0;

//Avviso l'utente che dovrà inserire 10 numeri
printf("Ora ti verrà richiesto di inserire 10 numeri \n");

//Utilizzo un ciclo for che dia la possibilità all'utente di inserire 10 numeri, chiedendogli per 10 volte (ovvero fino a quando i < 10) di inserire un numero 
for (i = 0; i < 10; i++){
  printf("Inserisci un numero: ");
  scanf("%d", &numero);

  //Indico l'operazione che deve essere eseguita con il numero inserito dall'utente fino a quando il ciclo for non si esaurisce (ovvero i diventa maggiore o uguale a 10)
  somma = somma + numero;
}

//Stampo a schermo la somma dei 10 numeri inseriti dall'utente
printf("La somma dei numeri inseriti è: %d", somma);

return (0);
}