#include <stdio.h>

int cerca_negativo(int a[], int dim){

int trovato = 0;
int i = 0;

    while (i < dim && !trovato){

        if(a[i] < 0) 
            trovato = 1;
        i++;
    }
return (trovato);
}

int main()
{

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

printf("Se c'è un elemento negativo all'interno dell'array ti verrà restituito il valore 1, altrimenti comparirà a schermo il valore 0\n");

printf("Il tuo valore è: %d", cerca_negativo(a, dim));

return (0);
}
