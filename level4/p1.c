#include<stdio.h>
#define MAX 10
int main(){
int arr[MAX]={1,2,3,45,89,35};
int rear=5;
int front=0;
int val;
int a,i,deleted;
char c='n';
char cc;
printf("Enter 1 for linear queue insertion\n");
printf("Enter 2 for linear queue deletion\n");
printf("Enter 3 for linear queue display\n");
while(c=='n')
{
printf("Enter Your choice");
scanf("%d",&a);
switch(a){
case 1:{
printf("Enter the number which you to insert");
    scanf("%d",&val);
    if(rear==MAX-1){ 
  printf("queue is overflow");
    }
    else{
   if(rear==-1 && front ==-1){ 
  printf("queue is empty");
  rear=0;
  front=0;
  arr[front]=val;
   }
   else{
  rear=rear+1;
  arr[rear]=val;
      }
        }  
    int i;
    for( i=0;i<=rear;i++){
printf("%d ",arr[i]);
    }  
    break;
}
  case 2:{
if(rear==-1 && front==-1){
printf("queue is underflow"); 
}
else{
  if(front ==rear){     
  deleted=arr[front];
  front=-1;
  rear=-1;
 }
 else{
  deleted=arr[front];
  front=front+1;
 }
    }
    for( i=front;i<=rear;i++){
    printf(" ");
   printf("%d ",arr[i]);
}
  break;
  }
  case 3:{
  	printf("your linear qeue is\n");
  		for( i=0;i<=rear;i++){
		  printf("%d ",arr[i]);
		      }  
  	
break;
  }
}
printf("do you want to exit; y/n\n");
scanf("%s",&cc);
if(cc=='y')
{
	c='y';
}
else{
	c='n';
}
}
return 0;
}
