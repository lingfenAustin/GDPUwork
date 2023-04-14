#include <stdio.h>
#include <math.h>

int IsPrimer(int num)
{
	int i,flag=0;
	for(i=2;i<=num/2;i++)
	{
 		if(num%i==0)
     	break;
	}
	if(i>num/2)
	flag=1;//ËØÊı 
	return flag;
}

int main()
{
  	int a[100],n,i,j,temp;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	i=0,j=n-1;
	while(i<j)
	{
		if(IsPrimer(a[i])==0)
		{
			i++;
		}
		else if(IsPrimer(a[j])==1)
		{
			j--;
		}
		if(IsPrimer(a[i])==1&&IsPrimer(a[j])==0)
		{
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		}
    }
	for(i=0;i<n;i++)
	printf("%5d",a[i]);
	return 0;
}
