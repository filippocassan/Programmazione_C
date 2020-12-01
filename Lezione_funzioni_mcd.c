#include <stdio.h>

//13.10.2020
//Lezione sulle funzioni

//Trasformare il M.C.D. in una funzione

//Definisco la funzione
int mcd(int p, int s)
{
     while (p != s)
    {
        if (p > s) 
            p = p - s;
        else   
            s = s - p;
    }

return (p);
}

//Testo la funzione appena creata
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

//Stampo a schermo il M.C.D. tra i due numeri inseriti ricavandolo dalla funzione creata precedentemente
printf("Il M.C.D. tra i due numeri inseriti è: %d", mcd(x, y));

return (0);
}