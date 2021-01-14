#include <stdio.h>

int sommapari(int a[], int dim){

int somma = 0;
int i;

for (i = 0; i < dim; i++){
    if(a[i] % 2 == 0)
        somma = somma + a[i];
}

return (somma);
}

int main(){

int dim;
printf("Inserisci la dimensione dell'array: ");
scanf("%d", &dim);

int a[dim];
int i;

for(i = 0; i < dim; i++){
    printf("Inserisci il valore %d: ", i);
    scanf("%d", &a[i]);
}

printf("\n");

printf("La somma dei numeri pari all'interno dell'array è: %d\n", sommapari(a, dim));

return (0);
}