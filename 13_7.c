#include <stdio.h>
char *match( char *s, char c1, char c2 );//?????s??c1?c2???????,????c1??? 
int main()
{   
	char str[100], ch_start, ch_end, *p;
    scanf("%s\n", str);
    scanf("%c %c", &ch_start, &ch_end);
    p = match(str, ch_start, ch_end); 
    printf("%s", p);
    return 0;
}
char *match(char *s, char c1, char c2)
{	
	static char ch[100];
	int i=0;
	while(*s!='\0')
	{
		s++;
		if(*s==c1)
		{
			ch[i]=*s;
			i++;
			s++;
			while(*s!=c2)
			{
				ch[i]=*s;
				i++;
				s++;
			}
			ch[i]=*s;
			break;
		}
	}
	return ch;
}
