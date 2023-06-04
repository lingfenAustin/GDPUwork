#include "stdio.h"
#include "string.h"
int findsubstring(char *s,char *sub)
{
    int i=0,indx=0;
    while(strlen(s)!=0)
    {
    	if(*s!=*sub)
    	{
    		i++;
    		indx++;
    		s++;
		}
    	while(*s==*sub)
    	{
    		i++;
    		s++;
    		sub++;
    		if(strlen(sub)==0)return indx;
		}
	}
	indx=-1;
	return indx;
    
}
int main()
{    
	char line[80],substr[10];
	int index;
    gets(line);
    gets(substr);
    index=findsubstring(line,substr);
    if(index>=0)
        printf("index=%d\n",index);
    else
        printf("NOEXIST\n");
    return 0;
}
