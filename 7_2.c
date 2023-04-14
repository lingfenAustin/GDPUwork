#include<stdio.h>

int main()
{
	int a[11]={1,2,3,4,5,6,7,8,9,0};
	int x1,n1,i,n2;
	scanf("%d",&x1);
	scanf("%d",&n1);
	int b[11];
	for(i=0;i<11;i++)
	{
		b[i]=a[i];
	}
	if(n1>-1&&n1<11)
	{
		b[n1]=x1;
		for(i=n1;i<11;i++)
		{
			b[i+1]=a[i];
		}
	}
	else
	{
		b[10]=x1;
	}
	int c[11];
	for(i=0;i<11;i++)
	{
		c[i]=b[i];
	}	
	scanf("%d",&n2);
	if(n2>-1&&n2<11)
	{
		for(i=n2;i<11;i++)
		{
			c[i]=b[i+1];
		}
	}
	else
	{
		for(i=0;i<11;i++)
		{
			c[i]=b[i+1];
		}
	}
	//Êä³ö	
	for(i=0;i<10;i++)
	{
		printf("%5d",a[i]);
	}
	printf("\n");
	for(i=0;i<11;i++)
	{
		printf("%5d",b[i]);
	}
	printf("\n");
	for(i=0;i<10;i++)
	{
		printf("%5d",c[i]);
	}
	return 0;
}
