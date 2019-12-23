#include<stdio.h>

int main()
{							
	int number,sum;
	int a=0,b=0;
	
	printf("请输入数据（以-1结尾）：");
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
	
	printf("您的数据中奇数有%d个，偶数有%d个。",a,b);
	
   	getchar();
   	getchar();
	return 0;
	 
}
