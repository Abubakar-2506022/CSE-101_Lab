
#include<stdio.h>
int arr_sum(int arr[],int n){
    if(n<=0) return 0;
    return arr[n-1]+arr_sum(arr,n-1);
}
int main(){
    int arr[]={1,2,3,4,5};
    int size=sizeof(arr)/sizeof(arr[0]);
    int sum=arr_sum(arr,size);
    printf("The sum of the array:%d",sum);
    
    return 0;
}
