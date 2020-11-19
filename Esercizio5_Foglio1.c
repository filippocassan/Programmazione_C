#include <stdio.h>

//Consegna:
//Si scriva un programma in linguaggio C che legga due numeri da tastiera, detti A e B, e determini le seguenti informazioni, stampandole a video:
//○ 1. determini se B è un numero positivo o negativo
//○ 2. determini se A è un numero pari o dispari
//○ 3. calcoli il valore di A+B
//○ 4. determini quale scelta dei segni nell’espressione (±A) + (±B) porta al risultato
//massimo, e quale è questo valore massimo. Suggerimento: il valore massimo della somma di A e B si può ottenere sommando il valore assoluto di A e di B.

int main() 
{
  
//Dichiaro le variabili
int A;
int B;

//Chiedo all'utente di inserire due numeri
printf("Inserisci il primo numero: ");
scanf("%d", &A);

printf("Inserisci il secondo numero: ");
scanf("%d", &B);

//1.
if (B < 0){
  printf("Il secondo numero inserito è negativo\n");
}
else{
  printf("Il secondo numero inserito è positivo\n");
}

//2.
if (A%2 == 0){
  printf("Il primo numero inserito è pari\n");
}
else{
  printf("Il primo numero inserito è dispari\n");
}

//3.
printf("La somma dei due numeri inseriti è: %d\n", A + B);

return (0);
}