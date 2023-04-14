#include<stdio.h>

int main()
{
	int n,i,t=0;
	double x,max;
	scanf("%d",&n);
	double a[n];
	for(i=0;i<n;i++)
	{
		scanf("%lf",&x);
		a[i]=x;
	}
	max=a[0];
	for(i=0;i<n;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
			t=i;
		}
	}
	a[t]=a[0];
	a[0]=max;
	for(i=0;i<n;i++)
	{
		printf("%lf  ",a[i]);
	}
	return 0;
}
