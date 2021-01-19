#include <stdio.h>

//Esiste un elemento in posizione a[i] == x, tale per cui ogni elemento in altre posizione dell'array a[] sia maggiore di a[i]/x?

int minoreditutti(int a[], int dim, int x){
    int OK = 1;
    int i = 0;

    while(i < dim && OK){
        if (x > a[i]) OK = 0;
    i++;
    }
return (OK);
}

int cerca_min(int a[], int dim){

int min = 0;
int i = 0;
int trovato = 0;

while(i < dim && !trovato){
    if (minoreditutti(a, dim, a[i])){
        trovato = 1;
        min = a[i];
    }
    i++;
}

return (min);
}

int main(){

int dim;
printf("Inserisci la dimensione dell'array: ");
scanf("%d", &dim);
int a[dim];
int i;
int min;

printf("\n");

for(i = 0; i < dim; i++){
    printf("Inserisci il valore %d: ", i);
    scanf("%d", &a[i]);
}

printf("\nIl valore minimo all'interno dell'array è: %d", cerca_min(a, dim));

return (0);
}