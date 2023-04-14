#include<stdio.h>
int main()
{ 
	int i=0; 
	char ch;
	xiao:
	while(ch=getchar(),ch!='#') 
	{
		if(ch>=48&&ch<=57) 
		i++; 
	}
	if(ch=getchar(),ch!='#')
	{
		if(ch>=48&&ch<=57)
		i++;
		goto xiao;
	}
	printf("sum=%d\n",i); 
	return 0;
}
