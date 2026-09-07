
1.
#include <stdio.h>
#include<stdlib.h>
int main() {
    int length;
    printf("Enter the number of elements: ");
    scanf("%d", &length);

    int *arr;
    printf("Enter %d elements: ", length);
   // arr = (int*) malloc(length * sizeof(int)); int arr=(int*) malloc(length * sizeof(int))   arr=(int*) malloc();
   arr= (int*) malloc(length *sizeof(int));              
    for (int i = 0; i < length; i++) {
        scanf("%d", (arr+i));
    }

    int min = *arr;
    int max = *arr;

    for (int i = 1; i < length; i++) {
        if (*(arr+i) < min) {
            min = *(arr+i);
        }
        if (*(arr+i) > max) {
            max = *(arr+i);
        }
    }

    printf("Minimum: %d\n", min);
    printf("Maximum: %d\n", max);
    
    free(arr);
    return 0;
}

2.
#include <stdio.h>
#include<stdlib.h>

int main() {
    int length;
    printf("Enter the number of elements: ");
    scanf("%d", &length);


    int *arr= malloc(length *sizeof(int));
    printf("Enter %d elements: ", length);
    for (int i = 0; i < length; i++) {
        scanf("%d", (arr+i));
    }

    int x, y;
    printf("Enter the value to replace (x): ");
    scanf("%d", &x);
    printf("Enter the new value (y): ");
    scanf("%d", &y);

    for (int i = 0; i < length; i++) {
        if (*(arr+i) == x) {
            *(arr+i) = y;
        }
    }

    printf("Modified array: ");
    for (int i = 0; i < length; i++) {
        printf("%d ", *(arr+i));
    }
    printf("\n");
    free(arr);

    return 0;
}

3.
#include <stdio.h>
#include<stdlib.h>
int main() {
    int length;
    printf("Enter the number of elements: ");
    scanf("%d", &length);

    int *arr= malloc(length *sizeof(int));
    printf("Enter %d elements: ", length);
    for (int i = 0; i < length; i++) {
        scanf("%d", (arr+i));
    }

    int Count = 0;

    for (int i = 0; i < length; i++) {
        int isDuplicate = 0;
        for (int j = 0; j < i; j++) {
            if (*(arr+i) == *(arr+j)) {
                isDuplicate = 1;
                break;
            }
        }
        if (!isDuplicate) {
            *(arr+Count) = *(arr+i);
            Count++;
        }
    }

    printf("Array after removing duplicates: ");
    for (int i = 0; i < Count; i++) {
        printf("%d ", *(arr+i));
    }
    printf("\n");
    free(arr);
    return 0;
}
4,


#include <stdio.h>
#include<stdlib.h>


int main() {
    int len1, len2;

    printf("Enter size of first sorted array: ");
    scanf("%d", &len1);
     int *arr1= malloc(len1 *sizeof(int));
    printf("Enter %d sorted elements: ", len1);
    for (int i = 0; i < len1; i++) {
        scanf("%d", (arr1+i));
    }

    printf("Enter size of second sorted array: ");
    scanf("%d", &len2);
     int *arr2= malloc(len2 *sizeof(int));
    printf("Enter %d sorted elements: ", len2);
    for (int i = 0; i < len2; i++) {
        scanf("%d", (arr2+i));
    }

    int len3 = len1 + len2;
     int *arr3= malloc((len1+len2) *sizeof(int));

    int i = 0, j = 0, k = 0;

    while (i < len1 && j < len2) {
        if (*(arr1+i) < *(arr2+j)) {
            *(arr3+k) = *(arr1+i);
            i++;
        } else {
            *(arr3+k) = *(arr2+j);
            j++;
        }
        k++;
    }

    while (i < len1) {
        *(arr3+k) = *(arr1+i);
        i++;
        k++;
    }

    while (j < len2) {
        *(arr3+k) = *(arr2+j);
        j++;
        k++;
    }

    printf("Merged sorted array: ");
    for (int m = 0; m < len3; m++) {
        printf("%d ", *(arr3+m));
    }
    printf("\n");
    free(arr);

    return 0;
}

5.pointer_p5(recursion).c

#include<stdio.h>
#include<stdlib.h>
int arr_sum(int *arr,int n){
    if(n<0) return 0;
     return arr_sum( arr,n-1)+*(arr+n-1);
}
int main(){
     int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int *arr;
    printf("Enter %d elements: ", n);
   // arr = (int*) malloc(length * sizeof(int)); int arr=(int*) malloc(length * sizeof(int))   arr=(int*) malloc();
    arr=  malloc(n *sizeof(int));              
    for (int i = 0; i < n; i++) {
        scanf("%d", (arr+i));
    }
    int sum=arr_sum(arr,n);
    printf("The sum of the array:%d",sum);
free(arr);
return 0;
}
6.pointer_p6(recursion).c

#include <stdio.h>
#include<stdlib.h>

void reverse(int *arr, int start, int end){
    if(start >= end) return;
    int temp;
    temp = *(arr+start);
    *(arr+start) = *(arr+end);
    *(arr+end) = temp;
    reverse(arr, start + 1, end - 1);
    return;
}

int main(){
     int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int *arr;
    printf("Enter %d elements: ", n);
   // arr = (int*) malloc(length * sizeof(int)); int arr=(int*) malloc(length * sizeof(int))   arr=(int*) malloc();
    arr=  malloc(n *sizeof(int)); 
    for (int i = 0; i < n; i++) {
        scanf("%d", (arr+i));
    }
    reverse(arr, 0, n - 1);
    for(int i = 0; i < n; i++){
        printf("%d ", *(arr+i));
    }
    free(arr);
    return 0;
}    
  
    

	

7.

#include <stdio.h>
#include<stdlib.h>
void merge_sort(int *arr, int right){
    int i,  mid = right / 2;
    int *arr2= malloc(mid *sizeof(int));
    int *arr3=malloc((right-mid) *sizeof(int));
    if(right <= 1) return;
    for( i = 0; i < mid; i++) *(arr+i) = *(arr+i);
    for( i = 0; i < right - mid; i++) *(arr3+i) = *(arr+mid + i);
    merge_sort(arr2, mid);
    merge_sort(arr3, right - mid);

    i = 0;
    int k = 0, j = 0;
    while(i < mid && j < right - mid){
        if(*(arr2+i) <= (*arr3+j)){
            *(arr+k) = *(arr2+i);
            i++;
        }
        else if(*(arr2+i) > *(arr3+j)){
            *(arr+k) = *(arr3+j);
            j++;
        }
        k++;
    }
    while(i < mid){
        *(arr+k) = *(arr2+i);
        i++;
        k++;
    }
    while(j < right - mid){
        *(arr+k) = *(arr3+j);
        j++;
        k++;
    }
}

int main(){
     int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int *arr;
    printf("Enter %d elements: ", n);
   // arr = (int*) malloc(length * sizeof(int)); int arr=(int*) malloc(length * sizeof(int))   arr=(int*) malloc();
    arr=  malloc(n *sizeof(int)); 
    for (int i = 0; i < n; i++) {
        scanf("%d", (arr+i));
    }
    printf("The initial array:\n");
    for(int i = 0; i < n; i++) printf("%d ", *(arr+i));
    merge_sort(arr,  n);
    printf("\nThe sorted array:\n");
    for(int i = 0; i < n; i++) printf("%d ", *(arr+i));
    free(arr);
}
