#include<stdio.h>

int main()
{
	int n,i,j,k=0,max,min,x=0;
	scanf("%d",&n);
	int a[n][n];
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			scanf("%d",&a[i][j]);
	for(i=0;i<n;i++)
	{
		max=a[i][0];
		for(j=0;j<n;j++)
		{
			if(max<a[i][j])
			{
				max=a[i][j];
				k=j;
			}
		}
		min=a[0][k];
		for(j=0;j<n;j++)
		{
			if(min>a[j][k])
				min=a[j][k];
		}
		if(min==max)
		{
			printf("a(%d,%d)=%d",i,k,max);
			x++;
		}
	}
	if(x==0)printf("NO");
	return 0;
}
