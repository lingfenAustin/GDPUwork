#include <stdio.h>
void order(int n)

{        
	if(n<10)
	printf("%d",n);         
	else
	{      
		order(n/10);            
		order(n%10);            
	}
}

void main()
{       
	int n;
	scanf("%d",&n);
	printf("out:");
	order(n);            
}
