#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int length = sizeof(arr) / sizeof(arr[0]);  //The length of the array

    printf("Array before insertion: ");
    for (int i = 0; i < length; i++) {
        printf("%d ", arr[i]);
    }

    int newElement = 10;
    int newArr[length + 1];
    newArr[0] = newElement;

    for (int i = 0; i < length; i++) {
        newArr[i + 1] = arr[i];
    }

    printf("\nArray after insertion: ");
    for (int i = 0; i < length + 1; i++) {
        printf("%d ", newArr[i]);
    }

    return 0;
}