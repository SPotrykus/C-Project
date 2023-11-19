#include <stdio.h>

void main() {
    int x[] = {2,4,5,6,1,4,8,90,5,4};
    int y[] = {};

    for (int i = 0; i < sizeof(x)/4; i++) {
        y[i] = x[i] * x[i];
        printf("%d \n", y[i]);
    }
}