#include<stdio.h>
int main()
{
	int r1,c1,c,k=0,o=0;
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
			if(ar1[i][j]!=0)
			{
				k=k+1;	
			}
			else{
				o=o+1;
			}
		}
	}
	if(o>=k)
	{
	printf("ITS A SPARK MATRIX\n");
	int row[k];
	int col[k];
	int el[k];
	for (int i=0;i<r1;i++)
		{
			c=0;
			for (int j=0;j<c1;j++)
			{
				if(ar1[i][j]>0)
				{
					row[c]=i;
					col[c]=j;
					el[c]=ar1[i][j];	
				}
				c=c+1;
			}
		}
	printf("\n");
	int fr[3][k];
	for (int i=0;i<3;i++)
	{
		if (i==0){
				for ( int j=0;j<k;j++)
					{
						fr[i][j]=row[j];
					}	
		}
		if (i==1){
						for ( int j=0;j<k;j++)
							{
								fr[i][j]=col[j];
							}	
				}
		if (i==2){
								for ( int j=0;j<k;j++)
									{
										fr[i][j]=el[j];
									}	
						}
		
	}
	for (int i=0;i<3;i++)
				{
					for (int j=0;j<k;j++)
					{
						printf("%d ",fr[i][j]);
					}
					printf("\n");	
				}	
	}
	else{
		printf("ITS NOT A SPARK MATRIX");
	}
		return 0;
}
