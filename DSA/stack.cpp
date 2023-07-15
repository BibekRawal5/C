#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 5

int stack[MAX_SIZE];
int top = -1;

int is_empty()
{
    return (top == -1);
}

int is_full()
{
    return (top == MAX_SIZE);
}

void push(int item)
{
    if (is_full())
    {
        printf("Stack Overflow (Stack is Full).\n");
        return;
    }
	
	if(is_empty())
		top = 0;
	
    stack[top++] = item;
}

int pop()
{
    if (is_empty())
        printf("Stack Underflow. (Stack is Empty)\n");
    else
    {
    	printf("%d popped from stack\n", stack[top]);
		return stack[top--];
	}
}

void display()
{
	int i = 0;
	if(is_empty())
		printf("Stack is empty\n");
	else
	{
		printf("Items of stack are: ");
		while (i < top)
			printf("%d\t", stack[i++]);
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
        printf("1. Push\n2. Pop\n3. Display\n4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter the item to push: ");
            scanf("%d", &item);
            push(item);
            break;
        
		case 2:
            pop();
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
