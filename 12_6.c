#include "stdio.h"
#include "string.h"
#define N 10
struct Book
{   char name[100];
    float price;
};
int instring(char *s1,char *s2); //s1������s2���ִ����򷵻�1�����򷵻�0
int main()
{   struct Book books[N]={{"Fling in sky",23.0},
							{"I love my mother",15.5},
							{"My love",25.6},
							{"Color is red",34.9},
							{"Black and red",20.5},
							{"Let me love you",16.0}, 
							{"Sun is red",45.0},
							{"Flower sunshine",23.8},
							{"Say love not easy",45.9},
							{"Friday black",34.0}};
    int i;
    char name[20];
    gets(name);
    for(i=0;i<N;i++)
        if(instring(name,books[i].name))
           printf("%30s,%6.2f\n",books[i].name,books[i].price);
    return 0;
}

int instring(char *s1,char *s2)
{
	int j=0;
    while(*s1!=*s2)
    {
    	s2++;
    	if(*s2=='\0')return 0;
	    while(*s1==*s2)
	    {
	    	s1++;
	    	s2++;
	    	j++;
	    	while(*s1==*s2)
	    	{
	    		j++;
	    		s1++;
	    		s2++;
	    		if(*s1=='\0')return 1;	    		
	    	}
	    	if(*s1!=*s2)
	    	{
	    		s1-=j;
	    	}
	    }
	}
	return 0;//��û���д�ɵ�һ���� 
} 
