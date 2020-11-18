#include <stdio.h>

//Prendere in input n numeri, calcolare e visualizzare il valore massimo.

int main(){

//Dichiaro le variabili
int n;
int num;
int i;
int max;

//Aviso l'utente che cosa esegue il programma
printf("Ora ti verrà chiesto quanti numeri vuoi inserire e successivamente dovrai inserirli. Il programma ti restituirà poi il massimmo tra i numeri che hai inserito.\nPremi invio per continuare\n");

//Utilizzo scanf("input") per permettere all'utente di avviare il programma premendo invio
scanf ("input");

//Utilizzo while per capire quanti numeri vuole inserire l'utente, il valore deve ovviamente essere positivo e quindi finchè n <= 0
while (n <= 0){
  printf("Quanti numeri vuoi inserire? ");
  scanf("%d", &n);
}

//Utilizzo un ciclo for per permettere all'utente di inserire i numeri fino a quando non sono uguali al n (numeri che l'utente ha voluto inserire)
for (i = 0; i < n; i++){
  printf("Inserisci un numero: ");
  scanf("%d", &num);

  //Utilizzo un primo if per "inizializzare" il primo massimo (max)
  if (i == 0){
    max = 0;
  }

  //Utilizzo un secondo if per aggiornare il massimo (max) se il numero inserito è maggiore del precedente 0
  if (num > max){
    max = num; 
  }
}

//Stampo a schermo il massimo dei numeri inseriti dall'utente
printf("Il numero massimo inserito è: %d\n", max);

return 0;
}