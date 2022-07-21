/* Enter the number 5
  output
 1
 * *
 2 2 2
 * * * *
 3 3 3 3 */

#include<stdio.h>
int main()
{
	int n,i,j,count=1;
	printf("enter the number\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	for(j=1;j<=i;j++)
	{if(i%2==0)
		printf("*");
                else
		printf("%d",count);
	}
	if(i%2!=0)
	count++;
	printf("\n");
	}
}
