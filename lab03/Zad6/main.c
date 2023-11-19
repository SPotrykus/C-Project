void main(){

    int year;
    printf("Podaj rok: ");
    scanf("%d", &year);

    if(year%4 == 0) {
        printf("Rok jest przestepny");
    }else {
        printf("Rok nie jest przestepny");
    }
}