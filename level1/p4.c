#include<stdio.h>
int main()
{
	int n,i,c,j,k,r=0;
	printf("enter the size of the array");
	scanf("%d",&n);
	printf("enter the elements to the array\n");
	int ar[n];
	for (i=0;i<n;i++)
	{
		scanf("%d",&ar[i]);
	}
		for (i=0;i<n;i++)
		{
			k=0;
			c=ar[i];
			if(c!=r)
			{
			for (j=0;j<n;j++)
			{
				if(c==ar[j])
				{
					k=k+1;
					r=c;
				}
			}
			if(k>=2)
			{
					printf("element %d is repeated %d times",c,k);
			}
			}
	
		}
	return 0;
}
