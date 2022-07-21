/*Enter the number 5
 Output
e 
e d 
e d c 
e d c b 
e d c b a*/

#include<stdio.h>
int main()
{
        int n,i,j;
        char ch='a';
        printf("Enter the number\n");
        scanf("%d",&n);
        for(i=n;i>=1;i--)
        {
         for(j=n;j>=i;j--)
                 printf("%c ",ch-1+j);
         printf("\n");
        }
}

