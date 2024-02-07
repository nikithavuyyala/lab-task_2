#include <stdio.h>

#define MAX_SIZE 100

int main() {
    int arr[MAX_SIZE];
    int i,n, position, element;

    printf("Enter the number of elements you want to store (up to %d): ", MAX_SIZE);
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for ( i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the position where you want to insert the element: ");
    scanf("%d", &position);

    if (position < 0 || position > n) {
        printf("Invalid position!\n");
        return 1;
    }

    printf("Enter the element you want to insert: ");
    scanf("%d", &element);

    for ( i = n; i > position; i--) {
        arr[i] = arr[i - 1];
    }
    arr[position] = element;
    n++;

    printf("Array after insertion: ");
    for ( i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
