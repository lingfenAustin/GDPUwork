#include<stdio.h>//期中考试第一题以此类推 

int main()
{
	int i,n,j,k;
	scanf("%d",&n);
	for(i=0;i*2<n;i++)
	{
		for(j=i;j<4;j++)
		{
			printf(" ");
		}
		for(k=0;k<2*i+1;k++)
		{
			printf("*");
		}
		printf("\n");
	}
	for(i=n/2;i>0;i--)
	{
		for(j=i-1;j<4;j++)
		{
			printf(" ");
		}
		for(k=0;k<2*i-1;k++)
		{
			printf("*");
		}
		printf("\n");
	}
	
	return 0;
}
