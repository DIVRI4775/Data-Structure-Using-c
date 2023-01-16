#include<stdio.h>
int main()
{
	int n,i,max,min;
	printf("enter the size of the array");
	scanf("%d",&n);
	printf("enter the elements to the array\n");
	int ar[n];
	for (i=0;i<n;i++)
	{
		scanf("%d",&ar[i]);
	}
	max=0;
	min=ar[i];
	for (i=0;i<n;i++)
		{
			if(max<ar[i])
			{
				max=ar[i];
			}
			if (min>=ar[i])
			{
				min=ar[i];
			}
		}	
	printf("the largest element is %d \n",max);
	printf("the smallest element is %d",min);
	return 0;
}
