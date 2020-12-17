#include <stdio.h>

void riempi(int a[], int dim){

int i;

for (i = 0; i < dim; i++){
    printf("Inserisci il valore %d: ", i);
    scanf("%d", &a[i]);
}
}

int main(){

int i;
int a[i];
int dim;

printf("Inserisci la dimensione dell'array: ");
scanf("%d", &dim);

printf("\n");

riempi(a, dim);

printf("\nL'array si presenta così:\n");

for(i = 0; i < dim; i++){
    printf("Valore %d: %d\n", i, a[i]);
}

return (0);
}