#include<stdio.h>
int main()
{
	int s,i;
	printf("enter the size of the array");
	scanf("%d",&s);
	printf("enter the elements to the array\n");
	int ar[s];
	for (i=0;i<s;i++)
	{
		scanf("%d",&ar[i]);
	}
	printf("\n");
	printf("entered array is \n");
	for (i=0;i<s;i++)
		{
			printf("%d ",ar[i]);
		}	
return 0;
}
