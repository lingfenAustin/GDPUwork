#include<stdio.h>

int main(){
	int n,a=0,b=0;
	scanf("%d",&n);
	a=n%5;
	b=n%7;
	if(a==0&&b==0)
	printf("A");
	else if(a==0&&b!=0)
	printf("B");
	else if(a!=0&&b==0)
	printf("C");
	else if(a!=0&&b!=0)
	printf("D");
	return 0;
}
