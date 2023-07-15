#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 5

int queue[MAX_SIZE];
int front = -1, rear = -1;

int is_empty()
{
    return (rear == front);
}

int is_full()
{
    return (rear == MAX_SIZE);
}

void enqueue(int item)
{
    if (is_full())
    {
        printf("Queue Overflow (Queue is Full).\n");
        return;
    }
	
	if(is_empty())
	{
		front = rear = 0;
	}
	
    queue[rear++] = item;
}

int dequeue()
{
    if (is_empty())
        printf("Queue Underflow. (Queue is Empty)\n");
    else
    {
    	printf("%d popped from queue\n", queue[front]);
		return queue[front++];
	}
}

void display()
{
	int i = front;
	if(is_empty())
		printf("Queue is empty\n");
	else
	{
		printf("Items of queue are: ");
		while (i < rear)
			printf("%d\t", queue[i++]);
		printf("\n\n");
	}
	
}

int main()
{
    int choice;
    int item;

    while (1)
    {
        printf("\n-----Menu-----\n");
        printf("1. Enqueue\n2. Dequeue\n3. Display\n4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter the item to push: ");
            scanf("%d", &item);
            enqueue(item);
            break;
        
		case 2:
            dequeue();
			break;
        
        case 3:
        	display();
        	break;
        	
        case 4:
            printf("-----Exiting-----\n");
            return 0;
        
		default:
            printf("Wrong choice. Please try again.\n");
        }
    }

    return 0;
}
