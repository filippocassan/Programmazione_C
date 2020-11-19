#include <stdio.h>

//Consegna:
//Si scriva una funzione in linguaggio C che riceva in ingresso due numeri interi a e b (b > 0) 
//e restituisca il risultato della potenza a^b

//Dichiaro la funzione int potenza(a, b)
int potenza(a, b)
{

//Dichiaro le variabili di cui avrò bisogno per il ciclo for
int i;
int z;

//Utilizzo if per dare la base come risultato se l'esponente è 1
if (b == 1) return a;

//Utilizzo if per dare 1 come risultato se l'esponente è 0
if (b == 0) return 1;
  
  //Se non ci si trova in uno dei due casi sopra (else) si associa alla variabile z il prodotto di a * a (ci si ferma qui se l'esponente è 2)
  else{
    z = a * a;

    //Utilizzo un ciclo for nel caso l'esponente sia uguale o superiore a 3. In questo caso si compie l'operazione z = z * a fino a quando i non raggiunge il valore dell'esponente inserito
    for(i = 3; i <= b; i++){
      z = z * a;
    }
  }

//Il risultato della potenza è dunque la variabile z, quindi la funzione dovrà "ritornare" z
return z;
}

//Ora testo la funzione potenza(a, b)
int main(){
 
//Dichiaro le variabili
int n;
int m;

//Chiedo all'utente di inserire una base e un esponente
printf("Inserisci la base della potenza: ");
scanf("%d", &n);

printf("Inserisci l'esponente: ");
scanf("%d", &m);

//Stampo la potenza richiesta dall'utente sfruttando la funzione definita in precedenza
printf("La potenza di base %d e di esponente %d é: %d", n, m, potenza(n, m));

return 0;
}