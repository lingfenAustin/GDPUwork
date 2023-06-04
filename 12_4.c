#include<stdio.h>

int main()
{
	int h,m,s,n;
	scanf("%d:%d:%d",&h,&m,&s);
	scanf("%d",&n);
	int t=n+s;
	while(t>=60)
	{
		t-=60;
		m++;
		if(m==60)
		{
			m=0;
			h++;
			if(h==24)h=0;
		}
	}
	s=t;
	printf("After %d seconds is %d:%d:%d",n,h,m,s);
	return 0;
}
