#include <stdio.h>

int P(char x[],int size ,int i) {
    printf("%c, %c\n", x[i], x[size]);
    if(i + 1 >= size && x[i] == x[size] &&size%2 == 0 && x[i] == x[size]) {
        return 1;
    }
    if(x[i] == x[size]) {
        return P(x, size - 1, i + 1);
    }else {
        return 0;
    }
}
void main(){
    char x[] = "kajak";
    int i = 0;
    int size = sizeof(x) / sizeof(x[0]);
    if(P(x, size - 2, i)) {
        printf("Podany wyraz jest palindromem");
    }else {
        printf("Podany wyraz nie jest palindromem");
    }
}

