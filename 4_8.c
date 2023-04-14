#include<stdio.h>

int main()
{
	int j,k,n,a,b,c,d;
	for(n=6;n<31;n++){		
		for(j=2;j<n;j++){
			c=1;			
			for(a=2;a<j;a++){
				if(j%a==0)
				c=0;
			}			
			if(c==1&&a!=2){	
				for(k=2;k<n;k++){
					d=1;
					for(b=2;b<k;b++){
						if(k%b==0)d=0; 
					}
					if(d==1&&b!=2){
						if(n==j+k&&j<=k){
							printf("%d=%d+%d\n",n,j,k);
						}
					} 
				}
			}
		}
	} 	
	return 0;
}
