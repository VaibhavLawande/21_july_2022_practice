/* Enter the number 5
  output
0
1 -1
2 -2 2
3 -3 3 -3
4 -4 4 -4 4*/


#include<stdio.h>
int main()
{
	int n,i,j;
	printf("Enter the number\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<=i;j++)
		{
			if(j%2==0)
			printf("%d ",i);
			else 
				printf("%d ",-i);
		}
		printf("\n");
	}
}
