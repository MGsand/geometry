#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
	int x=0,y=0,r=0;//i,m;
	char st[6];
	char st1[6]="circle";
	scanf(" %s",st);
	if (strcmp(st,st1)){
	scanf("%d %d %d",&x,&y,&r);	
        printf("\n");  
	//c=1+rand()%20;
        printf("circle (x=%d ,y=%d ,r=%d)",x,y,r);

}
	//system("pause");
	return 0;
}
