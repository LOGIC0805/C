#include<stdio.h>

int f(int a);

int main()
{
	long x;
	scanf("%ld",&x);
	
	int i,a;
	int t=1;
	for(i=2;i<x;i++){
		if(x%i==0){
			printf("%ld=%d",x,i);
			a=x/i;
			t=0;
			break;
		}
	}
	
	if(t==1){
		printf("%ld=%ld",x,x);
	}else{
		do{
			a=f(a);
		}while(a!=1);
	}
	
	getchar();
	getchar();
	return 0;
}

int f(int a)
{
	int i;
	int t=1;
	for(i=2;i<a;i++){
		if(a%i==0){
			t=0;
			a/=i;
			break;
		}
	}
	printf("x%d",i);
	if(t==1){
		return t;
	}else{
		return a;
	}
}
