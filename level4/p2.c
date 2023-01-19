#include<stdio.h>
# define MAX 10
int arr[MAX];
int f = -1;
int r = -1;
void insertion(int tm)
{
if((f == 0 && r == MAX-1) || (f == r+1))
{
printf("Queue Overflow \n");
return;
}
if(f == -1)
{
f = 0;
r = 0;
}
else
{
if(r == MAX-1)
r = 0;
else
r = r+1;
}
arr[r] = tm ;
printf("your circular qeue is\n");
  		for( int i=0;i<=r;i++){
		  printf("%d ",arr[i]);
		      }  
}
void deletion()
{
if(f== -1)
{
printf("Queue Underflown\n");
return ;
}
printf("Element deleted from queue is : %dn\n",arr[f]);
if(f == r)
{
f = -1;
r=-1;
}
else
{
if(f == MAX-1)
f = 0;
else
f = f+1;
}
printf("your circular qeue is\n");
  		for( int i=0;i<=r;i++){
		  printf("%d ",arr[i]);
		      }  
}
void display()
{
printf("your lcircular qeue is\n");
  		for( int i=0;i<=r;i++){
		  printf("%d ",arr[i]);
		      }  
}
int main()
{
int it,n;
char c='n';
char cc;
while(c=='n')
{
printf("Enter 1 for circular queue insertion\n");
printf("Enter 2 for circular queue deletion\n");
printf("Enter 3 for circular queue display\n");
printf("Enter your choice : \n");
scanf("%d",&n);
switch(n)
{
case 1 :
printf("Input the element for insertion in queue : \n");
scanf("%d", &it);
insertion(it);
break;
case 2 :
deletion();
break;
case 3:
display();
break;
case 4:
break;
default:
printf("Wrong choicen\n");
}
printf("\n do you want to exit; y/n\n");
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
