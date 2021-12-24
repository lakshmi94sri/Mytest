#include <stdio.h>
#include <string.h>
int itob(int n,char s[],int b)
{
	int i=0,j;
	int sign;
	if((sign = n) < 0)
	
	  n = -n;
	
    do{
	    j = n %b;
	    s[i++] = (j <= '9')? j+ '0' : j + 'a' -10;
    }while((n=n/b) > 0);

    if(sign < 0)
	    s[i++]= '-';
    s[i]='\0';
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
	int num = 42425;
	int base = 16;
	char str[1000];
	itob(num,str,base);
	printf("%s\n",str);
	return 0;
}
