/*Enter the number 5
 Output
e 
d e 
c d e 
b c d e 
a b c d e*/ 

#include<stdio.h>
int main()
{
	int n,i,j;
	char ch='a';
	printf("Enter the number\n");
	scanf("%d",&n);
	for(i=n;i>=1;i--)
	{
	 for(j=i;j<=n;j++)
		 printf("%c ",ch+j-1);
	 printf("\n");
	}
}
