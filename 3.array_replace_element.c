
#include <stdio.h>

int main() {
    int length;
    printf("Enter the number of elements: ");
    scanf("%d", &length);


    int arr[length];
    printf("Enter %d elements: ", length);
    for (int i = 0; i < length; i++) {
        scanf("%d", &arr[i]);
    }

    int x, y;
    printf("Enter the value to replace (x): ");
    scanf("%d", &x);
    printf("Enter the new value (y): ");
    scanf("%d", &y);

    for (int i = 0; i < length; i++) {
        if (arr[i] == x) {
            arr[i] = y;
        }
    }

    printf("Modified array: ");
    for (int i = 0; i < length; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
