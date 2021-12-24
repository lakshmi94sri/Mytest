#include <stdio.h>
#include <string.h>
int reverse(char s[])
{
	int c,i,j;
	for(i=0,j=strlen(s)-1;i<j;i++,j--)
		c=s[i],s[i]=s[j],s[j]=c;
}
int itoa(int n,char s[],int w)
{
        int i=0;
	int sign;
	if((sign=n) < 0)
		n=-n;
	do{
		s[i++]=n%10+'0';
	}while((n=n/10) > 0);
	if(sign <0)
		s[i++]='-';
	while(i < w)
		s[i++]=' ';
	s[i]='\0';
	reverse(s);

}
int main()
{
	char str[10000];
	int num=-343565;
	int width=10;
	itoa(num,str,width);
	printf("%s\n",str);
	return 0;
}
