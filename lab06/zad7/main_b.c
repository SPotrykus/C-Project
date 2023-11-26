#include <stdio.h>

int binary_search(int arr[], int left, int right, int target) {
    if (left > right) {
        return 0;
    }

    int mid = left + (right - left) / 2;

    if (arr[mid] == target) {
        return 1;
    } else if (arr[mid] > target) {
        return binary_search(arr, left, mid - 1, target);
    } else {
        return binary_search(arr, mid + 1, right, target);
    }
}

int main() {
    int arr[] = {1, 3, 5, 7, 9, 11, 13};
    int target;
    scanf("%d", &target);

    int size = sizeof(arr) / sizeof(arr[0]);
    int result = binary_search(arr, 0, size - 1, target);

    if (result == 1) {
        printf("%d jest elementem tablicy.\n", target);
    } else {
        printf("%d nie jest elementem tablicy.\n", target);
    }

    return 0;
}