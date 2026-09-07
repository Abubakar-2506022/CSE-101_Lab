

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

    int uniqueCount = 0;

    for (int i = 0; i < length; i++) {
        int isDuplicate = 0;
        for (int j = 0; j < i; j++) {
            if (arr[i] == arr[j]) {
                isDuplicate = 1;
                break;
            }
        }
        if (!isDuplicate) {
            arr[uniqueCount] = arr[i];
            uniqueCount++;
        }
    }

    printf("Array after removing duplicates: ");
    for (int i = 0; i < uniqueCount; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
	