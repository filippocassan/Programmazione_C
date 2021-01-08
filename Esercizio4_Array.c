#include <stdio.h>

//Dati due array A e B, di stessa dimensione ed inizializzati tramite input da tastiera:
//(1) Sommare e moltiplicare, indice ad indice, gli elementi dei due array e salvare i risultati in un terzo array C di supporto (andando a sovrascrivere per ogni operazione effettuata) 
//(2) Confrontare, indice ad indice, gli elementi dei due array e salvare in un terzo array C di supporto l’elemento magggiore in corrispondenza dell’indice di confronto;
//(3) Determinare la media, il valore massimo ed il valore minimo dell’array risultante C del punto precedente.
//Eseguire tutte le istruzioni esclusivamente sul main, senza uso di funzioni. Inoltre, quale dimensione assegnare ai due array non deve essere compreso tra 10 e 15.

int main() 
{

//Dichiaro le variabili che mi saranno utili
int i;
int x;
int a[x];
int b[x];
int c[x];

//Chiedo all'utente di inserire la dimensione degli array a e b e associo il valore a x
printf("Inserisci la dimensione degli array a e b (non deve essere compresa tra 10 e 15): ");
scanf("%d", &x);

//Implemento un controllo per fare in modo che l'utente non possa inserire come dimensione un numero compreso tra 10 e 15
if(x >= 10 && x <= 15){
    return printf("Non è possibile assegnare agli array una dimensione compresa tra 10 e 15\n");
}

//Chiedo all'utente di inserire gli elementi che comporranno l'array a
printf("Ora dovrai inserire i %d elementi del primo array\n", x);

for(i = 0; i < x; i++){
    printf("Inserisci l'elemento %d: ", i);
    scanf("%d", &a[i]);
}

//Vado a capo per una pulizia del codice
printf("\n");

//Chiedo all'utente di inserire gli elementi che comporranno l'array b
printf("Ora dovrai inserire i %d elementi del secondo array:\n", x);

for(i = 0; i < x; i++){
    printf("Inserisci l'elemento %d: ", i);
    scanf("%d", &b[i]);
}


//(1) SOMMA, INDICE AD INDICE, DEGLI ELEMENTI DEI DUE ARRAY 

//Utilizzo un ciclo for per associare ad ogni indice dell'array c la somma degli elementi degli array a e b
for(i = 0; i < x; i++){
    c[i] = a[i] + b[i];
}

//Mostro all'utente la composizione dell'array c dopo aver eseguito l'operazione di somma
printf("\nDopo aver sommato indice ad indice gli elementi dei due array, ecco come si presenta l'array di supporto C in cui sono stati salvati i risultati:\n");

for(i = 0; i < x; i++){
    printf("%d  ", c[i]);
}

//Vado a capo per una pulizia del codice
printf("\n");


//(1) MOLTIPLICAZIONE, INDICE AD INDICE, DEGLI ELEMENTI DEI DUE ARRAY 

//Utilizzo un ciclo for per associare ad ogni indice dell'array c il prodotto della moltiplicazione degli elementi degli array a e b
for(i = 0; i < x; i++){
    c[i] = a[i] * b[i];
}

//Mostro all'utente la composizione dell'array c dopo aver eseguito l'operazione di moltiplicazione
printf("\nDopo aver moltiplicato indice ad indice gli elementi dei due array, ecco come si presenta l'array di supporto C in cui sono stati salvati i risultati:\n");

for(i = 0; i < x; i++){
    printf("%d  ", c[i]);
}

//Vado a capo per una pulizia del codice
printf("\n");


//(2) CREARE ARRAY C CON ELEMENTI MAGGIORI TRA I DUE ARRAY

//Utilizzo un ciclo for per prendere in considerazione tutti gli indici 
for(i = 0; i < x; i++){

    //Utilizzo if/else per associare all'array c l'elemento maggiore tra i medesimi indici degli array a e b
    if (a[i] > b[i]){
        c[i] = a[i];
    }
    else c[i] = b[i];
}

//Mostro all'utente la composizione dell'array c dopo questa ultima operazione
printf("\nDopo aver confrontato indice ad indice gli elementi dei due array, ecco come si presenta l'array di supporto C in cui sono stati salvati solamente gli elementi maggiori tra i due array:\n");

for(i = 0; i < x; i++){
    printf("%d  ", c[i]);
}

//Vado a capo per una pulizia del codice
printf("\n");


//MEDIA DELL'ARRAY C

//Dichiaro le variabili che mi saranno utili per l'operazione di media aritmetica
int somma = 0;
float media;

//Utilizzo un ciclo for per aggiornare la variabile somma man mano che prendo in considerazione tutti gli indici dell'array c
for(i = 0; i < x; i++){
    somma = somma + c[i];
}

//Definisco l'operazione di media aritmetica e utilizzo un'operazione di casting ((float)) per fare in modo che il risultato sia un numero con la virgola
media = (float) somma / x;

//Mostro all'utente la media appena calcolata e specifico che il numero deve avere solamente due cifre dopo la virgola (%0.2f)
printf("\nLa media di tutti gli elementi dell'ultimo array di supporto C creato è: %0.2f\n", media);

//Vado a capo per una pulizia del codice
printf("\n");


//VALORE MASSIMO NELL'ARRAY C

//Dichiaro la variabile max, che mi sarà utile per definire il massimo
int max = 0;

//Utilizzo un ciclo for per prendere in considerazione tutti gli indici dell'array c
for(i = 0; i < x; i++){

    //Utilizzo if per capire se vi è un elemento nell'array c più grande di quello associato prima alla variabile max, e in questo caso aggiorno la variabile max
    if (c[i] > max){
        max = c[i];
    }
}

//Mostro all'utente il valore massimo all'interno dell'array c
printf("Il valore massimo all'interno dell'array di supporto C è: %d\n", max);

//Vado a capo per una pulizia del codice
printf("\n");


//VALORE MINIMO NELL'ARRAY C

//Dichiaro la variabile min, che mi sarà utile per definire il minimo e la associo al primo valore dell'array c
int min = c[0];

//Utilizzo un ciclo for per prendere in considerazione tutti gli elementi dell'array c
for(i = 0; i < x; i++){

    //Utilizzo if per capire se ci sono altri elementi nell'array c minori di quello associato precedentemente a min, e in questo caso aggiorno la variabile min
    if (c[i] < min){
    min = c[i];
    }
}

//Mostro all'utente il valore minimo all'interno dell'array c
printf("Il valore minimo all'interno dell'array di supporto C è: %d\n", min);

return (0);
}