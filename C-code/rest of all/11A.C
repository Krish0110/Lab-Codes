/*to create a structure having name,address,telephone numberand salary*/
#include<stdio.h>
#include<conio.h>
void main()
{
struct employee
{
char name[100];
char address[100];
float number;
float salary;
};
int i,n;
struct employee e[20];
clrscr();
printf("Enter the total number of employees n:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
printf("\n Enter the name of an employee %d:",i);
scanf("%s",e[i].name);
printf("\n Enter the address of an employee %d:",i);
scanf("%s",e[i].address);
printf("\n Enter the telephone number of an employee %d:",i);
scanf("%f",&e[i].number);
printf("\n Enter the salary of an employee %d:",i);
scanf("%f",&e[i].salary);
}
for(i=1;i<=n;i++);
{
printf("\n Name[%d]=%s",i,e[i].name);
printf("\n Address[%d]=%s",i,e[i].address);
printf("\nTelephone number[%d]=%f",i,e[i].number);
printf("\n salary[%d]=%f",i,e[i].salary);
}
getch();
}
