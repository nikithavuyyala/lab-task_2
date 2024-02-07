#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int i,index;

    printf("Enter the index of the element to delete: ");
    scanf("%d", &index);

    if (index < 0 || index >= size) {
        printf("Index out of bounds\n");
        return 1;
    }

    for ( i = index; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }

    size--;

    printf("Array after deletion:\n");
    for ( i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
