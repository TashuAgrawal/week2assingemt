//wtite a program to print the given pattern using loop
#include<stdio.h>
int main()

{ int p=5;
for(int i=0;i<5;i++)
{
    for(int j=0;j<p;j++)
    {
        printf("* ");
    }
printf("\n");
p--;
}
return 0;

}