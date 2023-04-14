#include<stdio.h>
#include<math.h> 

int main(){
	double x0,y0,A,B,C,d,sum1,sum2;
	scanf("%lf %lf",&x0,&y0);
	scanf("%lf %lf %lf",&A,&B,&C);
	sum1=A*x0+B*y0+C;
	if(sum1<0)
	sum1=-sum1;
	sum2=sqrt(A*A+B*B);
	d=sum1/sum2;
	printf("%f",d);
	return 0;
} 
