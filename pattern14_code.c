/* Enter the number 5
  output
  a
  a b
  a b c
  a b c d
  a b c d e*/



#include<stdio.h>
int main()
{
        int n,i,j;
        char ch='a';
        printf("Enter the number \n");
        scanf("%d",&n);
        for(i=1;i<=n;i++)
        {
                for(j=1;j<=i;j++)
                printf("%c ",ch+j-1);
                printf("\n");
        }
}

