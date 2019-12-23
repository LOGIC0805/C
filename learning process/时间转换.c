#include<stdio.h>
int main()
{
	int BJT,UTC;

	printf("请输入北京时间：");
	scanf("%d",&BJT);
	
	if(BJT<800)
	{	UTC=BJT+2400-800;
	}
	else
	{	UTC=BJT-800;
	}
	
	printf("标准时间为：%d",UTC);
	
	getchar();
	getchar();
	
	return 0;
}
