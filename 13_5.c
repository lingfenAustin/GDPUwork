#include<stdio.h>
int main()
{
	FILE*p1=fopen("hello.c","r");
	FILE*p2=fopen("comment.txt","w");
	char g;
	if(p1==NULL)
	{
		  printf("hello.c文件打开失败\n"); 
	 } 
	 if(p2==NULL)
	 {
		 printf("hello.c文件打开失败\n");
	 } 
	while(!feof(p1))
	{
		g=fgetc(p1);
		if(g=='/')
		{
			g=fgetc(p1);
			if(g=='/')
			{
				while((g=fgetc(p1))!='\n')
				{
					fputc(g,p2);
				}
				fputc(g,p2);
				if((g=fgetc(p1))!='/')
				{
					printf("\n");
					}
					fseek(p1,-1,SEEK_CUR);
				continue;
				
			}
			else
			{
				if(g=='*')
				{
				 while((g=fgetc(p1))!='*')
				 {
				 	fputc(g,p2);
				 }
				 g=fgetc(p1);
				 if(g=='/')
				 {
				 	fputc('\n',p2);
				 	continue;
				 }
				 else
				 {
				 	fseek(p1,-1,SEEK_CUR); 
				 	fputc('*',p2);
				 	while((g=fgetc(p1))!='*')
				 	{
				 		fputc(g,p2);
					 }
					 fseek(p1,1L,SEEK_CUR);
					 g=fgetc(p1);
					 fputc(g,p2);
					 
					 continue;
 
				 	
				 }
				}
				else
				{
					fseek(p1,-2,SEEK_CUR);
					g=fgetc(p1);
					printf("%c",g);
					continue;
				}
			}
		
		} 
		else
		{
				printf("%c",g);
				if(g=='}')
				return 0;	
		}
	}
	fclose(p1);
	fclose(p2);
	return 0;
}
