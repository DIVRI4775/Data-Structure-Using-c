#include<stdio.h>
int main()
{
	int r1,c1,su=0;
	printf("Enter the number of rows of matrix");
	scanf("%d",&r1);
	printf("Enter the number of columns of matrix");
	scanf("%d",&c1);
	int ar1[r1][c1];
	for (int i=0;i<r1;i++)
	{
		for (int j=0;j<c1;j++)
		{
			scanf("%d",&ar1[i][j]);
		}	
	}
	for (int i=0;i<r1;i++)
			{
				for (int j=0;j<c1;j++)
				{
					if(i==j)
					{
						su=su+ar1[i][j];
					}
				}
			}
		printf("the sum of diagonal is %d ",su)	;
	return 0;
}
