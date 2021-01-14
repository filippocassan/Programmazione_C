#include <stdio.h>

int ricerca_pari(int a[], int dim){

int trovato = 0;
int i = 0;

while(i < dim && !trovato){
    if (a[i] % 2 == 0)
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

printf("Verrà stampato a schermo il valore 1 se il programma ha trovato almeno un numero pari nell'array, altrimenti comparirà il valore 0\n");

printf("%d\n", ricerca_pari(a, dim));

return (0);
}