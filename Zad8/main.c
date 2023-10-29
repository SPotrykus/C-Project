void main() {
    int dd,mm,yy;
    int dd2,mm2,yy2;

    printf("Podaj date (dd-mm-rrrr):");
    scanf("%d-%d-%d", &dd,&mm,&yy);

    printf("Podaj druga date (dd-mm-rrrr):");
    scanf("%d-%d-%d", &dd2,&mm2,&yy2);

    int days2 = yy2 * 365;
    days2 = days2 + mm2* 30;
    days2 = days2 + dd2;

    int days1 = yy * 365;
    days1 = days1 + mm* 30;
    days1 = days1 + dd;

    int diff;

    if(days1 > days2) {
        diff = days1 - days2;
    }else {
        diff = days2 - days1;
    }
    int a = diff/365;
    int b = diff&365;
    int c = b/30;
    int d = b%30;

    printf("%d-%d-%d\n", d,c,a);
}