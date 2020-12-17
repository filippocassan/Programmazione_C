#include <stdio.h>

//Dato un array a[i], incrementare di +1 tutti gli elementi in posizione pari.

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

for(i = 0; i < dim; i++){
    if (i%2 == 0)
        a[i] = a[i] + 1;
}

printf("\n");

printf("Dopo aver incrementato di 1 gli elementi in posizione pari, l'array si presenta così:\n");

for(i = 0; i < dim; i++){
    printf("Valore %d: %d\n", i, a[i]);
}

return (0);
}