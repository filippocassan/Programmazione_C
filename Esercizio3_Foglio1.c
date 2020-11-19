#include <stdio.h>

//Consegna:
//Si scriva un programma in linguaggio C capace di compiere le 4 operazioni (somma, sottrazione, moltiplicazione e divisione) 
//tra due numeri reali inseriti da tastiera. Dopo che sono stati inseriti i due numeri, detti A e B, 
//il programma dovrà visualizzare i quattro valori A+B, A-B, A*B, A/B. Si ipotizzi che sia B!=0.

int main() 
{

//Dichiaro le variabili
int somma;
int sottrazione;
int moltiplicazione;
float divisione;
int A, B;

//Chiedo all'utente di inserire due numeri
printf("Inserisci il primo numero: ");
scanf("%d", &A);

printf("Inserisci il secondo numero: ");
scanf("%d", &B);

//Inizializzo le operazioni
somma = A + B;
sottrazione = A - B;
moltiplicazione = A * B;
//Utilizzo un'operazione di casting per convertire la divisione tra due interi in un numero con la virgola (float)
divisione = (float) A / B;

//Stampo a schermo il risultato delle operazioni
printf("La somma dei tuoi due numeri è: %d\n", somma);
printf("La sottrazione dei tuoi due numeri è: %d\n", sottrazione);
printf("La divisione dei tuoi due numeri è: %0.2f\n",divisione);
printf("La moltiplicazione fra i tuoi due numeri è: %d\n", moltiplicazione);

return (0);
}