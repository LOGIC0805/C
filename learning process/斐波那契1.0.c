#include<stdio.h>
#include<math.h>
int main()
{
	int n;
	scanf("%d",&n);
	
	unsigned long long a=1,b=1,c,p;
	int i,x;
	int m[10000]={1,1,};
	for(i=2;i<1000;i++){
		c=a+b;
		p=c;
		x=0;
		while(p%10!=p){
			x++;
			p/=10;
		}
		p=c;
		if(p%10!=p){
			for(;x>=0;x--){
				m[i]=p/(unsigned long long)pow(10,x);
				p%=(unsigned long long)pow(10,x);
				i++;
			}
			i--;
			a=b;
			b=c;
		}else{
			m[i]=c;
			a=b;
			b=c;
		}
	}
	
	for(i=0;i<n;i++){
		printf("%d",m[i]);
	}
	
	return 0;
}
