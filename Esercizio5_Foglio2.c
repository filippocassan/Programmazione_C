#include <stdio.h>

//Consegna:
//Si scriva una funzione in linguaggio C che riceva in ingresso un numero float corrispondente al prezzo iniziale di un articolo
//e un numero int rappresentante il valore percentuale di sconto e restituisca il prezzo scontato.

//Definisco la funzione 
float prezzo_scontato(float prezzo, int percentuale){

//Dichiaro le variabili che mi saranno utili nella funzione
float sconto;
float prezzo_scontato;

//Definisco l'operazione per calcolare lo sconto in euro...
sconto = (float) (prezzo * percentuale)/100;

//...e sottraggo al prezzo iniziale lo sconto appena trovato
prezzo_scontato = prezzo - sconto;

//La funzione deve poi restituire il valore della variabile prezzo_scontato
return (prezzo_scontato);
}

//Testo la funzione
int main() 
{

//Dichiaro le variabili
float prezzo;
int percentuale;

//Chiedo all'utente di inserire un prezzo e una percentuale di sconto che desidera calcolare
printf("Inserisci il prezzo iniziale del prodotto: ");
scanf("%f", &prezzo);
printf("Inserisci la percentuale di sconto: ");
scanf("%d", &percentuale);

//Stampo a schermo il prezzo scontato utilizzando la funzione definita sopra
printf("Il prezzo scontato è: %0.2f", prezzo_scontato(prezzo, percentuale));

return (0);
}