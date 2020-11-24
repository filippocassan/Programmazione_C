#include <stdio.h>

//09.10.2020
//Lezione introduttiva sulla struttura iterativa while

//Conto alla rovescia con while

int main() 
{
int x = 6;

while(x > 0){
    printf("%d\n", x = x - 1);
}

return (0);
}

//Calcolo del fattoriale con while
int main1()
{
int n = 5;
int f = 1;

while (n > 1){
    f = f * n;
    n = n - 1;
}

printf("Il fattoriale di 5 è: %d", f);

return (0);
}

//Calcolo del M.C.D. con while
int main2()
{
int x = 30;
int y = 12;
int mcd;

while (x != y){

    if (x > y)
        x = x - y;
    else 
        y = y - x;
}

mcd = x;

printf("L'M.C.D. di 30 e 12 è: %d", mcd);

return (0);
}