#include<stdio.h>

int main(){
	int n,An=2,i;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		An+=2*(i-1);
	}
	printf("%d",An);
	return 0;
}
