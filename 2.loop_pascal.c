#include<stdio.h>
#include<math.h>


int factorial(int l){
   int fact = 1;


   for(int a=1; a<=l; a++){
       fact = fact * a;
   }


   return fact;
}


int pascal(int l, int j){


   int per = (factorial(l) / (factorial(j) * factorial(l-j)));


   return per;
}


int main(){


   int i, j, l;


   printf("Enter line number: ");
   scanf("%d", &l);


   for(i=0; i<l; i++){


       for(j=0; j<=i; j++){


           printf("%d ", pascal(i, j));


       }


       printf("\n");
   }


}