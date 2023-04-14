#include<stdio.h>

int sum(int start,int count)
{
	int i,t=0;
	for(i=0;i<count;i++){
		t+=start;
		start++;
	}
	return t;
}

int main(void)
{
	int n,j,k,s=0;
	scanf("%d",&n);
	for(j=1;j<=n;j++){
		k=j+1;
		s+=sum(j,k);
	}
	printf("sum=%d",s);
	return 0;
}
