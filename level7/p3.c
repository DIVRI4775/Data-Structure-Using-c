#include<stdio.h>  
#include<stdlib.h>  
void push();
void pop();
struct node   
{  
    int data;  
    struct node *next;   
};  
struct node *head; 
int main ()  
{  
    char op='y',cc; 
	int c; 
    while(op== 'y')   
    {  
        printf("WLCOME TO MENU DRIVEN\n");  
        printf("1. INSERTION\n");  
        printf("2. DELETION\n");  
        printf("Enter your choice\n");         
        scanf("%d",&c);  
        switch(c) 
        {
			case 1:
				{  
					push(); 
					break;
				}  
			case 2:
				{
					pop();
					break;
				}
			default:
				{
					printf("Entered choice is wrong\n");
				}
        }
        printf("Do you want to continue ? y/n\n");
        scanf("%s",&cc);
        op=cc;
    }
    return 0;
}
void push ()  
{  
    int data; 
	struct node *ptr; 
    ptr = (struct node *)malloc(sizeof(struct node)); 
    if(ptr == NULL)  
    {  
        printf("OVERFLLOW\n");   
    }  
    else   
    {  
        printf("Enter the value to be inserted\n");  
        scanf("%d",&data);  
        if(head==NULL)  
        {         
            ptr->data = data;  
            ptr -> next = NULL;  
            head=ptr;  
        }   
        else   
        {  
            ptr->data = data;  
            ptr->next = head;  
            head=ptr;  
        }  
        printf("Item is pushed\n");       
    }  
}  
void pop()  
{  
    int item;  
    struct node *ptr;  
    if (head == NULL)  
    {  
        printf("UNDERFLOW\n");  
    }  
    else  
    {  
        item = head->data;  
        ptr = head;  
        head = head->next;  
        free(ptr);  
        printf("Item is popped\n");  
          
    }  
}  
