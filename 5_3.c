#include<stdio.h>

int judgeyear(int year)
{
	int flag=0;
	if((year%4==0&&year%100!=0)||year%400==0)
		flag=1;
	return flag;
}
int main(){
	int judge=0,year,years=0,a,b;
	scanf("[%d,%d]",&a,&b);
	for(year=a;year<=b;year++){
		judge=judgeyear(year);
		if(judge==1)
			years++;
	}
	printf("years=%d",years);
	return 0;
} 
