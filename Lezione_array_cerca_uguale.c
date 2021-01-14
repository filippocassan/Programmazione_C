#include <stdio.h>

int ricerca_uguale(int a[], int dim){

    int i = 0;
    int trovato = 0;

    while(i < (dim - 1) && !trovato){
        if (a[i] == a[i + 1])
            trovato = 1;
        i++;
    }

return (trovato);
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

printf("%d\n", ricerca_uguale(a, dim));

return (0);
}