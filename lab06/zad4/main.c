#include <stdio.h>

void main() {
    int n,i;
    int x =0;
    int y= 1;
    scanf("%d", &n);
    printf("%d", xd(n - 1,x ,y, i));
}
int xd(int n, int x, int y, int i) {
    if(n == i) {
        return y;
    }
    return xd(n, y, x+y, i + 1);
}