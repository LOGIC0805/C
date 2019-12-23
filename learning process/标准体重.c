#include<stdio.h>
int main()
{
	int height;
	printf("请输入您的身高（cm）:");
	scanf("%d",&height);
	
	int sex;
	printf("请输入您的性别（男为1，女为2）：");
	scanf("%d",&sex);
	
	if(sex==1){int weight=(height-80)*0.7;
	printf("您的标准体重为%dkg\n",weight);
	}   else{int weight=(height-70)*0.6;
	printf("您的标准体重为%dkg\n",weight);
	}
	
	getchar();
	getchar();
	return 0;
	
}
