#include<stdio.h>

int main()
{							
	long long sum;
	int num=0;
	int a=0,b=0;
	int x;
	
	printf("请输入数据：");
	scanf("%lld",&sum);
	
	do{
		num++;
		x=sum%10;
		sum/=10;
		if(x%2==1)
		{
			a++;
		}else{
			b++;
		}
	}while(sum>0);
	
	printf("您输入的数的位数为：%d,各位上的数中奇数有%d个，偶数有%d个。",num,a,b);
	
	getchar(); 
	getchar();
	return 0;
	 
}
