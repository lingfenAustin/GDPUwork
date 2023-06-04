#include "stdio.h"
int ack(int m,int n)
{
	int num=0;
    if(m==0)num=n+1;
    else if(n==0&&m>0)num=ack(m-1,1);
    else if(m>0&&n>0)num=ack(m-1,ack(m,n-1));
    return num;
}
int main()
{   
	int m,n,s;
    scanf("%d,%d",&m,&n);
    s=ack(m,n);
    printf("s=%d\n",s);
    return 0;
} 
