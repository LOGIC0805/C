#include<stdio.h>

int f(int t);

int main()
{
	int n;
	scanf("%d",&n);
	
	int a[n],b[n];
	int i,j,t;
	
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}

	for(i=0;i<n-1;i++){
		for(j=0;j<(n-i-1);j++){
			if(f(a[j])>f(a[j+1])){
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	} 
	
	printf("%d",a[0]);
	for(i=1;i<n;i++){
		printf(" %d",a[i]);
	}
	
	return 0; 
 } 
 
int f(int t)
{
	int x;
 	if(t<0){
 		x=0-t;
	 }else{
	 	x=t;
	 }
	 
	return x;
 }
