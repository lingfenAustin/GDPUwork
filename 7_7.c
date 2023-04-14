#include <stdio.h>

int main()
{
  	int a[100],n,k,i,j;
 	int tmp;
   	scanf("%d",&k);
  	scanf("%d",&n);
  	for(i=0;i<n;i++)
    	scanf("%d",&a[i]);
	
	for(i=0;i<k%n;i++)
	{
		tmp=a[n-1];
		for(j=n;j>=0;j--)
			a[j]=a[j-1];	
		a[0]=tmp;
	} 
	
    for(i=0;i<n;i++)
   		printf("%3d",a[i]);
    return 0;
}
