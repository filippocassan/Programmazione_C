#include <stdio.h>

//Inizializzare un array con un valore costante, nello specifico 0.

int main(){

int i;
int dim;
int a[i];

printf("Inserisci la dimensione dell'array: ");
scanf("%d", &dim);

printf("\n");

for(i = 0; i < dim; i++){
    printf("Inserisci il valore %d: ", i);
    scanf("%d", &a[i]);
}

printf("\n");

for (i = 0; i < dim; i++){
    a[i] = 0;
}

printf("Dopo l'inizializzazione degli elementi con 0, l'array si presenta così:\n");

for (i = 0; i < dim; i++){
    printf("Valore %d: %d\n", i, a[i]);
}

return (0);
}