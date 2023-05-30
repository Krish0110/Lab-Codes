/*concept of printimg mixed data*/
#include<stdio.h>
#include<conio.h>
void main()
{
int n=12345;
float m=123.9876;
char ch='a';
char str[20]="I love baglung.";
clrscr();
printf("n=%7dm=%12.5fch=%-2cstr=%16s",n,m,ch,str);
getch();
}