//Program to store and retrieve the name and marks of the students
#include<stdio.h>
#include<conio.h>
struct student
{
    char name[100];
    float marks;
}s;

int main()
{
    int n,i;
    struct student s[100];
    printf("Enter the number of the students in class:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\n Enter the name of student %d:",i+1);
        scanf("%s",&s[i].name);
        printf("\n Enter the marks obtained by student %d:",i+1);
        scanf("%f",&s[i].marks);
    }
    printf("\n Retrieving the stored data:");
    printf("\n The name and marks obtained by each student in c programming is:");
    printf("\n NAME \t\t\t\t\t MARKS OBTAINED");
    for(i=0;i<n;i++)
        printf("\n %s \t\t\t\t\t %f",s[i].name,s[i].marks);
}
