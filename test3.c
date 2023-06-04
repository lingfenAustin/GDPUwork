#include<stdio.h>

int main()
{
	int UTC,BJT,bj_1,bj_2,ut_1=0,ut_2;
	scanf("%d",&BJT);
	bj_2=BJT%100;
	bj_1=BJT/100;
	ut_2=bj_2;
	if(bj_1>=8)
		ut_1=bj_1-8;
	else if(bj_1<8&&bj_1>=0)
		ut_1=bj_1-8+24;
	UTC=ut_1*100+ut_2;
	printf("%d",UTC);
	return 0;
}
