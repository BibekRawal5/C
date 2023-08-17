#include <stdio.h>
#include <stdlib.h>


typedef struct node{
	int value;
	node * next;
};

node *start = NULL;

int is_empty()
{
	return (start == NULL);
}

void insert_at_beg()
{
	node *tmp = (node *)malloc(sizeof(node)), *ith = start;
	
	printf("Enter the value to add: ");
	scanf("%d", &tmp->value);
	
	if(is_empty())
	{
		start = tmp;
		tmp->next = start;	
	}
	
	else
	{
		tmp->next = start;
		while(ith->next != start)
			ith = ith->next;
		start = tmp;
		ith->next = start;

	}
	
}

void insert_at_end()
{
	node *tmp = (node *)malloc(sizeof(node)), *ith = start;
	
	printf("Enter the value to add: ");
	scanf("%d", &tmp->value);
	
	while(ith->next != start)
		ith = ith->next;
		
	ith->next = tmp;
	tmp->next = start;
	
}

void insert_at_nth(int n)
{
	if(n == 1)
		return insert_at_beg();
		
	int i = 1;
	node *tmp = (node *)malloc(sizeof(node)), *ith = start, *prev;
	printf("Enter the value to add: ");
	scanf("%d", &tmp->value);
	
	while(ith->next != start && i < n)
	{
			prev = ith;
			i++;
			ith = ith->next;
	}
	
	if(i < n)
	{
		printf("List too short to insert at %d position, so inserting at end\n", n);
		ith->next = tmp;
		tmp->next = start;	
	}
	else
	{
		tmp->next = ith;
		prev->next = tmp;	
	}	
	
}

int delete_at_beg()
{
	int value;
	node * tmp = start, *ith = start;
	
	if(is_empty())
	{
		printf("list is empty\n");
		return -1;
	}
	
	value = tmp->value;
	printf("%d Deleted from list\n", value);
	while(ith->next != start)
		ith = ith->next;
		
	start = tmp->next;
	ith->next = start;
	free(tmp);
	return value;
}

int delete_at_end()
{
	int value;
	node *ith = start, *tmp;
	
	if(is_empty())
	{
		printf("list is empty\n");
		return -1;
	}
	
	while(ith->next != start)
	{
		tmp = ith;
		ith = ith->next;
	}
	
	value = ith->value;
	printf("%d Deleted from list\n", value);
	tmp->next = start;
	free(ith);
	return value;	
}

int delete_at_nth(int n)
{
	if(n == 1)
		return delete_at_beg();
	
	int value, i = 1;
	node *ith = start, *tmp;
	
	if(is_empty())
	{
		printf("list is empty\n");
		return -1;
	}
	
	if(n == 1)
		return delete_at_beg();
	
	
	while(ith->next != NULL && i < n)
	{
		tmp = ith;
		ith = ith->next;
		i++;
	}
	
	if(i < n)
	{
		printf("List is too short to delete at position %d\n", n);
		return -1;
	}
	
	value = ith->value;
	printf("%d Deleted from list\n", value);
	tmp->next = ith->next;
	free(ith);
	return value;	
}

void display()
{
	node *ith = start;
	
	if(is_empty())
	{
		printf("List is Empty\n\n");
		return;	
	}
	
	printf("Contents of list are: %d\t", ith->value);
	ith = ith->next;
	while(ith != start)
	{
		printf("%d\t", ith->value);
		ith = ith->next;
	}
	printf("\n");
	printf("\n");
}

int number_of_nodes()
{
	int i = 1;
	node *ith = start;
	while(ith->next != start)
	{
		i++;
		ith = ith->next;
	}
	printf("There are %d nodes in lists\n", i);
	return i;
}

int search_item(int key)
{
	node *ith =  start;
	int i = 1;
	
	if(is_empty())
	{
		printf("List is Empty\n\n");
	}
	else
	{
	
		while(ith->value != key)
		{
			i++;
			ith = ith->next;
		}
		printf("%d found at %d th position node\n", key, i);
	
		return i;
	}	
}

int main()
{
	int choice, key;
	do
	{
		printf("-----Menu-----\n1. Add node at beg.\n2. Add nodes at End.\n3. Add node at nth.\n");
		printf("4. Delete node at beg.\n5. Delete nodes at End.\n6. Delete node at nth.\n");
		printf("7. Display all items.\n8.Number of nodes.\n9.Search item in list\n10. Exit\n");
		scanf("%d", &choice);
		
		switch(choice)
		{
			case 1:
				insert_at_beg();
				break;
			
			case 2:
				insert_at_end();
				break;
			
			case 3:
				printf("Enter nth position to insert node: ");
				scanf("%d", &key);
				insert_at_nth(key);
				break;
				
			case 4:
				delete_at_beg();
				break;
			
			case 5:
				delete_at_end();
				break;
			
			case 6:
				printf("Enter nth position to delete node: ");
				scanf("%d", &key);
				delete_at_nth(key);
				break;
				
			case 7: 
				display();
				break;
			
			case 8: 
				number_of_nodes();
				break;
				
			case 9:
				printf("Enter item to search in list: ");
				scanf("%d", &key);
				search_item(key);
				break;
			
			case 10:
				printf("------CLOSING-------\n\n");
				return 0;
				
			default:
				printf("Wrong choice Enter Again\n\n");
				break;
		}
	}while(1);
}