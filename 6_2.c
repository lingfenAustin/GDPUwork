#include<stdio.h>

int main(){
	int n,i;
	double a,b,min=0,max=0,num=0;
	scanf("%d\n",&n);
	scanf("%lf",&a);
	scanf("%lf",&b);
	if(a>b){
		max=a;
		min=b;
	}
	else if(a<=b){
		max=b;
		min=a;
	}
	for(i=2;i<n;i++){
		scanf("%lf",&a);
		if(a>max){
			max=a;
		}
		else if(a<min){
			min=a;
		}
	}
	num=max-min;
	printf("%.2f",num);
	return 0;
} 
