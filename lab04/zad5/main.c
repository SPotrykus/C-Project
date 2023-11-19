#include <stdio.h>

void main() {
    printf("Podaj liczbe:");
    int n;
    scanf("%d", &n);
    int array[] = {};

    for(int i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }
}