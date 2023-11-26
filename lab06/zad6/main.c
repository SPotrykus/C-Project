#include <stdio.h>

int sum_of_digits(int number) {
    if (number == 0) {
        return 0;
    } else {
        return (number % 10) + sum_of_digits(number / 10);
    }
}

int main() {
    int input_number;
    
    printf("Podaj liczbę całkowitą: ");
    scanf("%d", &input_number);

    int result = sum_of_digits(input_number);
    
    printf("Suma cyfr liczby %d wynosi: %d\n", input_number, result);
    
    return 0;
}