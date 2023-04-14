#include<stdio.h>

int main(){
	int m,n,i,a=0,b=0,sum;
	scanf("%d,%d",&n,&m);
	for(sum=n-1;sum<n;sum--){
		a=0;
		for(i=2;i<sum;i++){
			if(sum%i==0){
			a=1;
			break;
			}				
		}
		if(a==0){
			printf("%d\n",sum);
			b++;
			if(b==m) break;
		}
	}		
	return 0;
}
