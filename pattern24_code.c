/*Enter the number5
  Output
a
AA
aaa
AAAA
aaaaa
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
                        if(i%2==0)
                 printf("A");
                        else
                                printf("a");
                }
                printf("\n");
        }
}
