/*to ask question*/
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
int i;
char user_ans[100];
clrscr();
char question[100]="Who is the prime minister of Nepal?";
char correct_ans[100]="Sher Bahadur Deuba";
puts(question);
gets(user_ans);
for(i=0;i<3;i++)
{
if(strcmp(correct_ans,user_ans)==0)
{
printf("\n Good! Correct answer");
break;
}
else
{
printf("\n Try again!");
gets(user_ans);
}
}
if(i==3)
{
printf("\n The correct answer is :");
puts(correct_ans);
}
getch();
}
