#include<stdio.h>

int main()
{
	long long a;
	int n;
	
	printf("����������֪��λ����������");
	scanf("%lld",&a);
	
	do{
		a=a/10;
		n=n+1;
	}while(a>0);
	
	printf("���������λ���ǣ�");
	printf("%d",n);
	
	getchar();
	getchar();
	
	return 0;
}
