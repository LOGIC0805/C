#include<stdio.h>

int main()
{							
	int number,sum;
	int a=0,b=0;
	
	printf("���������ݣ���-1��β����");
	scanf("%d",&number);
	
    while(number!=-1){
		sum=number%2;
		
		if(sum==1){
			a++;
		}else{
			b++;
		}
		
		scanf("%d",&number);
	} 
	
	printf("����������������%d����ż����%d����",a,b);
	
   	getchar();
   	getchar();
	return 0;
	 
}
