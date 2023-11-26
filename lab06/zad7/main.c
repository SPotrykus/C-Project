#include <stdio.h>

int search(int arr[], int left, int right, int target) {
    if (left > right) {
        return 0;
    }
    if (arr[left] == target) {
        return 1;
    }
    return search(arr, left + 1, right, target);
}

int main() {
    int arr[] = {1, 3, 5, 7, 9, 11, 13};
    int target;
    scanf("%d", &target);

    int size = sizeof(arr) / sizeof(arr[0]);
    int result = search(arr, 0, size - 1, target);

    if (result == 1) {
        printf("%d jest elementem tablicy.\n", target);
    } else {
        printf("%d nie jest elementem tablicy.\n", target);
    }

    return 0;
}