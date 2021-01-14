#include <stdio.h>

int tuttipari(int a[], int dim){

    int i = 0;
    int OK = 1;

    while (i < dim && OK){
        if (a[i] % 2 == 1)
            OK = 0;
        i++;
    }
return (OK);
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

printf("%d\n", tuttipari(a, dim));

return (0);
}