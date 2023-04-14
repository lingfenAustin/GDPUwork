#include<stdio.h>
int main(){
	double x,y=0;
	scanf("%lf",&x);
	if(x<=100){
		y = 0.51*x;
	}else{
		y = 0.65*x;
		}
	printf("%.2f",y);
	return 0;		
}
