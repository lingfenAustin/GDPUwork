#include<stdio.h>

int main()
{
	int sum=0,i,n=0;
	for(i=1;i<=200;i++){
		if((i%7==0||i%17==0)&&i%2==0){
			printf("%6d",i);
			n++;
			sum+=i;
			if(n%5==0)
		printf("\n");
		}		
	}
	printf("\n");
	printf("sum=%d",sum);	
	return 0;
}
