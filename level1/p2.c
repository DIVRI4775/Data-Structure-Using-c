
#include<stdio.h>
int main()
{
	int n,i,s=0;
	printf("enter the size of the array");
	scanf("%d",&n);
	printf("enter the elements to the array\n");
	int ar[n];
	for (i=0;i<n;i++)
	{
		scanf("%d",&ar[i]);
		s=s+ar[i];
	}
	printf("the sum of the elements are %d\n",s);
	printf("the average of the elements are %d",s/n);
	return 0;
}
	
	
	
