#include<stdio.h>
int main()
{
	int height;
	printf("������������ߣ�cm��:");
	scanf("%d",&height);
	
	int sex;
	printf("�����������Ա���Ϊ1��ŮΪ2����");
	scanf("%d",&sex);
	
	if(sex==1){int weight=(height-80)*0.7;
	printf("���ı�׼����Ϊ%dkg\n",weight);
	}   else{int weight=(height-70)*0.6;
	printf("���ı�׼����Ϊ%dkg\n",weight);
	}
	
	getchar();
	getchar();
	return 0;
	
}
