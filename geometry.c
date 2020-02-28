#include <stdio.h>
#include <stdlib.h>

int main(){
	int x,y,c;
//	char st[8];
	x=1+rand()%500;
	y=1+rand()%500;
	//printf("circle (%d  %d %d",x,y,);
        printf("\n");  
	c=1+rand()%20;
        printf("circle (x=%d ,y=%d ,r=%d)",x,y,c);
//	printf(" %d", c);
	//system("pause");
	return 0;
}
