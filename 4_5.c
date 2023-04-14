#include<stdio.h> 

long long pow_1(a,b) 
{
	int i;
	long long sum=1;
	for(i=1;i<=b;i++) 
	sum=sum*a; 
	return sum; 
} 
int main() 
{ 
	int a,b,t,i,n; 
	long long sum=0; 
	scanf("%d",&n); 
	for(i=pow_1(10,n-1);i<=pow_1(10,n)-1;i++) 
	{ 
		a=i;
		sum=0; 
		for(b=1;b<=n;b++) 
		{ 	
			t=a%10; 
			a/=10; 
			sum=sum+pow_1(t,n); 
		} 
		if((int) sum==i) 
		printf("%d\n",i); 
	} 
	return 0;
}

