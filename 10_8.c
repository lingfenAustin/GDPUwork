#include "stdio.h"
void splitfloat(double x,int *intpart,double *fracpart);
int main()
{   
	double a,fracpart;
    int intpart;
    scanf("%lf",&a);
    splitfloat(a,&intpart,&fracpart);
    printf("INT:%d\nFRAC:%lf\n",intpart,fracpart);
    return 0;
}
void splitfloat(double x,int *intpart,double *fracpart)
{   
	*intpart=x/1;
	*fracpart=x-(*intpart);
}
