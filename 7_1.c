#include<stdio.h>

int main(void)
{
	int i,n,t,x,c,da=0,xiao=0;
	scanf("%d\n",&n);
	int number[n];
	for(i=0;i<n;i++)
	{
		scanf("%d ",&t);
		number[i]=t;
	}	
	scanf("%d",&x);	
	c=0;
	for(i=0;i<n;i++)
	{
		if(x==number[i])
		{
			printf("%d\n",i);
			c=1;
		}
		if(number[i]>x)da++;
		else if(number[i]<x)xiao++;
	}
	if(c==0)printf("%d\n",-1);
	printf("%d\n",da);
	printf("%d",xiao);
	return 0;
}
