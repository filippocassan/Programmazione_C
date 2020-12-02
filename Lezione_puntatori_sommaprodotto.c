#include <stdio.h>

//16.10.2020
//Lezione sui puntatori

//Restituire valori multipli utilizzando una funzione

//Definisco la funzione sommaprodotto e utilizzo un puntatore per poter scrivere sulla variabile puntata il valore della somma x + y, mentre la funzione restituirà il prodotto x * y
int sommaprodotto(int x, int y, int *s)
{
    *s = x + y;

    return (x * y);
}

//Testo la funzione
int main() 
{

//Dichiaro le variabili
int somma;
int prodotto;
int x;
int y;

//Chiedo all'utente di inserire due numeri e li associo a x e y
printf("Inserisci un numero: ");
scanf("%d", &x);
printf("Inserisci un numero: ");
scanf("%d", &y);

//Utilizzo la funzione per associare alla variabile "prodotto" il valore che restituisce la funzione, mentre utilizzo "&somma" per indicare che il puntatore *s deve scrivere dentro quella variabile il valore della somma x + y
prodotto = sommaprodotto(x, y, &somma);

//Stampo a schermo la somma e il prodotto dei due numeri inseriti
printf("La somma dei numeri inseriti è: %d\n", somma);
printf("Il prodotto dei numeri inseriti è: %d\n", prodotto);

return (0);
}