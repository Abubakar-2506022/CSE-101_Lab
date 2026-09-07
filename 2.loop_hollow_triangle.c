#include<stdio.h>


int main(){


   int i, j, l;


   printf("Enter line number: ");
   scanf("%d", &l);


   for(i=1; i<=l; i++){


      
       for(j=1; j<=l-i; j++){
           printf(" ");
       }


  
       for(j=1; j<=2*i-1; j++){


           if(j==1 || j==2*i-1 || i==l){
               printf("*");
           }
           else{
               printf(" ");
           }


       }


       printf("\n");
   }


}

