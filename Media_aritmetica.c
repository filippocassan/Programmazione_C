#include <stdio.h>

int main(){

int n1, n2, n3;
float media;

printf("Inserisci il primo numero: ");
scanf("%d", &n1);

printf("Inserisci il secondo numero: ");
scanf("%d", &n2);

printf("Inserisci il terzo numero: ");
scanf("%d", &n3);

//Operazione di casting, ovvero di conversione di un'operazione, come per esempio (n1+n2+n3)/3 in un numero float, ovvero con la virgola
media = (float)(n1 + n2 + n3)/3;

//Utilizzo %6.2f per indicare quante cifre voglio precisamente prima e dopo la virgola
printf("La tua media è: %6.2f\n", media);

return 0;

}

