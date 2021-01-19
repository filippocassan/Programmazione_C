#include <stdio.h>

//Cercare un valore all'intero dell'array e se viene trovato restituire 1, altrimenti 0

//Definisco la funzione cerca
int cerca(int a[], int dim, int x){

    int trovato = 0;
    int i = 0;

    while(i < dim && !trovato){
        if (a[i] == x) trovato = 1;
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
int x;

for(i = 0; i < dim; i++){
    printf("Inserisci il valore %d: ", i);
    scanf("%d", &a[i]);
}

printf("\nQuale valore vuoi cercare all'interno dell'array? ");
scanf("%d", &x);

printf("\nTi verrà restituito il valore 1 se l'elemento è stato trovato, altrimenti a schermo verrà stampato 0:\n %d\n", cerca(a, dim, x));

return (0);
}