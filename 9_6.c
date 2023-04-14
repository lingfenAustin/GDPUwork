#include<stdio.h>

int countdigit(number,digit)
{
	int c=0,t=0;
	do
	{
		t=number%10;
		if(t==digit)c++;
		number/=10;
	}while(number!=0);
	return c;
}

int main()
{
	int count,number;
	scanf("%d",&number);
	count=countdigit(number,2);
	printf("count=%d",count);
	return 0;
}
