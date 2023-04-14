#include<stdio.h>
//1╫г2╫г5╫г╢уг╝
int main()
{
	int x,count=0;
	int one, two, five;
	scanf("%d", &x);
	for (one = 1; one < x; one++) {
		for (two = 1; two * 2 < x; two++) {
			for (five = 1; five *5 < x; five++) {
				if (one + two * 2 + five * 5 == x ) {
					count++;
					}
				}
			}
		}
	printf("count=%d",count);
	return 0;
}
