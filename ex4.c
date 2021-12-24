#include <stdio.h>
#include <string.h>
#define abs(X) ( (X) > 0 ? (X): -(X))
int reverse(char s[]);
int itoa(int n,char s[])
{
	int i=0;
	int sign=n;
	do{
		s[i++] = abs(n%10) + '0';
	}while((n=n/10) != 0);
   if(sign < 0)
     s[i++] = '-';
	s[i] ='\0';
  reverse(s);
}

int reverse(char s[])
{
	int i,j,c;
	for(i=0,j=strlen(s)-1;i<j;i++,j--)
		c=s[i],s[i]=s[j],s[j]=c;
}
int main()
{
	int num = -986998;
	char str[1000];
	itoa(num,str);
	printf("%s",str);
	return 0;
}
