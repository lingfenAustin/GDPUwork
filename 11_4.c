#include <stdio.h>
#define N 10
void insert(int *p,int x,int n)//x��ʾ���������ֵ��n��ʾ���������е���ֵ�ĸ�����
{    
    int i,j;   //�������ٶ�����������������
    for(i=0;i<n;i++)
    {
    	if(x>*p&&*p!=0)p++;
    	else if(x<=*p)
    	{
    		j=*p;
    		*p=x;
    		x=j;
    		while(i<n)
    		{
    			p++;
    			j=*p;
    			*p=x;
    			x=j;
    			i++;
			}
		}
		else if(x>*p&&*p==0)*p=x;
	}
}
int main()
{
    int i,m,a[N]={10,12,14,17,20,25,28,31,40};
    scanf("%d",&m);
	insert(a,m,N);
    for(i=0;i<N;i++)
        printf("%4d",a[i]);
    printf("\n");
    return 0;
} 

