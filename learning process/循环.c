#include<stdio.h>
int main()
{
	int i,j;
	int num=1;
	
	for(i=0;i<5;i++){
		for(j=0;j<num;j++){
			printf("$");
		}
		num++;
		printf("\n");
	}
	return 0;
 } 
