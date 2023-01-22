#include<stdio.h>  
#include<stdlib.h> 
void insertion();
void deletion();
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
					insertion(); 
					break;
				}  
			case 2:
				{
					deletion();
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
void insertion()  
{  
	struct node *ptr,*temp;   
    int item;  
    ptr = (struct node *)malloc(sizeof(struct node));  
    if(ptr == NULL)  
	{
		printf("OVERFLOW\n");  
	}  
    else  
	   {  
	        printf("Enter the number to be inserted \n");  
		    scanf("%d",&item);  
		    ptr->data = item;  
		    if(head == NULL)  
	        {  
	            head = ptr;  
			    ptr -> next = head;    
		    }  
	        else  
		    {  
			    temp = head;  
			    while(temp -> next != head)  
	            {  
		            temp = temp -> next;  
		        }  
		        temp -> next = ptr;   
	            ptr -> next = head;  
	        }  					          
	        printf("node inserted\n");  
        }  
}  
void deletion()  
{  
    struct node *ptr, *preptr;  
    if(head==NULL)  
    {  
        printf("UNDERFLOW\n");  
    }  
    else if (head ->next == head)  
    {  
        head = NULL;  
        free(head);  
        printf("node deleted \n");  
  
    }  
    else   
    {  
        ptr = head;  
        while(ptr ->next != head)  
        {  
            preptr=ptr;  
            ptr = ptr->next;  
        }  
        preptr->next = ptr -> next;  
        free(ptr);  
        printf("node deleted\n");       
  
    }  
}
