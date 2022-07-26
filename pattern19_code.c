/*Enter the number5
  Output
1
0 1
0 1 0
1 0 1 0
1 0 1 0 1
*/



#include<stdio.h>
int main()
{
	int n,i,j,c=1;
	printf("Enter the number\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			if(c%2!=0)
                 printf(" 1 ");

			else
				printf(" 0 ");
			c++;
		}
		printf("\n");
	}
}
