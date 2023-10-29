void main() {
    int a,b,c,d;

    printf("Podaj pierwsza wartosc:");
    scanf("%d,%d", &a,&b);
    printf("Podaj druga wartosc:");
    scanf("%d,%d", &c,&d);

    int bok = abs(a - c);
    int tenInnyBok = abs(b - d);

    int pole = bok * tenInnyBok;
    int obw = 2*bok + 2*tenInnyBok;

    printf("Pole wynosi: %d a obw: %d \n", pole,obw);
}