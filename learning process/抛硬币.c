#include<stdio.h>
#include<stdlib.h>
#include<time.h> 
int main()
{
	srand((unsigned)time(NULL));
	printf("\t\t��\t��\t\n"); 
	
	int a=0,b=0;
	int i,t;
	for(i=1;i<201;i++){
		printf("��%d��ʵ��\t",i);
		t=rand()%2; 
		switch(t)
		{
			case(0):a++;
					break;
			case(1):b++;
					break;
		}
		printf("%d\t%d\t\n",a,b);
	}
	
	return 0;
 } 
