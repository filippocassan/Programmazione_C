#include <stdio.h>

//Consegna:
//Si scriva una funzione in linguaggio C che, ricevuti in ingresso tre numeri interi, restituisca il valore minimo.

//Dichiaro la funzione con i tipi
int min(int a, int b, int c){

//Dichiaro la variabile che mi sarà utile nella funzione
int min;

//Utilizo if/else if per analizzare tutti i casi e definire qual è il minimo tra i tre numeri a, b, c 
if (a < b && a < c){
  min = a;
}
else if (b < a && b < c){
  min = b;
}
else if (c < a && c < b){
  min = c;
}

//La funzione deve ritornare la variabile min
return min;
}

//Testo la funzione
int main (){

//Dichiaro le variabili
int a, b, c;

//Avviso l'utente cosa dovrà fare e chiedo di premere invio per continuare
printf("Ora dovrai inserire tre numeri dei quali vuoi sapere il minore.\n");
printf("Premi invio per continuare\n");
scanf("input");

//Acquisisco i tre numeri dall'utente e li associo alle rispettive vairabili
printf("Inserisci un numero: ");
scanf("%d", &a);
printf("Inserisci un numero: ");
scanf("%d", &b);
printf("Inserisci un numero: ");
scanf("%d", &b);

//Stampo a schermo il minore dei numeri inseriti utilizzando la funzione definita precedentemente 
printf("Il più piccolo numero inserito è: %d\n", min(a, b, c));

return (0);
}