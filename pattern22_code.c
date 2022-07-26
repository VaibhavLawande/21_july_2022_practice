/*Enter the number5
  Output
1
3 5
7 9 11
13 15 17 19
21 23 25 27 29
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
                   printf("%d ",c);
		   c=c+2;
                } 
                printf("\n");
        }
}
