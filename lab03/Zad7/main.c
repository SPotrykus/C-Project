void main() {
    int dd,mm,yy;

    printf("Podaj date (dd-mm-rrrr):");
    scanf("%d-%d-%d", &dd,&mm,&yy);

    if(dd > 31) {
        printf("Day is invalid\n");
        return;
    }
    if(mm > 12) {
        printf("Month is invalid\n");
        return;
    }
    printf("Date i valid \n");
}