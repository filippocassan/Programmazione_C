#include <stdio.h>

//Consegna:
//Si scriva un programma in linguaggio C per calcolare il valore massimo e minimo di un insieme di N numeri inseriti da tastiera.
//Il programma deve leggere il valore di N, ed in seguito deve leggere una sequenza di N numeri. 
//A questo punto il programma deve stampare il massimo ed il minimo tra i numeri inseriti.

int main() 
{

//Dichiaro le variabili
int N;
int input;
int i;
int max = 0;
int min = 0;

//Chiedo all'utente quanti numeri vuole inserire e li associo alla variabile N
printf("Quanti numeri vuoi inserire? ");
scanf("%d", &N);

//Utilizzo un ciclo for per far inserire all'utente i numeri che voleva e li associo alla variabile input
for (i = 0; i < N; i++){
  printf("Inserisci un numero: ");
  scanf("%d", &input);

  //Alla prima iterazione il max = input e il min = input
  if (i == 0){
    max = input;
    min = input;
  }
    //Ma se nelle successive iterazioni l'input è più piccolo del min di prima lo sostituisce
    else if (input < min){
    min = input;
  }
    //Allo stesso modo con il max
    if (input > max){
      max = input;
    }
}

//Stampo a schermo il minimo numero inserito e il massimo numero inserito
printf("Il massimo numero inserito è: %d\n", max);
printf("Il minimo numero inserito è: %d\n", min);

return(0);
}