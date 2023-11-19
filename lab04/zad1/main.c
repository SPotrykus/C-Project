#include <stdio.h>

void main() {
    printf("Podaj liczbe: \n");
    int n;
    scanf("%d", &n);
    int suma;
    for(int i = 0; i <= n; i++) {
        int j = i * i;
        suma = j + suma;
    }
    printf("Suma: %d \n", suma);
}