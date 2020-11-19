#include <stdio.h>

int main(){

//Dichiaro le variabili di cui avrò bisogno per il ciclo for
int i;
int j;

//Utilizzo un primo ciclo for per indicare le (tre) righe che voglio stampare a schermo 
for (i = 0; i < 3; i++){
    
    //Utilizzo un secondo ciclo for annidato per indicare le colonne che voglio stampare a schermo (cinque)
    for (j = 0; j < 5; j++){
      
      //Indico che istruzione deve eseguire il secondo ciclo for quando sono confermate le condizioni di entrambi i for, ovvero deve stampare il valore di i sommato ad 1 (prima i sarà 0, poi 1, poi 2)
      printf("%d ", i + 1);
    }
  
  //Questa è l'istruzione del primo ciclo for, che viene eseguita subito dopo l'istruzione del secondo ciclo for annidato
  printf("\n");  
}

return 0;
}