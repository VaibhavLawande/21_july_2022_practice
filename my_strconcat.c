#include<stdio.h>
void my_concat(char*,char*);
int main()
{
	char s[20],d[20];
	printf("Enter the string\n");
	scanf("%s",s);
	printf("Enter the string\n");
        scanf("%s",d);
       my_concat(s,d);
       printf("After the concat=%s\n",s);
}
void my_concat(char *s,char *d)
{
	int i,len;
	for(len=0;s[len];len++);
	for(i=0;s[i];i++)
	{
		s[len+i]=d[i];
	}
	s[len+i]='\0';
}
