#include <stdio.h>
#include <stdlib.h>                    //DECLARING ALL THE LIBRARIES USED            
#include <time.h>
#include <conio.h>

int main()
{
      
     //DECLARING ALL THE VARIABLES USED
     int ran;
     char rps;
     char choice;
     
     // MAKING A DO LOOP INCASE USER WANTS TO PLAY AGAIN WITHOUT RE-RUNNING THE PROGRAM
     do
     { 

          //ASKING THE USER MOVE AND NOT ACCEPTING ANYTHING OTHER THAN ROCK, PAPER AND SCISSORS
          do
          {
               printf("Enter you move: ");
               scanf("%c", &rps);
               fflush(stdin);
               if (rps == 'r' || rps == 'p' || rps == 's')
               {
                    break;
               }
          }while(1);

          //GENERATING A RANDOM NUMBER BETWEEN 1 TO 3 WHICH REPRESENT COMPUTER MOVES
          srand(time(NULL));
          ran = 1 + rand() % 3;

    
          //COMPARING THE COMPUTER GENERATED MOVE WITH THE USER GENERATED
    

          //WHEN COMPUTER choiceOSE ROCK
          if (ran == 1)
          {
               if (rps == 's')
               {
                    printf("\nYou loose, computer choiceose rock\n\n");
               }
               else if(rps == 'r')
               {
               printf("\nYou drew, computer choiceose rock\n\n");
               }
               else if (rps == 'p')
               {
                    printf("\nYou won, computer choiceose rock\n\n");
               }
          }


          //WHEN COMPUTER choiceOSE PAPER
          else if (ran == 2)
          {
               if (rps == 's')
               {
                    printf("\nYou won, computer choiceose paper\n\n");
               }
               else if(rps == 'r')
               {
               printf("\nYou loose, computer choiceose paper\n\n");
               }
               else if (rps == 'p')
               {
                    printf("\nYou drew, computer choiceose paper\n\n");
               }
          }


          //WHEN COMPUTER choiceOSE SCISSOR
          else if (ran == 3)
          {
               if (rps == 's')
               {
                    printf("\nYou drew, computer choiceose scissor\n\n");
               }
               else if(rps == 'r')
               {
               printf("\nYou won, computer choiceose scissor\n\n");
               }
               else if(rps == 'p')
               {
                    printf("\nYou loose, computer choiceose scissor\n\n");
               }
          }

          printf("Do you want to play again ? (y/n)\n\n");
          scanf("%c", &choice);
          fflush(stdin);


    }while((choice == 'y') || (choice == 'Y'));
     
    return 0;
}


