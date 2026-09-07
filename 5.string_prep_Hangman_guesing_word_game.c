
#include<stdio.h>
#include<string.h>
#include<time.h>
#include<stdlib.h>
int main()
{
    int a=1;

    while(a)
 {
    char dictionary[20][50]={
    "computer","programming","hangman","science","structure",
    "variable","pointer","function","array","string",
    "loop","condition","terminal","compiler","syntax",
    "binary","integer","character","memory","library"};

    int count=6,i=0,found;
    char C;
     srand(time(0));
    int random=rand()%20;
    char choosen[20];
     strcpy(choosen,dictionary[random]);
    char hiddenWord[20];
    int length=strlen(choosen);
        printf("\n");
        for(i=0;i<length;i++)
            hiddenWord[i]='_';
      if(i==length)
        hiddenWord[i]='\0';
         printf("%s" ,hiddenWord);
    while(count>0)
        {
            printf("\nGuess the letter\n you have %d attemps\n Enter a letter:",count);
             char letter;
              scanf(" %c",&letter);
                 printf("\n================\n");
            found=0;
            for(i=0;i<length;i++)

                {
                    if(choosen[i]==letter)
                    {
                        hiddenWord[i]=letter;
                        found=1;
                    }

                }

            if(found==0)
             count--;
              printf("%s" ,hiddenWord);
        
                if(strcmp(hiddenWord,choosen)==0)
                 printf("\nYou Won");
        if(count==0)
            {
                 printf("\n\n\nYou lose\nThe word is :");
                printf("%s",choosen);
            }

        }
     printf("\nAre you want to continue this game?");
     printf("\nIf you want to continue \nEnter:  Y\nIf you don't want \n Enter: N\n::");
      scanf(" %c",&C);
        if(C=='Y'||C=='y')
            a=1;
         else 
            a=0;
    }


}
