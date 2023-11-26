#include <stdio.h>

void dec_to_bin(int number) {
    if (number > 1) {
        dec_to_bin(number / 2);
    }
    printf("%d", number % 2);
}

int main() {
    int decimal_number;

    printf("Podaj liczbę dziesiętną: ");
    scanf("%d", &decimal_number);

    if (decimal_number >= 0) {
        printf("Liczba %d w postaci binarnej: ", decimal_number);
        dec_to_bin(decimal_number);
    } else {
        printf("Podano liczbę ujemną. Proszę podać liczbę nieujemną.");
    }

    return 0;
}