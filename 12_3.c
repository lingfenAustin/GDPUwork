#include<stdio.h>

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
	int k;
	for(i=0;i<n;i++)
		scanf("%s",ch[i]);
	for(k=1;k<n;k++)
	{
		for(i=1;i<n;i++)
		{
			if(ch[i-1][0]>ch[i][0])
			{
				copy(t,ch[i-1]);
				copy(ch[i-1],ch[i]);
				copy(ch[i],t);
			}
			else if(ch[i-1][0]==ch[i][0])
			{
				j=1;
				while(ch[i-1][j]==ch[i][j]&&ch[i-1][j]!='\0'&&ch[i][j]!='\0')j++;
				if(ch[i-1][j]>ch[i][j])
				{
					copy(t,ch[i-1]);
					copy(ch[i-1],ch[i]);
					copy(ch[i],t);
				}
			}
		}
	}
	printf("\n");
	for(i=0;i<=n;i++)
	{
		printf("%s\n",ch[i]);
	}
	return 0;
}
