#include<stdio.h>
int main()
{
	int m;
	printf("�����������з����ĸ�����\n");
	scanf("%d",&m); 
	long u,v;
	printf("�����������еķ���������a/b��ÿ������������밴�س�����\n");
	int i;
	for(i=0;i<m;i++){
		scanf("%ld/%ld",&u,&v);
		double c;
		c=u/v;
		printf("�÷���ת����С��Ϊ��%f\n",c); 
	} 
	printf("�뽫ת������С�����и��ƣ���ݼ�ctrl+c������������ԭ���ķ���\n"); 
	
	int n;
	printf("���������ݸ�����\n");
	scanf("%d",&n);
	printf("���������ݣ�ÿ������������밴�س���x��y����ֵ���ÿո��������\n"); 
	
	double x[n+1],y[n+1];
	x[0]=y[0]=0;
	for(i=1;i<n+1;i++){
		scanf("%lf %lf",&x[i],&y[i]);
		x[0]+=x[i];
		y[0]+=y[i];
	}
	x[0]/=n;
	y[0]/=n;
	
	double p=0,q=0;
	for(i=1;i<n+1;i++){
		p+=x[i]*y[i];
		q+=x[i]*x[i];
	}
	
	double a,b;
	b=(p-n*x[0]*y[0])/(q-n*x[0]*x[0]);
	a=y[0]-b*x[0];
	
	printf("����������ϳ������Իع鷽��Ϊ��y=%lfx+%lf\n",a,b);
	
	getchar();
	getchar();
	return 0;
}
