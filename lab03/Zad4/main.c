void main() {
    int nbr,nbr2,nbr3;

    printf("Podaj numer:");
    scanf("%d", &nbr);
    printf("Podaj drugi numer:");
    scanf("%d", &nbr2);
    printf("Podaj trzeci numer:");
    scanf("%d", &nbr3);

    if(nbr > nbr2 && nbr > nbr3){
        printf("Najwiekszy: %d \n", nbr);
    }else if(nbr2 > nbr && nbr2 > nbr3) {
        printf("Najwiekszy: %d \n", nbr2);
    }else {
        printf("Najwiekszy: %d \n", nbr3);
    }
}