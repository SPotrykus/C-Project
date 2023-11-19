void main(){

    int ascii;
    printf("Podaj kod ASCII");
    scanf("%d", &ascii);

    if(ascii >= 65 && ascii <= 90){
        printf("jest literą\n");
    }else if(ascii >= 97 && ascii <= 122) {
        printf("jest literą\n");
    }else {
        printf("Nie jest literą\n");
    }
}