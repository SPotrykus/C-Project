void main() {

    int guess;
    int nbr = 4;
    int i = 0;
    start:
    printf("Podaj liczbe: ");
    scanf("%d", &guess);

    if(guess == nbr) {
        printf("Zgadles");
    }else if (i < 2){
        i++;
        goto start;
    }else {
        printf("Przegrales");
    }
}