#include<stdio.h>

int main(){
    int year,month,day,week,i;
    int month_day=0;
    scanf("%d%d%d",&year,&month,&day);
    scanf("%d",&week);//输入当年元旦是星期几
    if(month<1||month>12){
     	printf("date error");
       	return 0;
	}
    else{
     	for(i=1;i<month;i++){
        	switch(month){
	        	case 12:month_day+=30;
	        	case 11:month_day+=31;
	        	case 10:month_day+=30;
	        	case 9:month_day+=31;
	        	case 8:month_day+=30;
	        	case 7:month_day+=31;
	        	case 6:month_day+=31;
	        	case 5:month_day+=30;
	        	case 4:month_day+=31;
	        	case 3:
					if((year%4==0&&year%100!=0)||year%400==0)
	        		month_day+=29;
	        		else month_day+=28;
	        	case 2:month_day+=31;					
	        	case 1:break;     	
	        }
            day=day+month_day;
      	}     
    }
    printf("%d",(day+week-1)%7);
    return 0; 
}


