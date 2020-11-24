#include <stdio.h>
#include <math.h>

//Consegna:
//Si scriva una funzione in linguaggio C che, ricevuti in ingresso le coordinate x e y di due punti del piano cartesiano e restituisca la loro distanza.
//Hint: la distanza di due punti in coordinate cartesiane si calcola usando la formula d(A, B) = √(x1−x)^2 + (y1−y)^2, dove A=(x,y),B=(x1,y1)la funzione radice quadrata(sqrt) in C è nella
//librera math.h, che va quindi importata.

//Definisco la funzione
float distanza(int x1, int x2, int y1, int y2){

//Dichiaro le variabili utili per la funzione
float potenza1;
float potenza2;
float sottrazione1;
float sottrazione2;
float somma;
float distanza_totale;

//Definisco la prima operazione
sottrazione1 = x2 - x1;
sottrazione2 = y2 - y1; 

//Definisco la seconda operazione utilizzando la funzione pow(base, esponente) già inserita nella libreria math.h che ho aggiunto sopra
potenza1 = pow (sottrazione1, 2);
potenza2 = pow (sottrazione2, 2);

//Definisco la terza operazione
somma = potenza1 + potenza2;

//Definisco la quarta ed ultima operazione
distanza_totale = sqrt(somma);

//La funzione deve restituire la variabile distanza_totale
return (distanza_totale);
}

//Testo la funzione
int main()
{

//Dichiaro le variabili
float x1;
float x2;
float y1;
float y2;

//Avviso l'utente cosa dovrà fare
printf("Ora dovrai inserire le coordinate (x,y) di due punti del piano dei quali vuoi sapere la distanza.\n");
printf("Premi invio per continuare.\n");
scanf("input");

//Ottengo dall'utente le coordinate (x,y) dei due punti
printf("Inserisci la coordinata x del primo punto: ");
scanf("%f", &x1);
printf("Inserisci la coordinata y del primo punto: ");
scanf("%f", &y1);
printf("Inserisci la coordinata x del secondo punto: ");
scanf("%f", &x2);
printf("Inserisci la coordinata y del secondo punto: ");
scanf("%f", &y2);

//Stampo a schermo il valore della distanza tra i due punti utilizzando la funzione "distanza" definita precedentemente
printf("La distanza tra il punto (%0.2f, %0.2f) e il punto (%0.2f, %0.2f) è pari a: %0.4f", x1, y1, x2, y2, distanza(x1, x2, y1, y2));

return (0);
}