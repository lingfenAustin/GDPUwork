#include <stdio.h>
#include <string.h>
int getindex(char *w[],char *s);
int main()
{   
	int n;
    char *week[7]={"Sunday","Monday","Tuesday","Wednesday","Thurday","Friday","Saturday"},str[20];
    gets(str);
    n = getindex(week,str);
    if ( n==-1 ) printf("wrong input!");
    else printf("%d", n);
    return 0;
}
int getindex(char *w[],char *s )
{    
	int i,j=0;
	int t=-1;
	for(i=0;i<7;i++)
	{
		if(*w[i]==*s)
		{
			while(*w[i]!='\0'&&*s!='\0')
			{
				w[i]++;
				s++;
				j++;
			}
			if(*w[i]=='\0'&&*s=='\0')
			{
				t=1;
				break;
			}
			else s-=j;
		}
	}
	return t;
}
