#include<stdio.h>
int my_strlen(char*);
int main()
{
char ch[20];
int i;
printf("Enter the string\n");
scanf("%s",ch);
i=my_strlen(ch);
printf("len=%d\n",i);
}
int my_strlen(char *s)
{
	int j;
	for(j=0;s[j];j++);
	return j;
}
