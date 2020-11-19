#include <stdio.h>

//Consegna:
//Si scriva un programma in linguaggio C per calcolare la media aritmetica di una serie di numeri inseriti da tastiera.
//L’introduzione di un valore particolare pari a “0” indica il termine del caricamento dei dati.

int main() 
{

//Dichiaro le variabili
int num;
int m;
float media;
int i;
int somma = 0;

//Avviso l'utente su quello che dovrà fare
printf("Ora dovrai inserire una serie di numeri di cui vuoi sapere la media.\n");

//Utilizzo scanf("input") per prendere in input l'"invio" dell'utente in modo da proseguire
printf("Premi invio per iniziare\n");
scanf("input");

//Chiedo all'utente quanti numeri vuole inserire e li associo alla variabile m
printf("Quanti numeri vuoi inserire? ");
scanf("%d", &m);

//Utilizzo il ciclo for per stampare a schermo "Inserisci un numero" quante volte aveva deciso l'utente 
for (i = 0; i < m; i++){
  printf("Inserisci un numero: ");
  scanf("%d", &num);
  
  //Ogni numero inserito lo sommo con la variabile "somma", che parte da 0 e poi continuerà a crescere
  somma = somma + num;
}

//Definisco l'operazione di media aritmetica e converto il risultato da int a float
media = (float) somma / m;

//Stampo a schermo la media aritmetica dei numeri inseriti dall'utente
printf("La media aritmetica dei numeri inseriti è: %0.2f", media);

return 0;
}