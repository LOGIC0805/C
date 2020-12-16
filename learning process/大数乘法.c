#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX_LEN 200
unsigned an1[MAX_LEN+10];
unsigned an2[MAX_LEN+10];
unsigned aResult[MAX_LEN*2+10];
char szLine1[MAX_LEN+10];
char szLine2[MAX_LEN+10];
int main()
{
	gets(szLine1);
	gets(szLine2);
	int nLen1=strlen(szLine1);
	int nLen2=strlen(szLine2);
	memset(an1,0,sizeof(an1));
	memset(an2,0,sizeof(an2));
	memset(aResult,0,sizeof(aResult));
	
	int i,j=0;
	for(i=nLen1-1;i>=0;i--){
		an1[j++]=szLine1[i]-'0';
	}
	j=0;
	for(i=nLen2-1;i>=0;i--){
		an2[j++]=szLine2[i]-'0';
	}
	
	for(i=0;i<nLen2;i++){
		for(j=0;j<nLen2;j++){
			aResult[i+j]+=an2[i]*an1[j];
		}
	}
	
	for(i=0;i<MAX_LEN*2;i++){
		if(aResult[i]>=10){
			aResult[i+1]+=aResult[i]/10;
			aResult[i]%=10;
		}
	}
	
	int bStartOutput=0;
	for(i=MAX_LEN*2;i>=0;i--){
		if(bStartOutput){
			printf("%d",aResult[i]);
		}else if(aResult[i]){
			printf("%d",aResult[i]);
			bStartOutput=1;
		}
	}
	if(!bStartOutput){
		printf("0");
	}
	
	return 0;
}
