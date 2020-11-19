#include <stdio.h>

//Consegna:
//Si scriva un programma in linguaggio C che legga un valore intero e visualizzi il valore intero precedente e il successivo.

int main() 
{

//Dichiaro le variabili
int n;
int precedente;
int successivo;

//Chiedo all'utente di inserire un numero
printf("Inserisci un numero: ");
scanf("%d", &n);

//Inizializzo le operazioni
precedente = n - 1;
successivo = n + 1;

//Stampo a schermo il numero precedente e successivo a quello inserito
printf("Il numero precedente a quello inserito è: %d\n", precedente);
printf("Il numero successivo a quello inserito è: %d\n", successivo);

return (0);
}