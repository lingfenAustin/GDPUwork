#include "stdio.h"
#define N 10
#define M  5
struct stud
{   char name[10];
    double course[M];
    double aver;
}s[N];
int main()
{   
	int n,m,i,j;
    double sum,course[M]={0};
    scanf("%d,%d",&n,&m);
    for(i=0;i<n;i++)
    {
    	scanf("%s",s[i].name);
    	for(j=0;j<m;j++)
    	{
    		scanf("%lf",&s[i].course[j]);
    		sum+=s[i].course[j];
    		course[j]+=s[i].course[j];
    	}
    }
    printf("name      ");
    for(j=0;j<m;j++)
    {    
		course[j]=course[j]/n;
		printf("CNO:%d   ",j+1);
    }
    printf("\n");
    for(i=0;i<n;i++)
    {    printf("%10s",s[i].name);
         for(j=0;j<m;j++)
            if(s[i].course[j]<course[j])
                printf("%5.1f   ",s[i].course[j]);
            else
                printf("%8c",32);
         printf("\n");
     }
     return 0;
}
