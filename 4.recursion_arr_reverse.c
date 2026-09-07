#include<stdio.h>
void arr_reverse(int arr[],int start,int end){
    if(start>=end) return; 
    int temp=arr[start];
    arr[start]=arr[end];
    arr[end]=temp;

    arr_reverse(arr,start+1,end-1);

}



int main(){
    int arr[]={1,2,3,4,5,6 };
    int size=sizeof(arr)/sizeof(arr[0]);
    printf("Original array: ");
    
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);

    }
    printf("\n");
    
    printf("Reversed array: ");
    arr_reverse( arr,0,size-1);

    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);

    }
    printf("\n");

}