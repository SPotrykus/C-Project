void main() {
    int number, number2;
    printf("Podaj numer:");
    scanf("%d", &number);
    printf("Podaj drugi numer:");
    scanf("%d", &number2);

    if(number > number2){
        printf("Większa: %d \n", number);
    }else {
        printf("Większa: %d \n", number2);
    }
}