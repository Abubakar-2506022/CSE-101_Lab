
/*Online ref used for learning
1.Youtube video just for seeing whether if and else be used out of main function.
2.Direct ask to break the loop after bot or human won 

*/

#include<stdio.h>

// some gloabl variable that are needed in multiple functions
char c1='1',c2='2',c3='3',c4='4',c5='5',c6='6',c7='7',c8='8',c9='9';
int Player1Choice, HumanMoveNumber = 0,HumanMove, BotMoveNumber=1,Bot_win_detect_variable,Human_win_detect_variable;
//Deaclaring the function for human move and winning condition
int HumanMove_and_win(){
    //condition Player's input
    if(Player1Choice == 1 && (c1 !='X' && c1 !='O')) {c1='X';return 1;}
    else if(Player1Choice == 2 && (c2 !='X' && c2 !='O')) {c2='X';return 1;}
    else if(Player1Choice == 3 && (c3 !='X' && c3 !='O')) {c3='X';return 1;}
    else if(Player1Choice == 4 && (c4 !='X' && c4 !='O')) {c4='X';return 1;}
    else if(Player1Choice == 5 && (c5 !='X' && c5 !='O')) {c5='X';return 1;}
    else if(Player1Choice == 6 && (c6 !='X' && c6 !='O')) {c6='X';return 1;}
    else if(Player1Choice == 7 && (c7 !='X' && c7 !='O')) {c7='X';return 1;}
    else if(Player1Choice == 8 && (c8 !='X' && c8 !='O')) {c8='X';return 1;}
    else if(Player1Choice == 9 && (c9 !='X' && c9 !='O')) {c9='X';return 1;}
    else if((Player1Choice == 1 && c1 !='1')||(Player1Choice == 2 && c2 !='2')||(Player1Choice == 3 && c3 !='3')||(Player1Choice == 4 && c4 !='4')||(Player1Choice == 5 && c5 !='5')||(Player1Choice == 6 && c6 !='6')||(Player1Choice == 7 && c7 !='7')||(Player1Choice == 8 && c8 !='8')||(Player1Choice == 9 && c9 !='9'))
     { 
         printf("The square is already taken.Please an another sqaure with valid input\n");
         return 0;
     }
    else 
     {
         printf("Invalid Input. Enter the number between 1 to 9.\n");
         return 0;
     }
     //condition for human to win
        if(c1=='X' && c2 =='X' && c3=='X'){
         printf("Congrats!You won.Run the program to play again.\n");
         Human_win_detect_variable=1;
        }
        else if(c4=='X' && c5 =='X' && c6=='X'){
         printf("Congrats!You won.Run the program to play again.\n");
         Human_win_detect_variable=1;
        }
        else if(c7=='X' && c8 =='X' && c9=='X'){
         printf("Congrats!You won.Run the program to play again.\n");
         Human_win_detect_variable=1;
        }
        else if(c1=='X' && c4=='X' && c7=='X'){
         printf("Congrats!You won.Run the program to play again.\n");
         Human_win_detect_variable=1;
        }
        else if(c2=='X' && c5 =='X' && c8=='X'){
         printf("Congrats!You won.Run the program to play again.\n");
         Human_win_detect_variable=1;
        }
        else if(c3=='X' && c6 =='X' && c9=='X'){
         printf("Congrats!You won.Run the program to play again.\n");
         Human_win_detect_variable=1;
        }
        else if(c4=='X' && c5 =='X' && c6=='X'){
         printf("Congrats!You won.Run the program to play again.\n");
         Human_win_detect_variable=1;
        }
        else if(c1=='X' && c5 =='X' && c9=='X'){
         printf("Congrats!You won.Run the program to play again.\n");
         Human_win_detect_variable=1;
        }
        else if(c3=='X' && c5 =='X' && c7=='X'){
         printf("Congrats!You won.Run the program to play again.\n");
         Human_win_detect_variable=1;
        }

}
void BotWinningMove(){
    //condition for bot to make a move to win
    if(c1=='O' && c2=='O' && c3=='3'){
        c3='O';
        
        printf("The bots move is 3.\nYou lost\nRerun the code to play again.");
        Bot_win_detect_variable=1;
    }
    else if(c1=='O' && c2=='2' && c3=='O'){
        c2='O';
        printf("The bots move is 2.\nYou lost\nRerun the code to play again.");
        Bot_win_detect_variable=1;
    }
    else if(c1=='1' && c2=='O' && c3=='O'){
        c1='O';
        printf("The bots move is 1.\nYou lost\nRerun the code to play again.");
        Bot_win_detect_variable=1;
    }
    else if(c1=='O' && c2=='O' && c3=='3'){
        c3='O';
        printf("The bots move is 3.\nYou lost\nRerun the code to play again.");
        Bot_win_detect_variable=1;
    }
    else if(c4=='O' && c5=='O' && c6=='3'){
        c6='O';
        printf("The bots move is 6.\nYou lost\nRerun the code to play again.");
        Bot_win_detect_variable=1;
    }
    else if(c4=='O' && c5=='5' && c6=='O'){
        c5='O';
        printf("The bots move is 5.\nYou lost\nRerun the code to play again.");
        Bot_win_detect_variable=1;
    }
    else if(c4=='4' && c5=='O' && c6=='O'){
        c4='O';
        printf("The bots move is 4.\nYou lost\nRerun the code to play again.");
        Bot_win_detect_variable=1;
    }
    else if(c7=='O' && c8=='O' && c9=='9'){
        c9='O';
        printf("The bots move is 9.\nYou lost\nRerun the code to play again.");
        Bot_win_detect_variable=1;
    }
    else if(c7=='O' && c8=='8' && c9=='O'){
        c8='O';
        printf("The bots move is 8.\nYou lost\nRerun the code to play again.");
        Bot_win_detect_variable=1;
    }
    else if(c7=='7' && c8=='O' && c9=='O'){
        c7='O';
        printf("The bots move is 7.\nYou lost\nRerun the code to play again.");
        Bot_win_detect_variable=1;
    }
    else if(c1=='O' && c4=='O' && c7=='7'){
        c7='O';
        printf("The bots move is 7.\nYou lost\nRerun the code to play again.");
        Bot_win_detect_variable=1;
    }
    else if(c1=='O' && c4=='4' && c7=='O'){
        c4='O';
        printf("The bots move is 4.\nYou lost\nRerun the code to play again.");
        Bot_win_detect_variable=1;
    }
    else if(c1=='1' && c4=='O' && c7=='O'){
        c1='O';
        printf("The bots move is 1.\nYou lost\nRerun the code to play again.");
        Bot_win_detect_variable=1;
    }
    else if(c2=='O' && c5=='O' && c8=='8'){
        c8='O';
        printf("The bots move is 8.\nYou lost\nRerun the code to play again.");
        Bot_win_detect_variable=1;
    }
    else if(c2=='O' && c5=='5' && c8=='O'){
        c5='O';
        printf("The bots move is 5.\nYou lost\nRerun the code to play again.");
        Bot_win_detect_variable=1;
    }
    else if(c2=='2' && c5=='O' && c8=='O'){
        c2='O';
        printf("The bots move is 5.\nYou lost\nRerun the code to play again.");
        Bot_win_detect_variable=1;
    }
    else if(c3=='O' && c6=='O' && c9=='9'){
        c9='O';
        printf("The bots move is 9.\nYou lost\nRerun the code to play again.");
        Bot_win_detect_variable=1;
    }
    else if(c3=='O' && c6=='6' && c9=='O'){
        c6='O';
        printf("The bots move is 6.\nYou lost\nRerun the code to play again.");
        Bot_win_detect_variable=1;
    }
    else if(c3=='3' && c6=='O' && c9=='O'){
        c3='O';
        printf("The bots move is 3.\nYou lost\nRerun the code to play again.");
        Bot_win_detect_variable=1;
    }
    //for diagonal
    else if(c1=='O' && c5=='O' && c9=='9'){
        c9='O';
        printf("The bots move is 9.\nYou lost\nRerun the code to play again.");
        Bot_win_detect_variable=1;
    }
    else if(c1=='O' && c5=='5' && c9=='O'){
        c5='O';
        printf("The bots move is 5.\nYou lost\nRerun the code to play again.");
        Bot_win_detect_variable=1;
    }
    else if(c1=='1' && c5=='O' && c9=='O'){
        c1='O';
        printf("The bots move is 9.\nYou lost\nRerun the code to play again.");
        Bot_win_detect_variable=1;
    }
    else if(c3=='O' && c5=='O' && c7=='7'){
        c7='O';
        printf("The bots move is 7.\nYou lost\nRerun the code to play again.");
        Bot_win_detect_variable=1;
    }
    else if(c3=='O' && c5=='5' && c7=='O'){
        c5='O';
        printf("The bots move is 5.\nYou lost\nRerun the code to play again.");
        Bot_win_detect_variable=1;
    }
    else if(c3=='3' && c5=='O' && c7=='O'){
        c3='O';
        printf("The bots move is 3.\nYou lost\nRerun the code to play again.");
        Bot_win_detect_variable=1;
    } 
}    
//decalring the function to defend humans winning ,defend fork,and playing normal moves    
void BotMove(){
    //condition for bot to defend humans winning moves
        //horizontal
         if (c1=='X' && c2=='X' && c3=='3'){
                c3 = 'O';
    
                printf("The bots move is 3.\n");
        }
         else if (c1=='X' && c2=='2' && c3=='X'){
                c2 = 'O';
    
                printf("The bots move is 2.\n");
        }
        else if (c1=='1' && c2=='X' && c3=='X'){
                c1 = 'O';
    
                printf("The bots move is 1.\n");
        }
        else if (c4=='X' && c5=='X' && c6=='6'){
                c6 = 'O';
    
                printf("The bots move is 6.\n");
        }
         else if (c4=='X' && c5=='5' && c6=='X'){
                c5 = 'O';
    
                printf("The bots move is 5.\n");
        }
        else if (c4=='4' && c5=='X' && c6=='X'){
                c4 = 'O';
    
                printf("The bots move is 4.\n");
                
        }
        else if (c7=='X' && c8=='X' && c9=='9'){
                c9 = 'O';
    
                printf("The bots move is 9.\n");
        }
         else if (c7=='X' && c8=='8' && c9=='X'){
                c8 = 'O';
    
                printf("The bots move is 8.\n");
        }
        else if (c7=='7' && c8=='X' && c9=='X'){
                c7 = 'O';
    
                printf("The bots move is 7.\n");
                
        }
        else if (c1=='X' && c4=='X' && c7=='7')
            {
                c7 = 'O';
                printf("The bot chose 7.\n");
            }
            else if (c1=='X' && c4=='4' && c7=='X')
            {
                c4 = 'O';
                printf("The bot chose 4.\n");
            }
            else if (c1=='1' && c4=='X' && c7=='X')
            {
                c1 = 'O';
                printf("The bot chose 1.\n");
            }

            else if (c2=='X' && c5=='X' && c8=='8')
            {
                c8 = 'O';
                printf("The bot chose 8.\n");
            }
            else if (c2=='X' && c5=='5' && c8=='X')
            {
                c5 = 'O';
                printf("The bot chose 5.\n");
            }
            else if (c2=='2' && c5=='X' && c8=='X')
            {
                c2 = 'O';
                printf("The bot chose 2.\n");
            }

            else if (c3=='X' && c6=='X' && c9=='9')
            {
                c9 = 'O';
                printf("The bot chose 9.\n");
            }
            else if (c3=='X' && c6=='6' && c9=='X')
            {
                c6 = 'O';
                printf("The bot chose 6.\n");
            }
            else if (c3=='3' && c6=='X' && c9=='X')
            {
                c3 = 'O';
                printf("The bot chose 3.\n");
            }
        //diagonally defeneding
        else if (c1=='X' && c5=='X' && c9=='9'){
                c9 = 'O';
    
                printf("The bots move is 9.\n");
        }
         else if (c1=='X' && c5=='5' && c9=='X'){
                c5 = 'O';
    
                printf("The bots move is 5.\n");
        }
        else if (c1=='1' && c5=='X' && c9=='X'){
                c1 = 'O';
    
                printf("The bots move is 1.\n");
                
        }
        else if (c3=='X' && c5=='X' && c7=='7'){
                c7 = 'O';
    
                printf("The bots move is 7.\n");
        }
         else if (c3=='X' && c5=='5' && c7=='X'){
                c5 = 'O';
    
                printf("The bots move is 5.\n");
        }
        else if (c3=='3' && c5=='X' && c7=='X'){
                c3 = 'O';
    
                printf("The bots move is 3.\n");
                
        }
        /*To defend 3 corner fork(and 2 chances of winning)
        X 2 3     1 2 X 
        4 O 6  or 4 O 6 
        7 8 X     X 8 9 */
        else if(c1=='X'&&c9=='X'&&c5=='O'||c3=='X'&&c7=='X'&&c5=='O'){
            c2='O';

            printf("The bots move is 2.\n");
        } 
        //normal first move 
        else if(c5=='5'){
            c5='O';

            printf("The bots move is 5.\n");
        }
        else if(c5!='5' && c1=='1'){
            c1='O';

            printf("The bots move is 1.\n");
        }
        //normal else move(priorating the corner)
        else if(c3=='3'){
            c3='O';

            printf("The bots move is 3.\n");
        }
        else if(c7=='7'){
            c7='O';

            printf("The bots move is 7.\n");
        }
        else if(c9=='9'){
            c9='O';

            printf("The bots move is 9.\n");
        }
        //middle moves
        else if (c2 == '2')                 
            {
                c2 = 'O';
                printf("The bots move is 2.\n");
            }
            else if (c4 == '4')
            {
                c4 = 'O';
                printf("The bots move is 4.\n");
            }
            else if (c6 == '6')
            {
                c6 = 'O';
                printf("The bots move is 6.\n");
            }
            else if (c8 == '8')
            {
                c8 = 'O';
                printf("The bots move is 8.\n");
            }
}        
    
int main(){
    int FirstHumanMove ;
    printf("\n TicTacToe(made by Siddik).Use your intellectuals.\n");
    printf(" press 1 if you start. Otherwise, press 2: ");
    scanf("%d", &FirstHumanMove);
    printf("%c | %c | %c\n----------\n%c | %c | %c\n----------\n%c | %c | %c\n\n", c1, c2, c3, c4, c5, c6, c7, c8, c9);

    if (FirstHumanMove == 1)
    {
        for (int i = 1; ; i++)              // No limit of i, because humn can give many invalid moves
        {
        printf("\n Player 1 Enter the number of corresponding square in which you want to move: ");
        scanf("%d", &Player1Choice);
        printf("\n");

        HumanMove = HumanMove_and_win();             

        if (HumanMove == 1)
        {

            BotWinningMove();

            if (Bot_win_detect_variable == 1)         //  bot won. Break 
            {
                printf("\n%c | %c | %c\n----------\n%c | %c | %c\n----------\n%c | %c | %c\n", c1, c2, c3, c4, c5, c6, c7, c8, c9);
                break;
            }
            
            BotMove();

            printf("\n%c | %c | %c\n----------\n%c | %c | %c\n----------\n%c | %c | %c\n", c1, c2, c3, c4, c5, c6, c7, c8, c9);

            // Condition for draw
            if (c1 != '1' && c2 != '2' && c3 != '3' && c4 != '4' && c5 != '5' && c6 != '6' && c7 != '7' && c8 != '8' && c9 != '9')
            {
                printf("\nDraw!!Rerun the code to play again.\nApproch  the best\n\n");
                break;
            }
        }
        
        }
    }
    
    else if (FirstHumanMove == 2)
    {
        for (int i = 1; ; i++)              
        {
           
            if(HumanMoveNumber == BotMoveNumber - 1)            //start from one as bot will give the first move
            {
            
            BotWinningMove() ;

            if (Bot_win_detect_variable == 1)
            {
                printf("\n%c | %c | %c\n----------\n%c | %c | %c\n----------\n%c | %c | %c\n", c1, c2, c3, c4, c5, c6, c7, c8, c9);
                break;
            }
            
            BotMove() ;             

            BotMoveNumber ++ ;

            if (c1 != '1' && c2 != '2' && c3 != '3' && c4 != '4' && c5 != '5' && c6 != '6' && c7 != '7' && c8 != '8' && c9 != '9')
            {
                printf("\n%c | %c | %c\n----------\n%c | %c | %c\n----------\n%c | %c | %c\n", c1, c2, c3, c4, c5, c6, c7, c8, c9);
                printf("\nDraw!!Rerun the code to play again.\nApproch  the best\n\n");
                break;
            }

            }
            printf("\n%c | %c | %c\n----------\n%c | %c | %c\n----------\n%c | %c | %c\n", c1, c2, c3, c4, c5, c6, c7, c8, c9);

            printf("\nplayer 1 Enter the number of  corrsponding square in which you want to move: ");
            scanf("%d", &Player1Choice);
            printf("\n");

            HumanMove = HumanMove_and_win();           // Function call + Value declare

            if (HumanMove == 1)
            {
                HumanMoveNumber++ ;
            }
            

            }
        
    }
    
    if (FirstHumanMove != 1 && FirstHumanMove != 2)
    {
        printf("\nYou've entered wrong choice.NO problem!!\n Please rerun the program and Enter 1 or 2 to play again.Thank you!!\n\n");
    }
    

    return 0;
}
            
       
            
       
            
    