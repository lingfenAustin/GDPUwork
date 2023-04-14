#include<stdio.h>

int main(void)
{
	int a,b,c;
	scanf("%d %d",&a,&b);
	if(a>=b)return 0;
	printf("%d/%d=",a,b);
	do
	{
		c=b/a+1;
		a=a*c-b;
		b=b*c;
		if(a<1||a%b!=0)
		{	
			printf("1/%d+",c);
			if(a==1)
			{
				printf("1/%d",b);
				return 0;
			}
			if(a>1&&b%a==0)
			{
				printf("1/%d",b/a);
				return 0;
			}
		}
	}while(a<1||(a%b!=0&&a!=1));
	return 0;	
}
