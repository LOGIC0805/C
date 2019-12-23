#include<stdio.h>
int position[100]={0};
void recurtion(int n,int k)
{
	int i;
	if(k==n){
		for(i=0;i<n;++i){
			printf("%d ",position[i]+1);
		}
		printf("\n");
	}
	for(i=0;i<n;++i){
		int j;
		for(j=0;j<k;++j){
			if(position[j]==i){
				break;
			}
		}
		if(j==k){
			position[k]=i;
			recurtion(n,k+1);
		}
	}
}
int main()
{
	int n;
	scanf("%d",&n);
	recurtion(n,0);
	return 0;
}
