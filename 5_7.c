#include<stdio.h>

int main(){
	int n,i,a,b;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		b=0;
		for(a=1;a<i;a++){
			if(i%a==0){
				b+=a;
			} 
		}
		if(b==i)printf("%d\n",i);
	}
	return 0;
}
