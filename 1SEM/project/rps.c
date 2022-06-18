#include <stdio.h>
#include <stdlib.h>                    //DECLARING ALL THE LIBRARIES USED            
#include <time.h>
#include <conio.h>

int main()
{
      
     //DECLARING ALL THE VARIABLES USED
     int ran, mode, ret;
     char rps1;
     char rps2;
     char choice;
     
     // MAKING A DO LOOP INCASE USER WANTS TO PLAY AGAIN WITHOUT RE-RUNNING THE PROGRAM
     do
     { 
          do
          {
               printf("\n\nWhich mode do you want to play? (Press the number assigend on the left)\n");
               printf("1. VERSUS AI\n");
               printf("2. Human vs Human\n");
               ret = scanf("%i", &mode);
               fflush(stdin);
          }while (ret != 1 || mode > 2 || mode < 1);


          if(mode == 1)
          {
               goto AI;
          }
          else
          {
               goto HUMAN;
          }

          AI:
          //VERSUS AI
          //ASKING THE USER MOVE AND NOT ACCEPTING ANYTHING OTHER THAN ROCK, PAPER AND SCISSORS
          do
          {
               printf("Enter you move: ");
               scanf("%c", &rps1);
               fflush(stdin);
               if (rps1 == 'r' || rps1 == 'p' || rps1 == 's')
               {
                    break;
               }
          }while(1);

          //GENERATING A RANDOM NUMBER BETWEEN 1 TO 3 WHICH REPRESENT COMPUTER MOVES
          srand(time(NULL));
          ran = 1 + rand() % 3;

    
          //COMPARING THE COMPUTER GENERATED MOVE WITH THE USER GENERATED
    

          //WHEN COMPUTER choose ROCK
          if (ran == 1)
          {
               if (rps1 == 's')
               {
                    printf("\nYou loose, computer choose rock\n\n");
               }
               else if(rps1 == 'r')
               {
               printf("\nYou drew, computer choose rock\n\n");
               }
               else if (rps1 == 'p')
               {
                    printf("\nYou won, computer choose rock\n\n");
               }
          }


          //WHEN COMPUTER choose PAPER
          else if (ran == 2)
          {
               if (rps1 == 's')
               {
                    printf("\nYou won, computer choose paper\n\n");
               }
               else if(rps1 == 'r')
               {
               printf("\nYou loose, computer choose paper\n\n");
               }
               else if (rps1 == 'p')
               {
                    printf("\nYou drew, computer choose paper\n\n");
               }
          }


          //WHEN COMPUTER choose SCISSOR
          else if (ran == 3)
          {
               if (rps1 == 's')
               {
                    printf("\nYou drew, computer choose scissor\n\n");
               }
               else if(rps1 == 'r')
               {
               printf("\nYou won, computer choose scissor\n\n");
               }
               else if(rps1 == 'p')
               {
                    printf("\nYou loose, computer choose scissor\n\n");
               }
          }

          goto END;

      
          HUMAN:
          //HUMAN VERSUS HUMAN
          //ASKING THE USER MOVE AND NOT ACCEPTING ANYTHING OTHER THAN ROCK, PAPER AND SCISSORS
          //PLAYER 1 MOVE

          printf("Payer 1,  ");     
           do
          {
               printf("Enter you move: ");
               rps1 = getch();
               printf("*** \n");
               fflush(stdin);
               if (rps1 == 'r' || rps1 == 'p' || rps1 == 's')
               {
                    break;
               }
          }while(1);


          //PLAYER 2 move
          printf("Payer 2,  ");     
           do
          {
               printf("Enter you move: ");
               scanf("%c", &rps2);
               fflush(stdin);
               if (rps2 == 'r' || rps2 == 'p' || rps2 == 's')
               {
                    break;
               }
          }while(1);


           //WHEN PLAYER 2 CHOOSES ROCK
          if (rps2 == 'r')
          {
               if (rps1 == 's')
               {
                    printf("\nPlayer 2 wins, he choose rock against scissors.\n\n");
               }
               else if(rps1 == 'r')
               {
               printf("\nYou drew, both choose rock.\n\n");
               }
               else if (rps1 == 'p')
               {
                    printf("\nPlayer 1 win, player 2 choose rock.\n\n");
               }
          }


              //WHEN PLAYER 2 CHOOSES PAPER
          if (rps2 == 'p')
          {
               if (rps1 == 's')
               {
                    printf("\nPlayer 1 wins, player 2 choose scissor.\n\n");
               }
               else if(rps1 == 'r')
               {
               printf("\nPlayer 2 wins, he choose paper against rock.\n\n");
               }
               else if (rps1 == 'p')
               {
                    printf("\nYou drew, both choose paper.\n\n");
               }
          }


          //WHEN PLAYER 2 CHOOSES PAPER
          if (rps2 == 's')
          {
               if (rps1 == 's')
               {
                    printf("\nYou drew, both choose scissor.\n\n");
               }
               else if(rps1 == 'r')
               {
               printf("\nPlayer 1 wins, he choose rock against scissor.\n\n");
               }
               else if (rps1 == 'p')
               {
                    printf("\nPlayer 2 wins , he choose scissor against paper.\n\n");
               }
          }



          END:


          printf("Do you want to play again ? (y/n) : ");
          scanf("%c", &choice);
          fflush(stdin);


    }while((choice == 'y') || (choice == 'Y'));
     
    return 0;
}


