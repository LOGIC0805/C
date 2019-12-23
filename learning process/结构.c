#include<stdio.h>
int main()
{
	struct{int x;int y;}x;
	struct{int x;int y;}y;
	x.x=8;
	x.y=5;
	y.x=x.x;
	y.y=x.y;
	printf("x=%i %i\n",x.x,x.y);
	printf("y=%i %i\n",y.x,y.y);
	return 0;
 } 
