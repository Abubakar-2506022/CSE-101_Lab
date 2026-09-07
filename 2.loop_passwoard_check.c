#include<stdio.h>


int main(){


   int n, i;


   char ch;


   int upper = 0;
   int lower = 0;
   int digit = 0;
   int special = 0;


   printf("How many characters in password: ");
   scanf("%d", &n);


   printf("Enter Password: ");


   for(i=1; i<=n; i++){


       scanf("%c", &ch);


       if(ch>='A' && ch<='Z'){
           upper = 1;
       }


       else if(ch>='a' && ch<='z'){
           lower = 1;
       }


       else if(ch>='0' && ch<='9'){
           digit = 1;
       }


       else{
           special = 1;
       }


   }


   if(n>=8 && upper==1 && lower==1 && digit==1 && special==1){


       printf("Valid Password\n");


   }


   else{


       printf("Invalid Password\n");


       if(n<8){
           printf("Minimum 8 characters needed\n");
       }


       if(upper==0){
           printf("Need 1 Uppercase letter\n");
       }


       if(lower==0){
           printf("Need 1 Lowercase letter\n");
       }


       if(digit==0){
           printf("Need 1 Digit\n");
       }


       if(special==0){
           printf("Need 1 Special Character\n");
       }


   }


}

