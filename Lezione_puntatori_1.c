#include <stdio.h>

//16.10.2020
//Lezione sui puntatori

//Due diversi tipi di printf

int main(){

int x = 10;
int y = 20;
int *p;
int *q;

p = &x;
q = &y;

x = y + 1;

p = &y;
y = y + 1;

printf("%d", p); //Non viene accettato in quanto p è di tipo int*
printf("%d", *p);

return (0);
}