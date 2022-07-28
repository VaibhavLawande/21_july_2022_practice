#include<stdio.h>
void my_strcpy(char *,char*);
int main()
{
	char s[20],d[20];
	printf("Enter the string\n");
	scanf("%s",s);
	my_strcpy(d,s);
	printf("After the =%s\n",d);
}
void my_strcpy(char *d,char*s)
{
	while(*s)
	{
		(*d++)=(*s++);
	}
}
