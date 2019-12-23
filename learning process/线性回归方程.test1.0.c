#include<stdio.h>
int main()
{
	int m;
	printf("请输入数据中分数的个数：\n");
	scanf("%d",&m); 
	long u,v;
	printf("请输入数据中的分数（形如a/b，每个数据输入后请按回车）：\n");
	int i;
	for(i=0;i<m;i++){
		scanf("%ld/%ld",&u,&v);
		double c;
		c=u/v;
		printf("该分数转换成小数为：%f\n",c); 
	} 
	printf("请将转换出的小数进行复制（快捷键ctrl+c），用来代替原来的分数\n"); 
	
	int n;
	printf("请输入数据个数：\n");
	scanf("%d",&n);
	printf("请输入数据（每组数据输入后请按回车，x与y的数值请用空格隔开）：\n"); 
	
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
	
	printf("这组数据拟合出的线性回归方程为：y=%lfx+%lf\n",a,b);
	
	getchar();
	getchar();
	return 0;
}
