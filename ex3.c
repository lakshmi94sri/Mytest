#include <stdio.h>
int expand(char s1[],char s2[]);
int get_line(char s[],int maxline);
int main()
{
        char s1[100];
        char s2[100];
     get_line(s1,100);
     expand(s1,s2);
     printf("%s\n",s2);
     return 0;
}


int get_line(char s[],int lim)
{
	int i,c;
	for(i=0;i<lim-1 && (c=getchar()) != EOF && c != '\n';i++)
	
	 s[i] = c;
        if(c == '\n')
         s[i++] = c;
    
  s[i]='\0';
}
int expand(char s1[],char s2[])
{
	int c,i=0,j=0;
	while((c = s1[i++]) != '\0')
	{
		if(s1[i] == '-' && s1[i++] >= c)
		{
			i++;
		while(c < s1[i])
			s2[j++] = c++;
		}
		else
			s2[j++]=c;
	}
	s2[j]='\0';
}

