#include <stdio.h>

int main(){

//Dichiaro le variabili (i e p mi serviranno per il ciclo for)
int n;
int k;
int i;
int p;

//Utilizzo due volte if per controllare che i numeri inseriti siano positivi
if (k >= 0){
  printf("Inserisci il numero di cui vuoi sapere i multipli: ");
  scanf("%d", &k);
}

if (n >= 0){
  printf("Inserisci quanti multipli vuoi sapere del numero: ");
  scanf("%d", &n);
}

//Stampo a schermo un avviso per l'utente 
printf("Ecco i multipli del numero che hai inserito: \n");

//Utilizzo il ciclo for per moltiplicare il numero di cui si vogliono sapere i multipli k per i(che parte da 1 e poi crescerà sempre di 1 finchè la condizione i <=n sarà valida) e associo il prodotto alla variabile p
for (i = 1; i <= n; i++){
  p = k * i;

  //Stampo la variabile p, che rappresenta tutti i multipli del numero k inserito dall'utente
  printf("%d\n", p);
}

return 0;
}