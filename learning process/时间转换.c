#include<stdio.h>
int main()
{
	int BJT,UTC;

	printf("�����뱱��ʱ�䣺");
	scanf("%d",&BJT);
	
	if(BJT<800)
	{	UTC=BJT+2400-800;
	}
	else
	{	UTC=BJT-800;
	}
	
	printf("��׼ʱ��Ϊ��%d",UTC);
	
	getchar();
	getchar();
	
	return 0;
}
