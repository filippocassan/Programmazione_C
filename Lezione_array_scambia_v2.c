#include <stdio.h>

//Scrivere una funzione che scambi il valore a[i] con quello in a[j]

//Dichiaro la funzione e la definisco "void", in quanto non deve restituire nulla.
//La funzione prende in considerazione l'array a[], la sua dimensione dim e i due valori che si desidera scambiare (i e j)
void scambia(int a[], int dim, int i, int j){

    //Utilizzo if per effettuare un "sanity check" in modo da assicurarmi che le posizioni i e j dell'array che si vogliono scambiare possano esistere
    if (i > 0 && i <= dim - 1 && j > 0 && j <= dim - 1){
        
        //Se la condizione sopra è verificato, dichiaro una vairabile temporanea (tmp) e la associo alla prima posizione i, successivamente pongo a[i] = a[j] e infine a[j] = tmp, ovvero = a[i]
        int tmp = a[i];
        a[i] = a[j];
        a[j] = tmp;

    }
}

//Testo la funzione appena creata
int main()
{

//Dichiaro le variabili
int dim;
printf("Inserisci la dimensione dell'array: ");
scanf("%d", &dim);
int a[dim];
int i;

//Utilizzo un ciclo for per riempire l'array
for(i = 0; i < dim; i++){
    printf("Inserisci il valore %d: ", i);
    scanf("%d", &a[i]);
}

//Vado a capo per una pulizia del codice
printf("\n");

//Utilizzo un ciclo for per stampare a schermo l'array prima dell'utilizzo della funzione
for(i = 0; i < dim; i++){
    printf("%d  ", a[i]);
}

//Vado a capo per una pulizia del codice
printf("\n");

//Utilizzo la funzione scambia per scambiare il valore in posizione 1 (il secondo inserito, poichè l'array parte da 0) con il valore 3 (il quarto inserito)
scambia(a, dim, 1, 3);

//Utilizzo un ciclo for per stampare a schermo l'array dopo l'utilizzo della funzione
for(i = 0; i < dim; i++){
    printf("%d  ", a[i]);
}

//Vado a capo per una pulizia del codice
printf("\n");

return (0);
}