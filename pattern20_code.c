/*Enter the number5
  Output
1
0 1
1 0 1
0 1 0 1
1 0 1 0 1
*/



#include<stdio.h>
int main()
{
        int n,i,j;
        printf("Enter the number\n");
        scanf("%d",&n);
        for(i=1;i<=n;i++)
        {
                for(j=1;j<=i;j++)
                {
                        if((i+j)%2!=0)
                 printf(" 1 ");

                        else
                                printf(" 0 ");
                }
		printf("\n");
	}
}
