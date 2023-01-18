#include<stdio.h>
int rec(int a);
int main()
{
	int n,r;
	printf("enter the number");
	scanf("%d",&n);
	r=rec(n);
	printf("The factorial of the given number is %d",r);
	return 0;
}
int rec(int a)
{
	if(a==0)
	{
		return 1;
	}
	else{
		return a*rec(a-1);
	}
}
