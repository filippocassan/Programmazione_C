#include <stdio.h>

int main() 
{

//Dichiarare le variabili
int base, altezza, area;

//L'utente inserisce un numero, che sarà la base del rettangolo
printf("Inserisci la base del rettangolo: ");
scanf("%d", &base);

//L'utente inserisce un numero, che sarà l'altezza del rettangolo
printf("Inserisci l'altezza del rettangolo: ");
scanf("%d", &altezza);

//Definisco l'area
area = base * altezza;

//Stampo a schermo il valore dell'area del rettangolo
printf("L'area del rettangolo è: %d\n", area);

return (0);
}