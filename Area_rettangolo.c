#include <stdio.h>

int main(void) {

int base, altezza, area;

printf("Inserisci la base del rettangolo: ");
scanf("%d", &base);

printf("Inserisci l'altezza del rettangolo: ");
scanf("%d", &altezza);

area = base * altezza;

printf("L'area del rettangolo è: %d\n", area);

return 0;
}