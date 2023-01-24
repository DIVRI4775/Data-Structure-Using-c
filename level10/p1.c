#include<stdio.h>
int main()
{
	int n,f,k;
	printf("Enter the size of the array ");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the element to the array\n");
	for (int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Array after sorting\n");
	for (int i=0;i<n;i++)
		{
			for (int j=0;j<n-1;j++)
			{
				if (arr[j+1]<arr[j])
				{
					k=arr[j];
					arr[j]=arr[j+1];
					arr[j+1]=k;
				}
			}
		}
	for (int i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
}
