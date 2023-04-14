#include<stdio.h>

int main(){
	int boy,girl,kid;
	for(kid=1;kid<300;kid++){
		for(girl=1;girl<33;girl++){
			for(boy=1;boy<20;boy++){
				if(kid+girl+boy==100&&kid+girl*9+boy*15==300){
					printf("%5d%5d%5d\n",boy,girl,kid);
				}
			}
		}
	}
	return 0;
}
