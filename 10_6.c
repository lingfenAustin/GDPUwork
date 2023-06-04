#include<stdio.h>

void dec2bin(int n)
{
	int x;
	if(n<2)printf("%d",n);
	else
	{
		x=n%2;
		n=n/2;
		dec2bin(n);
		printf("%d",x);
	}
}

int main()
{
	int n;
	scanf("%d",&n);
	dec2bin(n);
	printf("\n");
	return 0;
}
