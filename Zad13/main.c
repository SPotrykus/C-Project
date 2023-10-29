void main() {
    printf("Dla 0 radianów wybierz 1\n");
    printf("Dla 1/6 Pi radianów wybierz 2\n");
    printf("Dla 1/4 Pi radianów wybierz 3\n");
    printf("Dla 1/3 Pi radianów wybierz 4\n");
    printf("Dla 1/2 Pi radianów wybierz 5\n");

    int pick;
    scanf("%d", &pick);

    int deg;
    switch (pick)
    {
    case 1:
        deg = 0 * 180;
        break;
    case 2:
        deg = 180/6;
         break;
    case 3:
        deg = 180/4;
         break;
    case 4:
        deg = 180/3;
         break;
    case 5:
        deg = 180/2;
        break;
    default:
        break;
    }
    printf("Stopnie: %d \n", deg);
}