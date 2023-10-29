void main() {
        int a,b,c;

    printf("Podaj dlugosci:");
    scanf("%d %d %d", &a,&b,&c);

    if(a > b && a > c){
        if(a < b + c) {
            printf("Mozna zrobic trojkat");
        }else {
            printf("Nie mozna zrobic trojkata");
        }
    }else if(b > a && b > c) {
        if(b < a + c) {
            printf("Mozna zrobic trojkat");
        }else {
            printf("Nie mozna zrobic trojkata");
        }
    }else {
        if(c < a + b) {
            printf("Mozna zrobic trojkat");
        }else {
            printf("Nie mozna zrobic trojkata");
        }
    }
}