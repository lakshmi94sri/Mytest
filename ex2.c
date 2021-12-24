#include <stdio.h>
void escape(char s[],char t[])
{
     char c;
     int i = 0;
     int j = 0;

     while((c = s[i]) != '\0')
     {
	     switch(c)
	     {
		     case '\n':
			     t[j++] = '\\';
			     t[j]   =  'n';
			    break;
		    case   '\t':
			    t[j++]  = '\\';
			    t[j]    =   't';
			    break;
	            default :
			    t[j] = s[i];
			    break;
	     }
	     i++;
	     j++;
     }
     t[j] = '\0';

}
int main()
{
	char s[] = "pri\tsri\nram\t";
	char t[100];
	escape(s,t);
	printf("%s=t\n",t);
	printf("%s=s\n",s);
}

