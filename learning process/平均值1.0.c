#include<stdio.h>
int main() 
{
	double a,b;
    printf("请输入你希望求平均值的两个数:");
    scanf("%lf %lf",&a,&b);
    double c=(a+b)/2;
    printf("平均值为：%lf",c);
    getchar();
	getchar();
	return 0;
}

