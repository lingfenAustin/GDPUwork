#include<stdio.h>

int main()
{
	double x,y=0;
	scanf("%lf",&x);
	if(x>=3)
		y=3*x+2;
	else if(x>=0&&x<3)
		y=(x*x)/(x+1);
	else if(x<0)
		y=-x;
	printf("y=%.1f",y);
	return 0;
}
