//write a program to find number of vowels and consonants in a string
#include<stdio.h>
#include<string.h>
int main()
{
    
    int vowels=0;
    int consonants=0;
    char st[50];
     
    printf("enter a word :\n");
    scanf("%s",st);
{for(int i=0;i<strlen(st);i++)

    if(st[i]=='a'||st[i]=='e'||st[i]=='i'||st[i]=='o'||st[i]=='u'||st[i]=='E'||st[i]=='u'||st[i]=='O')
    
    vowels++;


else 
consonants++;
}
printf("no of vowels  %d\n",vowels);
printf("no of consonants  %d",consonants);
return 0;
}