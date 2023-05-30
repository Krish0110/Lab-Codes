//Program to read the name, roll, phone number and address of each student
#include<stdio.h>
#include<conio.h>
#include<string.h>

struct student
{
    char name[100];
    int roll;
    char address[100];
    char pn[100];
}s,s1,temp;

int main()
{
    FILE *fp;
    struct student s[100],s1[100],temp;
    int n,i,j,k;
    fp=fopen("student.txt","wb+");
    if(fp==NULL)
    {
        printf("ERROR!!");
        exit(1);
    }


    printf("\n Enter the number of students in class:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\n Enter the name of student %d:",i+1);
        scanf("%s",&s[i].name);
        printf("\n Enter the roll number of student %d:",i+1);
        scanf("%d",&s[i].roll);
        printf("\n Enter the address of student %d:",i+1);
        scanf("%s",&s[i].address);
        printf("\n Enter the phone number of student %d:",i+1);
        scanf("%s",&s[i].pn);
        fwrite(&s[i],sizeof(struct student),1,fp);
    }
    fclose(fp);
    fp=fopen("student.txt","rb");
    if(fp==NULL)
    {
        printf("ERROR!!");
        exit(1);
    }
    for(i=0;i<n;i++)
        fread(&s1[i],sizeof(struct student),1,fp);
    for(j=0;j<n;j++)
    {
        for(k=0;k<n;k++)
        {
            if(strcmp(s1[j].name,s1[k].name)<0)
            {

                temp=s1[j];
                s1[j]=s1[k];
                s1[k]=temp;
            }
        }
    }
    printf("\n The details of the student in alphabetical order is:");
    printf("\n NAME \t\t\t\t ROLL \t\t\t\t ADDRESS \t\t\t\t PHONE NUMBER");
    for(i=0;i<n;i++)
        printf("\n %s \t\t\t\t %d \t\t\t\t %s \t\t\t\t %s",s1[i].name,s1[i].roll,s1[i].address,s1[i].pn);
    fclose(fp);

}
