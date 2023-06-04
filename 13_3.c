#include<stdio.h>

int main()
{
	FILE *fp;
	int letter=0,digit=0,other=0;
	int i=0;
	char s[100];
	fp=fopen("f1.txt","r");
	while(fp!=NULL)
	{
		fgets(s,100,(FILE*)fp);
		if((s[i]>'a'&&s[i]<'z')||(s[i]>'A'&&s[i]<'Z'))letter++;
		else if(s[i]>'0'&&s[i]<'9')digit++;
		else other++;
		i++;
		if(s[i]=='\0')break;
	}
	fclose(fp);
	printf("letter=%d,digit=%d,other=%d",letter,digit,other);
	return 0;
}
