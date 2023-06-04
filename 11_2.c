#include<stdio.h> 

int length(const char *str)
{
	int length=0;
	while(*str++!='\0')length++;
	return length;
}

char *copy(char *p, const char *q)
{
    char *temp = p;
    while((*p++ = *q++) != '\0');
    return temp;
}

int main()
{
	char ch[100][100];
	char t[100];
	int n;
	scanf("%d",&n);
	int i;
	int j;
	for(i=0;i<n;i++)
	{
		scanf("%s",ch[i]);
	}
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(length(ch[i])>length(ch[j]))
			{
				copy(t,ch[i]);
				copy(ch[i],ch[j]);
				copy(ch[j],t);
			}			
		}	
	}
	printf("Sorted result:");
	printf("\n");
	for(i=0;i<n;i++)
	{
		printf("%s\n",ch[i]);
	}
	return 0;
}
