#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>
int main(){
char choice='y';
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
newnode->next=head;
head=newnode;
}
printf("Do you want to insert more ? y/n \n ");
scanf("%s",&choice);
}
temp=head;
while(temp!=NULL)
{
printf("%d ",temp->data);
temp=temp->next;
}
return 0;
}
