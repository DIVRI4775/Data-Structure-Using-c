#include <stdio.h>
#include <stdlib.h>
void insertionf();
void insertione();
void insertionp();
void deleteionf();
void deleteione();
void deleteionp();
void display();
struct node {
    int data;
    struct node *prev, *next;
};
struct node* start = NULL;
int main(){
    int c,cc;
    char op='y';
    while (op=='y') 
	{
    	printf("WELCOME TO MENU DRIVEN\n");
        printf("1. Insertion\n");
        printf("2. Deletion\n");
        printf("3. Display\n");
        printf("Enter your choice :\n");
        scanf("%d", &c);
        switch (c) 
		{
        case 1:
        	{
        	printf("What type of Insertion you want to perform\n");
        	printf("1. Insertion at begining\n");
        	printf("2. Insertion at ending\n");
        	printf("3. Insertion at any position\n");
        	scanf("%d",&cc);
        	switch(cc)
        	{
				case 1:
					insertionf();
					break;
				case 2:
					insertione();
					break;
				case 3:
					insertionp();
					break;
		        default:
		        	{
		            printf("Inter chocie is not correct\n");
		        	}
			}
			break;
        	}
        case 2:
			{
        	printf("What type of Deletion you want to perform\n");
        	printf("1. Deletion at begining\n");
        	printf("2. Deletion at ending\n");
        	printf("3. Deletion at any position\n");
        	scanf("%d",&cc);
        	switch(cc)
        	{
				case 1:
					deleteionf();
					break;
				case 2:
					deleteione();
					break;
				case 3:
					deleteionp();
					break;
                default:
		        	{
		            printf("Inter chocie is not correct\n");
		        	}	
			}
			break;
			}
            case 3:
            {
                display();
	            break;
            }
            default:
        	{
            printf("Inter chocie is not correct\n");
        	}
        }
    printf("Do you want to continue ? y/n \n");
    scanf("%s",&op);
    }
    return 0;
}
void display()
{
    if (start == NULL)
	 {
        printf("linked link is empty\n");
        return;
    }
    struct node* temp;
    temp = start;
    while (temp != NULL)
	 {
        printf("%d\n", temp->data);
        temp = temp->next;
    }
}
void insertionf()
{
    int data;
    struct node* temp;
    temp = (struct node*)malloc(sizeof(struct node));
    printf("Enter data to be inserted: ");
    scanf("%d", &data);
    temp->data = data;
    temp->prev = NULL;
    temp->next = start;
    start = temp;
}
void insertione()
{
    int data;
    struct node *temp, *trav;
    temp = (struct node*)malloc(sizeof(struct node));
    temp->prev = NULL;
    temp->next = NULL;
    printf("\nEnter number to be inserted: ");
    scanf("%d", &data);
    temp->data = data;
    temp->next = NULL;
    trav = start;
    if (start == NULL) 
	{
 
        start = temp;
    }
    else 
	{
        while (trav->next != NULL)
            trav = trav->next;
        temp->prev = trav;
        trav->next = temp;
    }
}
void insertionp()
{
    int data, pos, i = 1;
    struct node *temp, *newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->next = NULL;
    newnode->prev = NULL;
    printf("\nEnter position : ");
    scanf("%d", &pos);
    printf("\nEnter number to be inserted: ");
    scanf("%d", &data);
    newnode->data = data;
    temp = start;
    if (start == NULL)
	 {
        start = newnode;
        newnode->prev = NULL;
        newnode->next = NULL;
    }
    else if (pos == 1) {
        newnode->next = start;
        newnode->next->prev = newnode;
        newnode->prev = NULL;
        start = newnode;
    }
    else
	 {
        while (i < pos - 1)
		{
            temp = temp->next;
            i++;
        }
        newnode->next = temp->next;
        newnode->prev = temp;
        temp->next = newnode;
        temp->next->prev = newnode;
    }
}
void deleteionf()
{
    struct node* temp;
    if (start == NULL)
    {
        printf("\nList is empty\n");
    }
	else
	{
        temp = start;
        start = start->next;
        if (start != NULL)
            start->prev = NULL;
        free(temp);
    }
}
void deleteione()
{
    struct node* temp;
    if (start == NULL)
        printf("\nList is empty\n");
    temp = start;
    while (temp->next != NULL)
        temp = temp->next;
    if (start->next == NULL)
        start = NULL;
    else {
        temp->prev->next = NULL;
        free(temp);
    }
}
void deleteionp()
{
    int pos, i = 1;
    struct node *temp, *position;
    temp = start;
    if (start == NULL)
        printf("\nList is empty\n");
    else 
	{
        printf("\nEnter position : ");
        scanf("%d", &pos);
        if (pos == 1)
		{
            position = start;
            start = start->next;
            if (start != NULL)
			{
                start->prev = NULL;
            }
            free(position);
            return;
        }
        while (i < pos - 1) 
		{
            temp = temp->next;
            i++;
        }
        position = temp->next;
        if (position->next != NULL)
            position->next->prev = temp;
        temp->next = position->next;
        free(position);
    }
}
