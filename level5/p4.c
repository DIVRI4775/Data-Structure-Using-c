#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>
int main()
{
	int c;
	char cc='n';
	struct node
	{
		int data;
		struct node *next;
	};
	struct node *head,*newnode,*temp;
	head=NULL;
	printf("WELCOME TO MENU DRIVEN PROGRAM\n");
	while(cc=='n')
	{
	printf("1. INSERTION\n");
	printf("2. DELETION\n");
	printf("3. DISPLAY\n");
	printf("Enter your choice\n");
	scanf("%d",&c);
	switch(c)
	{
		case 1:
			{
				char choice='y';
				while(choice=='y')
				{
				newnode=(struct node*)malloc(sizeof(struct node));
				printf("Enter the data\n");
				scanf("%d",&(newnode->data));
				newnode->next=NULL;
				if(head==NULL){
				head=newnode;
				temp=head;
				printf("inserted successful\n");
				}
				else{
				temp->next=newnode;
				temp=newnode;
				}
				printf("Do you want to insert more ? y/n \n ");
				scanf("%s",&choice);
				}
				break;
			}
		case 2:
			{
				struct node *ptr,*ptr1;  
				    int loc,i;    
				    printf("Enter the location of the node after which you want to perform deletion \n");  
				    scanf("%d",&loc);  
				    ptr=head;  
				    for(i=0;i<loc;i++)  
				    {  
				        ptr1 = ptr;       
				        ptr = ptr->next;  			             
				        if(ptr == NULL)  
				        {  
				            printf("Can't delete\n");
							break; 
				        }  
				    }  
				    ptr1 ->next = ptr ->next;  
				    free(ptr);  
				    printf("Deleted node %d \n",loc+1); 
				    break;
			}
	    case 3:
	    	{
	    		temp=head;
				while(temp!=NULL)
				{
					printf("%d ",temp->data);
					temp=temp->next;
				}			
				break;
			}
		default:
			{
				printf("Entered choice is wrong\n");
			}
	}
	printf("Do you want to exit? y/n \n");
	scanf("%s",&cc);
}
return 0;
}
