#include<stdio.h>
#define TOGGLE(NUM,POS) NUM^=(1<<pos)
int main()
{
	int num , pos;
	printf("Enter the number\n");
	scanf("%d",&num);
	printf("Enter the number\n");
        scanf("%d",&pos);
	TOGGLE(num,pos);
	printf("After the toggle=%d\n",num);

}
