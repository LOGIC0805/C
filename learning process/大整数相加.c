#include<stdio.h>
#include<string.h>
#define maxl 2000
#define max(a,b) (a>b)?(a):(b)

void add(char *s,char *t,char *u);
int main()
{
	char s[maxl],t[maxl],u[maxl];
	
	while(~scanf("%s %s",s,t)){
		add(s,t,u);
		printf("%s\n",u);
	}
	
	return 0;
}

void add(char *s,char *t,char *u)
{
	int i;
	int lens=strlen(s),lent=strlen(t);
	int k=max(lens,lent)+1;
	
	for(i=0;i<lens;i++){
		s[i]-='0';
	}
	for(i=0;i<lent;i++){
		t[i]-='0';
	}
	
	int cc=0,p=lens-1,q=lent-1;
	for(i=k;i>=0;i--){
		int x=cc;
		if(p>=0){
			x+=s[p];
			p--; 
		}
		if(q>=0){
			x+=t[q];
			q--;
		}
		u[i]=x%10+'0';
		cc=x/10;
	}	
		u[k+1]='\0';
		while(u[0]=='0'){
			for(i=0;i<k+1;i++){
				u[i]=u[i+1];
			}
		}
		
		if(strlen(u)==0){
			u[0]='0',u[1]='\0';
		}
}
