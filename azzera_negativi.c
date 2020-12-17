#include <stdio.h>

//Dato un array a[i], azzerare soltanto gli elementi negativi.

int main(){

int i;
int dim;
int a[i];

printf("Inserisci la dimensione dell'array: ");
scanf("%d", &dim);

printf("\n");

for (i = 0; i < dim; i++){

    printf("Inserisci il valore %d: ", i);
    scanf("%d", &a[i]);
}

for(i = 0; i < dim; i++){

    if (a[i] < 0)
        a[i] = 0;
}

printf("\n");

printf("Ora, dopo aver azzerato gli elementi negativi, l'array si presenta così:\n");

for(i = 0; i < dim; i++){
    printf("Valore %d: %d\n", i, a[i]);
}

return (0);
}