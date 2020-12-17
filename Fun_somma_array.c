#include <stdio.h>

int somma(int a[], int dim){
    
    int tot = 0;
    int i;

    for(i = 0; i < dim; i++){
        tot = tot + a[i];
    }

return (tot);
}

int main()
{

int dim;
int i;
int a[i];

printf("Inserisci la dimensione dell'array: ");
scanf("%d", &dim);

printf("\n");

for(i = 0; i < dim; i++){
    printf("Inserisci il valore %d: ", i);
    scanf("%d", &a[i]);
}

printf("\nL'array si presenta così:\n");

for (i = 0; i < dim; i++){
    printf("Valore %d: %d\n", i, a[i]);
}

printf("\n");

printf("La somma degli elementi dell'array è pari a: %d\n", somma(a, dim));

return (0);
}