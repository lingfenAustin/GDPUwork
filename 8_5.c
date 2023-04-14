#include<stdio.h>

int main()
{
	int K,n,m,p,h=0;
	scanf("%d %d",&K,&n);
	int a[n][2];
	for(m=0;m<n;m++)
		for(p=0;p<2;p++)
			scanf("%d",&a[m][p]);
	for(m=0;m<n;m++)
	{
		h+=a[m][0]; 
		if(h>=K)
			break;
		h-=a[m][1];
		if(h<0)h=0;
	}
	if(h>=K)printf("YES");
	else printf("NO");
	return 0;
}
