#include<stdio.h>

int main(){
	int i,n,Totals=1;
	scanf("%d",&n);
	for(i=1;i<n;i++){
		Totals=(Totals+1)*2;
	}
	printf("Totals=%d",Totals);
	return 0;
}
