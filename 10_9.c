#include "stdio.h"
double f(double x,int n)
{
	int i;
	double num=-1;
	for(i=0;i<n;i++)
		num*=x*(-1);
	if(n==1)return num;
	else return (num+f(x,n-1));
}
int main()
{   double x,a;
    int n;
    scanf("%lf,%d",&x,&n);
    a=f(x,n);
    printf("a=%f\n",a);
    return 0;
} 
