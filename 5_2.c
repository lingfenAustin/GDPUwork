#include<stdio.h>

int main(){
	double a,b,c;
	int d=0,i,j;
	scanf("%lf",&c);
	for(i=c;i>=c;i++){
		j=0;
		for(a=1;a<i;a++){
				for(b=1;b<i;b++){
				if(i*i==a*a+b*b&&a<b){
					d++; 	
					printf("NO%d:%d\n",d,i);
					if(d==4)return 0;
					j=1;
				}
			}
			if(j==1)break; 
		}
	}
	return 0;
}
