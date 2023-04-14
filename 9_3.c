#include<stdio.h>


int fib(int n)
{
    if(n==0)return 0;
    else if(n==1)return 1;
    else 
    	return (fib(n-1) + fib(n-2));
}


int main()
{
	int m,n,i,sum=0;
	scanf("%d,%d",&m,&n);
	for(i=m;i<=n;i++)
	{
		sum+=fib(i);
	}
	printf("sum=%d",sum);
	return 0;
}
