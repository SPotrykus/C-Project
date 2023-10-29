void main() {
    int a,b,c;

    printf("Podaj dlugosci:");
    scanf("%d %d %d", &a,&b,&c);

    if(a > b && a > c){
        if((b*b) + (c*c) == a*a) {
            printf("Mozna zrobic trojkat");
        }else {
            printf("Nie mozna zrobic trojkata");
        }
    }else if(b > a && b > c) {
        if((a*a) + (c*c) == b*b) {
            printf("Mozna zrobic trojkat");
        }else {
            printf("Nie mozna zrobic trojkata");
        }
    }else {
        if((b*b) + (a*a) == c*c) {
            printf("Mozna zrobic trojkat");
        }else {
            printf("Nie mozna zrobic trojkata");
        }
    }
}