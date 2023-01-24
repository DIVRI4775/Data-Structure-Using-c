#include<stdio.h>
int main()
{
	int n,f=0,k;
	printf("Enter the size of the array ");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the element to the array\n");
	for (int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Array after sorting\n");
	while (f<n)
	{
		for (int i=0;i<n;i++)
			{
				if (arr[i]<arr[f])
					{
						k=arr[f];
						arr[f]=arr[i];
						arr[i]=k;
					}
			}
		f=f+1;	
	}
	for (int i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
}
