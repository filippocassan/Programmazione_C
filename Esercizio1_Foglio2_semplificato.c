#include <stdio.h>

//Definisco la funzione potenza
int potenza(int a, int b)
{

//Dichiaro le variabili che mi saranno utili per il ciclo for
int pow = 1;
int i;

//Utilizzo un ciclo for per far moltiplicare la variabile "pow" per la variabile a, b volte
for(i = 0; i < b; i++){
    pow = pow * a; 
}

//La funzione deve restituire il valore della variabile "pow"
return (pow);
}

//testo la funzione appena creata
int main() 
{

//Dichiaro le variabili
int x;
int y;

//Chiedo all'utente di inserire la base e l'esponente
printf("Inserisci la base della potenza: ");
scanf("%d", &x);
printf("Inserisci l'esponente: ");
scanf("%d", &y);

//Stampo a schermo il risultato della potenza richiesta dall'utente utilizzando la funzione che ho definito sopra
printf("Il risultato della potenza %d ^ %d è: %d", x, y, potenza(x, y));

return (0);
}