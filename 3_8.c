#include<stdio.h>

int judgeyear(int year){
    int flag=0;
    if ((year%4==0 && year%100 !=0) || year%400==0)
        flag=1;
    return flag;
}
int main(){
	int year,month,day,flag_1;
    int dayNumber=0;
    scanf("%d%d%d",&year,&month,&day);
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
			flag_1=judgeyear(year);
			dayNumber = dayNumber+flag_1;
			dayNumber +=28;
    	case 2 :dayNumber +=31;
    	case 1 :
			dayNumber +=day;
			break;
    	default:printf("Input error!");
    }
    printf("%d",dayNumber);
    return 0;
}
	
