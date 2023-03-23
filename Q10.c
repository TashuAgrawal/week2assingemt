//write a program to find total no. of alphabets,digits and specual characters in a string.
#include<stdio.h>
#include<string.h>
int main()
{
    char m[100];
    int alphabets=0,digits=0,spec=0,i;
    int size;

    printf("enter a string\n");
    scanf("%s",m);
    size=strlen(m);

    for( i=0;i<size;i++){
        if(m[i]>='A'&& m[i]<='Z' || m[i]>='a' && m[i]<='z'){
            alphabets++;
        }
        else if(m[i]>='0'&& m[i]<='9'){
            digits++;
        }
        else{
            spec++;
        }
    }

    printf("\n alphabets letters : %d\n",alphabets);
    printf("\n digits letters : %d\n",digits);
    printf("\n special characters : %d",spec);
    return 0;
}
