#include<stdio.h>
#include<string.h>
#define TOUPPER(c) ('a'<=(c)&&(c)<='z'?(c)-'a'+'A':(c))

int main(){
	char s[5];
	strcpy(s, "abcd");
	
	int i = 0;
	putchar(TOUPPER(s[++i]));

	return 0;
}
