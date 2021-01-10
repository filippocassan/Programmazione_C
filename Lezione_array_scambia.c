#include <stdio.h>

//Creo la funzione scambia
void scambia (int v[], int dim, int i, int j)
{
    //Utilizzo if come sanity check. In caso l'utente chieda di scambiare degli elementi che si trovano in posizione non definite nell'array il programma si arresta
    if (i > 0 && i <= dim){
        
        //Definisco una variabile temporanea (tmp) dove memorizzare il valore i in v, successivamente scambio i valori i e j nell'array v
        int tmp = v[i];
        v[i] = v[j];
        v[j] = tmp;
    }
}

//Testo la funzione precedentemente creata
int main()
{

//Dichiaro le variabili che mi saranno utili
int i;
int dim;
int v[dim];

//Chiedo all'utente di inserire la dimensione dell'array
printf("Inserisci la dimensione dell'array: ");
scanf("%d", &dim);

//Utilizzo un ciclo for per riempire l'array
for(i = 0; i < dim; i++){
    printf("Inserisci l'elemento %d: ", i);
    scanf("%d", &v[i]);
}

//Mostro all'utente come si presenta l'array a questo punto
printf("\nPrima della funzione scambia l'array si presenta così: \n");
for(i = 0; i < dim; i++){
    printf("%d  ", v[i]);
}

//Utilizzo la funzione scambia per scambiare l'elemento in posizione 2 dell'array con l'elemento in posizione 3
scambia(v, dim, 2, 3);

//Vado a capo per una pulizia del codice
printf("\n");

//Mostro all'utente come si presenta l'array dopo l'utilizzo della funzione scambia
printf("\nDopo la funzione scambia l'array si presenta così: \n");
for(i = 0; i < dim; i++){
    printf("%d  ", v[i]);
}

//Vado a capo per una pulizia del codice
printf("\n");

return (0);
}