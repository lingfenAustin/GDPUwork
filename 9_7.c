#include<stdio.h>

int is(int number)
{
	int t,sum=0,c=number;
	do
	{
		t=number%10;
		sum+=t*t*t;
		number/=10;
	}while(number!=0);
	if(c==sum)return 1;
	else return 0;
}

int main()
{
	int i,n,m,j;
	printf("Input m and n: ");
	scanf("%d %d",&m,&n);
	for(i=100;i<=n;i++)
	{
		j=is(i);
		if(j==1)
		printf("%d\n",i);
	}
	return 0;
}\
