#include<stdio.h>
#define max 10
int top=-1;
int sar[max];
int push(int pu,int top,int maxtop,int sar);
int pop();
int dis();
int main()

{
	int s,i,c,t=-1,pus,mt=s-1;
	char op ='y';
	printf("enter the size of the stack");
	scanf("%d",&s);
	printf("enter the elements to the stack\n");
	int sar[s];
	for (i=0;i<s;i++)
	{
		scanf("%d",&sar[i]);
	}
	printf("\n");
	printf("WELCOME TO MENU DRIVEN\n");
	printf("opratios that can be performed are\n");
	printf("1. PUSH\n");
	printf("2. POP\n");
	printf("3. DISPLAY\n");
	while(op == 'y')
	{
	printf("Enter your choice ");
	scanf("%d",&c);
	printf("\n");
	switch(c)
	{
		case (1):
			{
				printf("Enter the element to be pushed\n");
				scanf("%d",&pus);
				push(pus,t,mt,sar[s]);
				break;
			}
		case (2):
				{
					pop();
						break;
					}
		case (3):
					{
					 dis();
					 break;
					}
		default:
			{
				printf("entered choice is wrong");
				break;
			}
		
	}
	printf("\n");
	printf("do you want to exit ; y / n \n");
	scanf("%s",&op);
	}
return 0;
}
int push(int pu,int top,int maxtop,int sar)
{
	if(top==maxtop)
	{
		printf("OVERFLOW\n");
	}
	else{
		top=top+1;
		sar[top]=pu;
	}
}
int pop()
{
	if(top==-1)
}
