#include<stdio.h>

int lsleap(int year)
{
	int a=0;
	if((year%4==0&&year%100!=0)||year%400==0)
	a=1;
	return a;
}

int lsDate(int year,int month,int day)
{
	int flag_1=1;
	if(day>31||day<1||month>12||month<1||year<0 )
           flag_1=0;
    else if(day==31&&(month!=1&&month!=3&&month!=5&&month!=7&&month!=8&&month!=10&&month!=12))
           flag_1=0;
    else if(day==30&&(month!=1&&month!=3&&month!=4&&month!=5&&month!=6&&month!=7&&month!=8&&month!=9&&month!=10&&month!=11&&month!=12))
           flag_1=0;
    else if(month==2)
	{
    	if(day==29)
    	flag_1=lsleap(year);
    	else if(day>=29)
    	flag_1=0;
    }
    return flag_1;
}

int Days(int year,int month,int day)
{
	int dayNumber=0;
	int flag_1;
    switch (month){
    	case 12:dayNumber +=30;
    	case 11:dayNumber +=31;
    	case 10:dayNumber +=30;
    	case 9 :dayNumber +=31;
       	case 8 :dayNumber +=31;
       	case 7 :dayNumber +=30;
    	case 6 :dayNumber +=31;
    	case 5 :dayNumber +=30;
    	case 4 :dayNumber +=31;
		case 3 :
			flag_1=lsleap(year);
			dayNumber = dayNumber+flag_1;
			dayNumber +=28;
    	case 2 :dayNumber +=31;
    	case 1 :
			dayNumber +=day;
			break;
    }
    return dayNumber;
}

int main()
{
	int year,month,day,n;
	scanf("%d-%d-%d",&year,&month,&day);
	n=lsDate(year,month,day);
	if(n==0)
	{
		printf("DateError");
		return 0;
	}
	n=Days(year,month,day);
	printf("NO:%d",n);
	return 0;
}
