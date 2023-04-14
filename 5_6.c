#include<stdio.h>

int main(){
	double t,s,a,b;
	int n,i;
	scanf("%d",&n);
	a=2;
	b=1;
	s=a/b;
	for(i=1;i<n;i++){
		t=a;
		a=a+b;
		b=t; 		
		s+=a/b;
	} 
	printf("s=%.2f",s);
	
	
	
	return 0;
}
