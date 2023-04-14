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
	int n,j,a,b,c,d,e;
	scanf("%d",&n);
	for(j=n;j<=n+10;j=j+2)
	{
		c=0;d=0;e=0;
		for(a=2;a<j;a++)
		{
			c=prime(a);
			if(c==1)
			{
				for(b=2;b<j;b++)
				{
					d=prime(b);
					if(d==1)
					{
						if(j==a+b)
						{
							printf("%d=%d+%d\n",j,a,b);
							e++;
						}
					}
					if(e==1)break;
				}
			}
			if(e==1)break;
		}
	}
	return 0;
}
