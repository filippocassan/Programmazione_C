#include <stdio.h>

//13.10.2020
//Lezione sulle funzioni

//Trasformare il fattoriale in una funzione

//Definisco la funzione
int fact(int n)
{

int f = 1;

    while (n > 1)
    {
        f = f * n;
        n = n - 1;
    }

return (f);
}

//Testo la funzione appena creata
int main() 
{

//Dichiaro le variabili 
int x;

//Chiedo all'utente di inserire un numero
printf("Inserisci un numero: ");
scanf("%d", &x);

//Stampo a schermo il fattoriale del numero inserito utilizzando la funzione creata precedentemente
printf("Il fattoriale di %d è: %d", x, fact(x));

return 0;
}