#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>
int main()
{
char choice='y';
int count=0;
struct node
{
int data;
struct node *next;
};
struct node *head,*newnode,*temp;
head=NULL;
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
count =count+1;
scanf("%s",&choice);
}
printf("The number of nodes are %d",count);
return 0;
}
