
#include <stdio.h>

int main() {
    int len1, len2;

    printf("Enter size of first sorted array: ");
    scanf("%d", &len1);
    int arr1[len1];
    printf("Enter %d sorted elements: ", len1);
    for (int i = 0; i < len1; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter size of second sorted array: ");
    scanf("%d", &len2);
    int arr2[len2];
    printf("Enter %d sorted elements: ", len2);
    for (int i = 0; i < len2; i++) {
        scanf("%d", &arr2[i]);
    }

    int len3 = len1 + len2;
    int arr3[len3];

    int i = 0, j = 0, k = 0;

    while (i < len1 && j < len2) {
        if (arr1[i] < arr2[j]) {
            arr3[k] = arr1[i];
            i++;
        } else {
            arr3[k] = arr2[j];
            j++;
        }
        k++;
    }

    while (i < len1) {
        arr3[k] = arr1[i];
        i++;
        k++;
    }

    while (j < len2) {
        arr3[k] = arr2[j];
        j++;
        k++;
    }

    printf("Merged sorted array: ");
    for (int m = 0; m < len3; m++) {
        printf("%d ", arr3[m]);
    }
    printf("\n");

    return 0;
}
