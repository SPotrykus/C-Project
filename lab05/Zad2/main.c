#include <stdio.h>
int same(x, y) {
    return (x == y);
}
void main() {
    printf("%d", same(5, 5));
}