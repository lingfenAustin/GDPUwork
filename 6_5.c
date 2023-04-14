#include<stdio.h>

int main(void)
{
	char ch;
	ch=getchar();
	while(ch!='\n')
	{
		if(ch>='A'&&ch<='W')
			ch=ch-'A'+'a'+3;
		else if(ch>='X'&&ch<='Z')
			ch=ch-'A'+'a'-23;
		else if(ch>='a'&&ch<='w')
			ch=ch-'a'+'A'+3;
		else if(ch>='x'&&ch<='z')
			ch=ch-'a'+'A'-23;
		else if(ch>='0'&&ch<='4')
			ch=ch+5;
		else if(ch>='5'&&ch<='9')
			ch=ch-'5'+'0';
		putchar(ch);
		ch=getchar();
	}
	return 0;
}
