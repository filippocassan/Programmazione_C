#include <stdio.h>

//Consegna:
//Si realizzi un programma in linguaggio C che acquisisca da tastiera un numero e stampi un messaggio che indichi 
//se tale numero sia positivo oppure negativo, e ne stampi il valore assoluto (risolverlo senza alcuna variabile di appoggio).

int main() 
{

//Dichiaro le variabili
int n;
int positivo;
int negativo;

//Chiedo all'utente di inserire un numero
printf("Inserisci un numero: ");
scanf("%d", &n);

//Utilizzo if/else per capire se il numero inserito è positivo o negativo e lo stampo a schermo
if (n > 0)
  printf("Il numero inserito è positivo\n");

else {
  printf("Il numero inserito è negativo\n");

  //Utilizzo n * (-1) per ottenere il valore assoluto del numero negativo e lo stampo a schermo
  printf("Il valore assoluto del numero inserito è: %d\n", n * (-1));
}
 
return (0);
}