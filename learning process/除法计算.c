#include<stdio.h>
int main()
{
	int m,n;
	scanf("%d/%d",&m,&n);
	
	int i;
	
	printf("0.");
	for(i=1;i<201;i++){
		m*=10;
		printf("%d",m/n);
		m%=n;
		if(m==0){
			break;
		}	
	}

	return 0;
 } 
