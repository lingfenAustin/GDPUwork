#include<stdio.h>

double fun(int a,int n)
{
	int t=a,i;
	for(i=0;i<n;i++){
		t*=10;
		t+=a;
	}
	return t;
}
int main(){
	int a,n,j;
	scanf("%d %d",&a,&n);
	int s=0;
	for(j=0;j<n;j++){
		s+=fun(a,j);
	}
	printf("s=%d",s);
	return 0;
}
