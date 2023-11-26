#include <stdio.h>
int handleAdd(x, y) {
    int s = x + y;
    return s;
}
int handleSub(x, y) {
    int s = x - y;
    return s;
}
int handleTimes(x, y) {
    int s = x * y;
    return s;
}
int handleD(x, y) {
    int s = x / y;
    return s;
}
void main() {
    int choice, nbr, nbr2, result;
    printf("Podaj dwie liczby:\n");
    scanf("%d %d", &nbr, &nbr2);
    printf("Podaj akcje:\n");
    printf("1 - dodawanie\n");
    printf("2 - odejmowanie\n");
    printf("3 - mnozenie\n");
    printf("4 - dzielenie\n");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        result = handleAdd(nbr, nbr2);
        break;
    
    case 2:
        result = handleSub(nbr, nbr2);
        break;
    
    case 3:
        result = handleTimes(nbr, nbr2);
        break;
    
    case 4:
        result = handleD(nbr, nbr2);
        break;
    default:
        break;
    }
    printf("%d", result);
}