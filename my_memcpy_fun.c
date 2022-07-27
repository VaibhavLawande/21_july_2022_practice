#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void my_memcpy(void *dest,void const *src ,size_t n )
{
char* csrc =(char*)src;
char* cdest=(char*)dest;
for(int i=0;i<n;i++)
{
cdest[i]=csrc[i];
}
}

int main()
{
char csrc[]="hello";
char cdest[100];
my_memcpy(cdest,csrc,strlen(csrc)+1);
printf("after copied:= %s\n",cdest);
return 0;
}
