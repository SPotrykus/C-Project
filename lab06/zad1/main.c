#include <stdio.h>

int silnia(int i) {
    if(i > 1) {
        return i * silnia(i - 1);
    }
    else {
        return 1;
    }
}

void main() {
    int n;

    printf("podaj liczbe:");
    scanf("%d", &n);
    printf("%d", silnia(n));
}