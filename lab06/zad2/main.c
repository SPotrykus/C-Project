#include <stdio.h>

int nwd(int x,int y) {
    if(x%y == 0) {
        return y;
    }
    if(x > y){
        return nwd(x%y, y);
    }else {
        return nwd(y%x, x);
    }
}

void main() {
    int x,y;

    scanf("%d %d", &x, &y);

    printf("%d", nwd(x,y));
}
