#include<stdio.h> 

int main(){
	int i,n1=0,n2=1,result=0,n;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		result=n1+n2;
		n1=n2;
		n2=result;	
	}
	printf("result=%d",result);
	return 0;
}
