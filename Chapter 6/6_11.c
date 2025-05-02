#include <stdio.h>

int main() {
    int arr[10] = {29, 10, 14, 37, 13, 5, 8, 22, 19, 6};

    for (int i = 0; i < 9; i++) {
        int min = i;
        for (int j = i + 1; j < 10; j++) {
            if (arr[j] < arr[min]) min = j;
        }
        int temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }

    printf("Sorted array: ");
    for (int i = 0; i < 10; i++) printf("%d ", arr[i]);
    printf("\n");

    return 0;
}