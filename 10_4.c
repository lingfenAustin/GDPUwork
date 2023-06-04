#include<stdio.h>

double power(double x,int n)
{
	int i;
	double num=1;
	for(i=0;i<n;i++)
		num*=x;
	return num;
}

int main()
{   
	double x,a;
    int n;
    scanf("%lf,%d",&x,&n);
    a=power(x,n);
    printf("a=%f\n",a);
    return 0;
} 

