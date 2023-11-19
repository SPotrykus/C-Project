#include <stdio.h>

void main() {
    int a,b;
    int wynik = 1;
    printf("Podaj liczbe:");
    scanf("%d", &a);
    printf("Podaj liczbe:");
    scanf("%d", &b);
    if(b > 0) {
        for(int i = 0; i < b; i++) {
            wynik = wynik * a;
        }
    }

    printf("Wynik: %d", wynik);
}