#include<stdio.h>

int main(){
	int fn_1=0,fn=0,t,f1=0,f2=1,i,n;
	scanf("%d",&n);
	fn_1=2*(f1+f2);
	fn=3*(f2+fn_1);
	for(i=5;i<=n;i++){
		t=fn;
		fn+=fn_1;
		fn*=i-1;
		fn_1=t;
	}
	if(n==1)printf("%d",f1);
	else if(n==2)printf("%d",f2);
	else if(n==3)printf("%d",fn_1);
	else printf("%d",fn);	
	return 0;
}
