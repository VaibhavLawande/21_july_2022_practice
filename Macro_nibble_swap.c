#include<stdio.h>
#define SWAP(CH) (CH=(CH<<4)|(CH>>4))

int main()
{
unsigned char ch=2;
printf("befor swap %d\n",ch);
SWAP(ch);
printf("after swap %d\n",ch);
return 0;
}
