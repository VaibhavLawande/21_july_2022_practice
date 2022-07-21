/*Enter the number 5
 output
a 
b a 
c b a 
d c b a 
e d c b a*/
#include<stdio.h>
int main()
{
	int n,i,j;
	char ch='a';
	printf("Enter the number\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	 for(j=i;j>=1;j--)
		 printf("%c ",ch+j-1);
	   printf("\n");
	}
}
