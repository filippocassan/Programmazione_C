#include <stdio.h>

//Calcolare la somma dei primi n numeri naturali con una funzione ricorsiva
//Esempio lezione 16.10.2020

int somma(int n)
{

//Dichiaro la variabile di cui avrò bisogno all'interno del ciclo for
int risultato = 0;

    //Utilizzo un ciclo for per sommare alla variabile risultato (inizialmente = 0) somma(n - 1) (quindi in questo caso n = 5, somma(5-1) ---> somma(4) = 10)
    for (int i = 1; i <= n; i++){

        risultato = n + somma(n - 1); //Iterativa: risultato += i;
    }

//La funzione "somma" deve restituire la variabile "risultato"
return (risultato);
}

//Testo la funzione
int main() 
{

//Dichiaro le variabili
int n;

//Chiedo all'utente fino a che numero eseguire la somma
printf("Fino a che numero vuoi sapere la somma? ");
scanf("%d", &n);

//Stampo a schermo il risultato della somma utilizzando la funzione creata in precedenza
printf("Il risultato della somma dei primi %d numeri Naturali è: %d\n", n, somma(n));

return (0);
}