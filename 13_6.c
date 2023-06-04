#include<stdio.h>
#include<stdlib.h>
int main()
{  
	FILE *fp;
   	int i=0;
   	char str[10][81];  //每行最多80个字符
   	if((fp=fopen("data3.txt","r"))==NULL)//打开文件data3.txt
	{
		printf("%s open error!\n","data3.txt");
		exit(1);
   	}
	while(feof(fp)==0)
	{
		fgets(str[i],81,fp);				//读取文件中的一行内容
		printf("%s",str[i]);
		i++;
	}
	fclose(fp);
	return 0;
}
