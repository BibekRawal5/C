#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

#define MAX 9

typedef struct 
{
    char name[20];
    int votes;
}
candidates;

candidates candidate[MAX];

int candidate_count;

bool check(char name[]);
void print_winner(void);

int main (int argc , char *argv[])
{
    //incase user forgets to give voters name from command line
    if (argc < 2)
    {
        printf("./vote.c candidate1 candidate2 ........\n");
        return 1;
    }
    // if candidate are more than 9
    candidate_count = argc - 1;
    if (candidate_count > 9)
    {
        printf("Maximum number of candidates can be %d\n", MAX);
    }
    
    
    //putting user given candidate name in the struct
    for (int i = 0; i < candidate_count; i++)
    {
        strcpy(candidate[i].name, argv[i + 1]);
        candidate[i].votes = 0;
    }

    //get number of voters 
    int voters;
    printf("Enter the numbers of voters: ");
    scanf("%d", &voters);
    char name[20];
    for (int i = 0; i < voters; i++)
    {
        printf("vote : ");
        scanf("%s", name);
        if (!check(name))                //counting votes for individual with a function
        {
            printf("Invalid vote\n");   
        } 
    }

    // print winner with function
    print_winner();

}

bool check(char name[])
{
    for ( int i = 0; i < candidate_count; i++)
    { 
        if (strcmp(candidate[i].name,name) == 0)
        {
            candidate[i].votes++;
            return true;
        }
    }
    return false;
}

void print_winner(void)
{
    // getting the maximum nuber of votes

    int max_votes = 0;
    for (int i = 0; i < candidate_count; i++)
    {
        if (candidate[i].votes >= max_votes)
        {
            max_votes = candidate[i].votes;
        }
    }

    //printing the names which got maximum number of votes

    for (int  i = 0; i < candidate_count; i++)
    {
        if (max_votes == candidate[i].votes)
        {
            printf("%s\n", candidate[i].name);
        }
    }
    
}