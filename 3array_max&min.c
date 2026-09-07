
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

    int min = arr[0];
    int max = arr[0];

    for (int i = 1; i < length; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    printf("Minimum: %d\n", min);
    printf("Maximum: %d\n", max);

    return 0;
}




