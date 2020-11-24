#include <stdio.h>

//09.10.2020
//Lezione introduttiva sulle strutture condizionali if/else

//Calcolo del MAX con if/else
int main() 
{
int x = 10;
int y = 5;
int max;

if (x > y){
    max = x;
}
else
    max = y;

printf("Il MAX è: %d", max);

return (0);
}