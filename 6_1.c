#include<stdio.h>

int main(){
	double R,R1,R2;
	scanf("%lf %lf",&R1,&R2);
	R=(R1*R2)/(R1+R2);
	printf("%.2f",R);
	return 0;
}
