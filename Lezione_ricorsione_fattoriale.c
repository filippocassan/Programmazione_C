#include <stdio.h>

//Versione ricorsiva del fattoriale
//Esempio lezione 16.10.2020

int fattoriale(int n){

//Dichiaro la variabile
int risultato = 1;

    //Utilizzo un ciclo for per ripetere la procedura fino a quando la variabile i non sarà uguale alla variabile n
    for (int i = 1; i <= n; i++){
        
        //In questo modo viene moltiplicato il valore di n (in questo caso 5) per il valore del fattoriale del suo precedente (in questo caso 4)
        risultato = n * fattoriale(n - 1); //Iterativa: risultato += i;
    }

//La funzione deve ritornare la variabile risultato
return (risultato);
}

//Testo la funzione 
int main()
{

//Dichiaro la variabile
int n;

//Chiedo all'utente di quale numero desidera sapere il fattoriale
printf("Inserisci il numero di cui vuoi sapere il fattoriale: ");
scanf("%d", &n);

//Stampo a schermo il fattoriale del numero inserito utilizzando la funzione creata precedentemente
printf("Il fattoriale di %d è: %d\n", n, fattoriale (n));

return (0);
}