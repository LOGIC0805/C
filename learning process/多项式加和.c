#include <stdio.h>
int main()
{
	int coe[101];
	int i;
	for(i=0;i<101;i++) coe[i]=0;
	int cnt=0;
	int p,c;
	while(scanf("%d %d",&p,&c)){
		if(p==0){
			if(cnt==0) cnt++;
			else{
				coe[0]+=c;
				break;
			}
		}
		coe[p]+=c;
	}
	int flag=1;
	for(i=100;i>=0;i--){
		if(coe[i]!=0){
			if(flag){
				if(coe[i]!=1) printf("%d",coe[i]);
				flag=0;
			}
			else{
				if(coe[i]>0) printf("+");
				if(coe[i]==-1) printf("-");
				else if(coe[i]!=1&&coe[i]!=-1) printf("%d",coe[i]);
			}
			if(i>1) printf("x%d",i);
			else if(i==1) printf("x");
		}	
	}
	if(flag) printf("0");
	return 0;
}
