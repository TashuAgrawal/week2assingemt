//write a program to print the given pattern using loop
#include<stdio.h>
int main()

{int i,k,no=1;

for(i=1;i<=5;i++)
{
    for( k=1;k<=i;k++)
   { printf(" %d",no++);
   }
   printf("\n");



}

return 0;

}