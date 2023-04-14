#include<stdio.h>
#include<math.h>

int main(){
	double x1,y1,x2,y2,x3,y3,primeter,area,a,b,c,s;
	scanf("%lf,%lf",&x1,&y1);
	scanf("%lf,%lf",&x2,&y2);
	scanf("%lf,%lf",&x3,&y3);
	a=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
 	b=sqrt((x1-x3)*(x1-x3)+(y1-y3)*(y1-y3));
	c=sqrt((x2-x3)*(x2-x3)+(y2-y3)*(y2-y3));
	if(a+b<=c||a+c<=b||b+c<=a){
		printf("Impossible");
	}else{
		primeter=a+b+c;
		s=(a+b+c)/2;
		area=sqrt(s*(s-a)*(s-b)*(s-c));
		printf("primeter=%.2f,area=%.2f",primeter,area);	
	}
return 0;
}
