#include<stdio.h>

int prime(m)
{
	int i,c=1;
	for(i=2;i<m;i++)
	{
		if(m%i==0)c=0;
	}
	return c; 
}

int main()
{
	int i,m,n,c,count=0,sum=0;
	scanf("%d,%d",&m,&n);
	for(i=m;i<=n;i++)
	{
		if(i==1)i++;
		c=prime(i);
		if(c==1)
		{
			count++;
			sum+=i;
		} 
	}
	printf("count=%d,sum=%d",count,sum);
	return 0;
}
