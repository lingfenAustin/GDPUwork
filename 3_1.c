#include<stdio.h>

int main(){
	double x, y=0;
	scanf("%lf",&x);
	if(x<1)
		y=x;
	else if(x>=1&&x<10)
		y=x-1;
	else if(x>=10)
		y=3*x-11;
	printf("y=%.2f",y);
	return 0;
} 
