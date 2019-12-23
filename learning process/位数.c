#include<stdio.h>

int main()
{
	long long a;
	int n;
	
	printf("请输入你想知道位数的整数：");
	scanf("%lld",&a);
	
	do{
		a=a/10;
		n=n+1;
	}while(a>0);
	
	printf("这个整数的位数是：");
	printf("%d",n);
	
	getchar();
	getchar();
	
	return 0;
}
