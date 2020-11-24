#include <stdio.h>

//09.10.2020
//Lezione introduttiva sulla struttura iterativa for

int main() 
{
int n = 5;
int f = 1;

for (int i = 1; i <= n; i++)
{
    f = f * i;
}

printf("Il fattoriale di 5 è: %d", f);

return (0);
}