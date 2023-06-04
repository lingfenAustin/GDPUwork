#include<stdio.h>

char *strcat(char *s,char *t)
{
	char *p=s;
	while(*s!='\0')
	{
		s++;
	}	
	while((*s++=*t++)!='\0');
	return p;
}
int main()
{
	char s[20],t[20];
	char *n;
	gets(s);
	gets(t);
	n=strcat(s,t);
	printf("%s",n);
	return 0;
}
