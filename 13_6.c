#include<stdio.h>
#include<stdlib.h>
int main()
{  
	FILE *fp;
   	int i=0;
   	char str[10][81];  //ÿ�����80���ַ�
   	if((fp=fopen("data3.txt","r"))==NULL)//���ļ�data3.txt
	{
		printf("%s open error!\n","data3.txt");
		exit(1);
   	}
	while(feof(fp)==0)
	{
		fgets(str[i],81,fp);				//��ȡ�ļ��е�һ������
		printf("%s",str[i]);
		i++;
	}
	fclose(fp);
	return 0;
}
