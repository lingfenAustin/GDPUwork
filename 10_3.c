#include<stdio.h>

int delete(char *p,int *q,char c)
{
	int count=0;
	for(; *p!='\0';p++)
		if(*p!=c)
		{
			*q=*p;
			q++;
			count++;
		}
	return count;
}

int main()
{
	char str[100],*p=str,b;
	int a[100],*q=a,count=0,i=0;
	while(str[i]=getchar(),str[i]!='\n')i++;
	scanf("%c",&b);
	printf("After delete:\n");
	count=delete(p,q,b);
	for(q=a;q<a+count;q++)
		printf("%c",*q);
	return 0;
}
