/*Enter the number5
  Output
0
2 4
6 8 10
12 14 16 18
20 22 24 26 28
*/



#include<stdio.h>
int main()
{
        int n,i,j,c=0;
        printf("Enter the number\n");
        scanf("%d",&n);
        for(i=1;i<=n;i++)
        {
                for(j=1;j<=i;j++)
                {
                   printf("%d ",c);
                   c=c+2;
                }
                printf("\n");
        }
}

