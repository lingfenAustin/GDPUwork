#include<stdio.h>

int main(){
	int i,a,n,m,sum;
	scanf("%d,%d",&a,&n);
	m=a;
	sum=a;
	printf("%d",m);
	for(i=1;i<n;i++){
		a*=10;
		a+=m;
		printf("+%d",a);
		sum+=a;
	}
	printf("=%d",sum);			
	return 0;
}
