#include "stdio.h"
#define N 10
void cycle(int s[],int n,int count);//n表示数组长度，count表示移动的位置数
int main()
{   int i,n,s[N]={1,2,3,4,5,6,7,8,9,10};
    scanf("%d",&n);
    printf("Before:\n");
    for(i=0;i<N;i++)
        printf("%4d",s[i]);
	cycle(s,N,n);
	 printf("\nAfter:\n");
      for(i=0;i<N;i++)
        printf("%4d",s[i]);
    printf("\n");
    return 0;
}
void cycle(int s[],int n,int count)
{    
    
	int temp=0,i;
	if(count!=0)
	{
		temp=s[0];
		for(i=1;i<n;i++)
			s[i-1]=s[i]; 
		s[i-1]=temp;
		cycle(s,n,count-1);
	}
	
}
