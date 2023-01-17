#include<stdio.h>
int main()
{
	int r1,c1,r2,c2,su=0;
	printf("Enter the number of rows of 1st matrix");
	scanf("%d",&r1);
	printf("Enter the number of columns of 1st matrix");
	scanf("%d",&c1);
	int ar1[r1][c1];
	for (int i=0;i<r1;i++)
	{
		for (int j=0;j<c1;j++)
		{
			scanf("%d",&ar1[i][j]);
		}	
	}
	printf("Enter the number of rows of 2nd matrix");
		scanf("%d",&r2);
		printf("Enter the number of columns of 2nd matrix");
		scanf("%d",&c2);
		int ar2[r2][c2];
		for (int i=0;i<r2;i++)
		{
			for (int j=0;j<c2;j++)
			{
				scanf("%d",&ar2[i][j]);
			}	
		}
	if(r1!=r2 || c1!=c2)
	{
		printf("FOR SUBTRACTION ROW AND COLUMN SHOULD MATCH");
	}
	else
	{
	for (int i=0;i<r1;i++)
			{
				for (int j=0;j<c1;j++)
				{
					su=ar1[i][j]-ar2[i][j];
					printf("%d ",su);
				}
				printf("\n");	
			}	
	}
	return 0;
}
