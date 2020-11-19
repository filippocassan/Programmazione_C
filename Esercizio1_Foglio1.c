#include <stdio.h>

//Consegna:
//Si scriva un programma in linguaggio C che legga due valori interi e visualizzi la loro somma e media aritmetica;

int main() 
{

//Dichiaro le variabili
int n;
int m;
int somma;
float media;

//Chiedo all'tente di inserire due numeri
printf("Inserisci il primo numero: ");
scanf("%d", &n);

printf("Inserisci il secondo numero: ");
scanf("%d", &m);

//Inizializzo le operazioni
somma = n + m;

//Utilizzo un'operazione di casting per convertire il risultato della divisione di due interi in un numero con la virgola (float)
media = (float) somma/2;

//Stampo a schermo il risultato delle due operazioni
printf("Questa è la somma dei numeri inseriti: %d\n", somma);

printf("Questa è la media dei numeri inseriti: %0.2f\n", media);

return (0);
}