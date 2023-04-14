#include<stdio.h>

int main(){
	int type;
	scanf("%d",&type);
	switch(type)
	{
	case 2:
	case 3:
	case 4:
		printf("Spring\n");
		break;
	case 5:
	case 6:
	case 7:
		printf("Summer\n");
		break;
	case 8:
	case 9:
	case 10:
		printf("Autumn\n");
		break;
	case 11:
	case 12:
	case 1:
		printf("Winter\n");
		break;
	default:
	printf("Error");
	break;		
	}
	return 0;
}
