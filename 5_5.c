#include<stdio.h>
#include<math.h>

double fact(int n)
{
    int x;
    double sum1 = 1;
    for (x = 1;x <=n; x++){
        sum1 = sum1*x;
    }
    return sum1;
}

int main(){
	double x,s=0,zi=0,mu=0,sum;
	int i;
	scanf("%lf",&x);
	for(i=1;i>0;i++){
		zi=pow(x,i); 
		mu=fact(i);
		sum=zi/mu;
		s+=sum;		
		if(fabs(sum)<0.000001)break;
	}
	printf("s=%.2f",s);	
	return 0;
}
