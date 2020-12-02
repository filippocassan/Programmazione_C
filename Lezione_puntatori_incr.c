#include <stdio.h>

//16.10.2020
//Lezione sui puntatori

//Incrementare una variabile di un valore q

//Definisco la funzione incrementa (incr)
void incr(int *p, int q)
{
    *p = *p + q;
}

//Testo la funzione
int main() 
{

//Dichiaro le variabili
int x = 0;
int y = 5;

//Utilizzo la funzione incr per incrementare x di un certo valore. In questo caso, prima sommo ad x il numero 7, successivamente sempre ad x (che ora è 7) sommo il valore di y (5)
incr(&x, 7);
incr(&x, y);

//Stampo il valore di x dopo queste operazioni
printf("%d\n", x);

return (0);
}