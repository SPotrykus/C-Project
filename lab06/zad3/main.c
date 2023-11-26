#include <stdio.h>

void main() {
    int n;
    int i = 0;
    scanf("%d", &n);
    xd(n, i);
}

void xd(int n, int i) {
    printf("%d \n", i) ;
    if(i != n){
        xd(n, i + 1);
    }
}