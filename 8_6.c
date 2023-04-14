#include<stdio.h>

int main()
{
    int n,m,i,j=0,k,d,l=0,temp;
    char time;
    scanf("%d %d",&n,&m);
    int a[n][2];
    char b[7][2];
    char c[7]="1level1";
    for(i=0;i<n;i++)
    {
    	a[i][0]=i+1;
    	a[i][1]=i+1;
	}
    for(i=0;i<n;i++)
    {
    	if(a[i][1]%m==0)
    	{
    		b[j][0]=a[i][0];
    		b[j][1]=c[j];
    		a[i][0]=-1;
    		j++;
    		if(j==7)break;
		}
		if(i+1==n)
		{
			l+=n;
			for(k=0;k<n;k++)
			{
				a[k][1]=l+k+1;
				if(a[k][0]==-1)
				{
					for(d=k;d<n;d++)
					{
						a[d][0]=a[d+1][0];
					}
				}
			}
			n-=j;
			i=-1;
		}
	}
	for(i=0;i<6;i++)
	{
		for(k=0;k<6-i;k++)
		{
			if(b[k][0]>b[k+1][0])
			{
				temp=b[k][0];
				time=b[k][1];
				b[k][0]=b[k+1][0];
				b[k][1]=b[k+1][1];
				b[k+1][0]=temp;
				b[k+1][1]=time;
			}
		}
	}
	for(i=0;i<7;i++)
	{
		printf("%d %c\n",b[i][0],b[i][1]);
	}
	return 0;
}
