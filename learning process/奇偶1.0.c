#include<stdio.h>

int main()
{							
	long long sum;
	int num=0;
	int a=0,b=0;
	int x;
	
	printf("���������ݣ�");
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
	
	printf("�����������λ��Ϊ��%d,��λ�ϵ�����������%d����ż����%d����",num,a,b);
	
	getchar(); 
	getchar();
	return 0;
	 
}
