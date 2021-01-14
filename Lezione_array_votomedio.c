#include <stdio.h>

int main(){

int dim;
printf("Quanti voti devi inserire? ");
scanf("%d", &dim);

int voti[dim];
int i;

for (i = 0; i < dim; i++){
    printf("Inserisci il voto dello studente %d: ", i+1);
    scanf("%d", &voti[i]);
}

int somma = 0;
float media;

for (i = 0; i < dim; i++){
    somma = somma + voti[i];
}

media = (float) somma / dim;

printf("La media dei voti dei %d studenti inseriti è: %0.2f\n", dim, media);

return (0);
}