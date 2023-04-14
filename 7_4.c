#include<stdio.h>

int main()
{
 	char a[80];
 	char ch;
	int i,cnt=0,j,count=0;
 	do
	{ 
 	 	ch=getchar();
  		a[cnt++]=ch;
	}while(ch!='\n');
 	for(i=97;i<=122;i++)
	{
  		for(j=0;j<cnt;j++)
		{
   			if(a[j]>=65&&a[j]<=90) 
			{
   				a[j]+=32;
   			}
  			if(a[j]==i)count++;
  		}
 		if(count>0)
 		printf("%c is %d\n",i,count);
 		count=0;
 	}
 	return 0;
}
