//Program to find the position of the character c in the given sentence
#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
    char gsent[100];
    int i=0;
    char c,*d;
    printf("Enter the sentence in which character is to be searched:");
    gets(gsent);
    printf("\n Enter the character to be searched:");
    scanf(" %c",&c);
    while(*d!='\0')
    {
        *d=gsent[i];
        if(*d==c)
        {
            printf("\n The position of the %c is %d",c,i+1);
        }
        i++;
    }
}
