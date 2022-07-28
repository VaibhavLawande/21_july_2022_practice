/*Enter the number 5
 Output
1
2 3
5 8 13
21 34 55 89
144 233 377 610
*/
#include<stdio.h>
int main()
{
	int n,a=0,b=1,c;
	printf("Enter the Number\n");
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=i;j++)
		{
			c=a+b;
			printf("%d ",c);
			a=b;
			b=c;
		}
		printf("\n");
	}
	return 0;
}
