#include <stdio.h>

void main() {
    int number;
    int number2;

    printf("Podaj numer:");
    scanf("%d", &number);
    printf("Podaj drugi numer:");
    scanf("%d", &number2);
    
int dod = number2 + number;
int od = number - number2;
int mn = number2 * number;
int dzie = number / number2;
int res = number % number2;



printf("Wynik dodawania: %d \n", dod);
printf("Wynik odejmowania: %d \n", od);
printf("Wynik mnozenia: %d \n", mn);
printf("Wynik dzielenia: %d \n", dzie);
printf("Wynik reszty: %d \n", res);

}