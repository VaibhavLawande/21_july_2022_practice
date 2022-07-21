/*Enter the number 5
  Output
e
d d
c c c
b b b b
a a a a a */

#include<stdio.h>
int main()
{
	int n,i,j;
	char ch='e';
	printf("Enter the number\n ");
	scanf("%d",&n);
	for(i=n;i>=1;i--)
	{
	 for(j=i;j<=n;j++)
		 printf("%c ",ch);
	          ch--;
	         printf("\n");
	}
}
