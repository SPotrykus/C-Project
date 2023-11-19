
#include <stdio.h>
#include <math.h>

void main() {
    int a,b;
    int wynik = 1;
    int c = 0;
    printf("Podaj liczbe:");
    scanf("%d", &a);
    printf("Podaj liczbe:");
    scanf("%d", &b);

    do {
        wynik = a * wynik;
        c++;
    }while(wynik < b);
    printf("%d", c);
}