#include <stdio.h>

int contapari(int a[], int dim){

int i;
int contatore = 0;

for (i = 0; i < dim; i++){
    if(a[i] % 2 == 0)
        contatore = contatore + 1;
}

return (contatore);
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

if(contapari(a, dim) == 1) printf("Nell'array c'è un solo numero pari\n");

else printf("Nell'array ci sono %d numeri pari\n", contapari(a, dim));

return (0);
}