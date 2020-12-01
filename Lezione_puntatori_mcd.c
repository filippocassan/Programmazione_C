#include <stdio.h>

//16.10.2020
//Lezione sui puntatori

//Utilizzare i puntatori per definire la funzione scambia da utilizzare nella funzione mcd

//Definisco la funzione scambia
void scambia(int *p, int *q)
{
int tmp;
tmp = *p;
*p = *q;
*q = tmp;
}

//Definisco la funzione mcd
int mcd (int a, int b)
{
    
    while (a != b){

        if (b > a) scambia(&a, &b);

    a = a - b;
    }

return (a);
}

//Testo le due funzioni
int main() 
{

//Dichiaro le variabili
int x;
int y;

//Chiedo all'utente di inserire due numeri
printf("Inserisci un numero: ");
scanf("%d", &x);
printf("Inserisci un numero: ");
scanf("%d", &y);

//Stampo a schermo il M.C.D. tra i due numeri inseriti utilizzando la funzione creata precedentemente
printf("Il Mcd è: %d", mcd(x, y));

return (0);
}