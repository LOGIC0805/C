#include<stdio.h>
int main()
{
	int x;
	printf("请输入一个三位数：");
	scanf("%d",&x);
	int a=x/100,b=x%100/10,c=x%10;
	printf("%d",a+b*10+c*100);
	getchar();
	getchar();
	return 0;
}
