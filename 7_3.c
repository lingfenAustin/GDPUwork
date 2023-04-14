#include<stdio.h>

int main()
{	int c=0,i;
	int a[20]={81,55,102,84,204,105,56,85,58,202,101,83,104,103,82,201,59,203,57,205};
	int b[20];
	for(i=0;i<20;i++)
	{
		if(a[i]>=0&&a[i]<=59)b[i]=-1;
		else if(a[i]>=60&&a[i]<=100)b[i]=a[i];
		else if(a[i]>100&&a[i]<=200)b[i]=-2;
		else if(a[i]>200&&a[i]<=300)b[i]=-3;
	}
	for(i=0;i<20;i++)
	{
		printf("%5d",b[i]);
		c++;
		if(c%5==0)printf("\n");
	}
	return 0;
}
