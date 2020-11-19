#include <stdio.h>

int main() {

//Dichiaro le variabili
int n1, n2, n3;
  //Utilizzo il tipo float poichè la variabile media potrebbe risultare un numero con la virgola
float media; 

//L'utente ha la possibilità di inserire tre numeri
printf("Ora ti verrà chiesto di inserire tre numeri\n");

printf("Inserisci il primo numero:\n ");
scanf("%d", &n1);

printf("Inserisci il secondo numero:\n ");
scanf("%d", &n2);

printf("Inserisci il terzo numero:\n ");
scanf("%d", &n3);

//Effettuo un'operazione di casting attraverso l'utilizzo di (float). E' una conversione del risultato di un'operazione che tra numeri di tipo int sarebbe un intero senza virgola (come per esempio (n1+n2+n3)/3) in un numero float, ovvero con la virgola
media = (float)(n1 + n2 + n3)/3;

//Utilizzo %6.2f per indicare quante cifre voglio precisamente prima e dopo la virgola (in questo caso se ne accettano massimo 6 prima della virgola e 2 dopo la virgola)
printf("La tua media è: %6.2f\n", media);

return 0;
}