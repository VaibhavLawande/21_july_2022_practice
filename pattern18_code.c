/* Enter the number 5
 Output
a 
b c 
d e f 
g h i j 
k l m n o */

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
                {
                printf("%c ",ch);
                ch++;
                }
                printf("\n");
        }
}

