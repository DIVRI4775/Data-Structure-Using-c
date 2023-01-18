
#include<stdio.h>
#include<string.h>
int main()
{
	int l,i=0,ll;
	char st[]="CGUBBSR";
	l=strlen(st);
	ll=l-1;
	char stt[l];
	for(ll;ll>=0;ll--)
		{
			stt[i]=st[ll];
			printf("%c",stt[i]);
			i=0;
		}
	
	return 0;
}
