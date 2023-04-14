#include<stdio.h>

int main(){
	int a,b,j,k,n;
	scanf("%d,%d",&a,&b);
	for(j=a;j>0;j--){
		n=0;
		for(k=b;k>0;k--){
			if(a%j==0&&b%k==0&&j==k){
				printf("gys=%d,",j);
				n=1;
			}
			if(n==1)goto xiao;
		}
	}
	xiao:
	for(j=a;j>=a;j++){
		for(k=b;k>=b;k++){
			if(j<k)break;
			if(j==k&&j%a==0&&k%b==0){
				printf("gbs=%d",j);
				goto chen;
			}
		}
	}
	chen:
	return 0;
}
