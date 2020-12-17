#include <stdio.h> 

//Dato un array a[i], sommare tra loro gli elementi dell'array.

int main(){

int dim;
int i;
int a[i];
int tot = 0;

printf("Inserisci la dimensione dell'array: ");
scanf("%d", &dim);

printf("\n");

for(i = 0; i < dim; i++){
    printf("Inserisci il valore %d: ", i);
    scanf("%d", &a[i]);
}

printf("\nL'array si presenta cosi:\n");

for(i = 0; i < dim; i++){
    printf("Valore %d: %d\n", i, a[i]);
}

for (i = 0; i < dim; i++){
    tot = tot + a[i];
}

printf("\nLa somma degli elementi dell'array è pari a: %d\n", tot);

return (0);
}