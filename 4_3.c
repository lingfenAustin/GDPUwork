#include<stdio.h>

int main(){
	int i,j,k,sum=0;
	
	for(i=0;i<7;i++){
		sum++;
		for(j=i;j<30;j++)
			printf(" ");			
		for(k=0;k<2*i+1;k++)
			printf("%d",sum);			
		printf("\n");		
	}
	for(i=6;i>0;i--){
		sum--;
		for(j=i-1;j<30;j++)
			printf(" ");			
		for(k=0;k<2*i-1;k++)
			printf("%d",sum);			
		printf("\n");		
	}
	return 0;
}
