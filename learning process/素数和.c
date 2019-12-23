#include<stdio.h>
int main()
{
	int n,m;
	scanf("%d %d",&n,&m);
	
	int x,i,t;
	int cnt=0,sum=0;
	
	for(x=2;cnt<n;x++){
		t=1;
		for(i=2;i<x;i++){
			if(x%i==0){
				t=0;
				break;
			}
		}
		if(t==1){
			cnt++;
		}
	}
	
	sum=x-1;
	
	for(;cnt<m;x++){
		t=1;
		for(i=2;i<x;i++){
			if(x%i==0){
				t=0;
				break;
			}
		}
		if(t==1){
			sum+=x;
			cnt++;
		}
	}
	
	printf("%d",sum);
	
	getchar();
	getchar();
	return 0;
}
