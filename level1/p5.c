  #include<stdio.h>
int main()
{
	int s,i,c,e,in;
	char op ='y';
	printf("enter the size of the array");
	scanf("%d",&s);
	printf("enter the elements to the array\n");
	int ar[s];
	for (i=0;i<s;i++)
	{
		scanf("%d",&ar[i]);
	}
	printf("\n");
	printf("WELCOME TO MENU DRIVEN\n");
	printf("opratios that can be performed are\n");
	printf("1. INSERTION\n");
	printf("2. DELETION\n");
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
				printf("enter the element to be inserted");
				scanf("%d",&e);
				printf("enter the index were to be inserted");
				scanf("%d",&in);
				for (i=s;i>=in;i--)
				{
					if(i==in)
					{
						ar[i]=e;
					}
					else
					{
						ar[i]=ar[i-1];
					}
				}
				printf("new array is");
									 	for (i=0;i<=s;i++)
									 	{
									 		printf("%d ",ar[i]);
									 	}	
				
				break;
			}
		case (2):
				{
					printf("enter the index to be deleted");
					scanf("%d",&in);
					for (i=s;i>=in;i--)
					{
						ar[i]=ar[i-1];
					}
					printf("new array is");
					for (i=0;i<=s;i++)
					{
				    	printf("%d ",ar[i]);
				 	}
						break;
					}
		case (3):
					{
					 printf("entered array is");
					 	for (i=0;i<s;i++)
					 	{
					 		printf("%d ",ar[i]);
					 	}	
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
