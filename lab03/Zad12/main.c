void main() {
    int nbr;

    printf("podaj liczbe: ");
    scanf("%d", &nbr);

    for(int i = 2; i < 7; i++) {
        if(nbr%i == 0){
            printf("Dzieli sie przez: %d\n", i);
            return;
        }
    }
    printf("Nie dzieli sie przez zadna\n");
}