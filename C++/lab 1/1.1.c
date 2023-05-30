//Program to find the average expenditure of a company
#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
    int sy,n,i,j,k,m,a,y,y1;
    float yearmonth[50][12],sum=0,average[50],sum1[50],tsum,taverage;
    char month[12][50]={"JAN","FEB","MAR","APR","MAY","JUN","JUL","AUG","SEP","OCT","NOV","DEC"};
    printf("Enter the starting year:");
    scanf("%d",&sy);
    y=sy;
    y1=sy;
    printf("\n Enter the number of years:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\n Enter the expenditure of the year %d:",sy+i);
        for(j=0;j<12;j++)
        {
            printf("\n Enter the expenditure of the month %d:",j+1);
            scanf("%f",&yearmonth[i][j]);
        }
    }
    //displaying expenditure of each month
    for(i=0;i<n;i++)
    {
        printf("\n The expenditure of the year %d is :",y+i);
        printf("\n MONTH \t\t\t\t EXPENDITURE");
        for(j=0;j<12;j++)
        {
            printf("\n %s \t\t\t\t %f",month[j],yearmonth[i][j]);
        }
    }
    for(k=0;k<n;k++)
    {
        sum=0;
        for(m=0;m<12;m++)
        {
            sum=sum+yearmonth[k][m];
        }
        sum1[k]=sum;
        average[k]=sum/12;
        //printf("\n The sum and the average expenditure of the year %d is : %ld and %ld respectively",y1+k,sum[k],average[k]);
    }
    printf("\n The sum and average expenditure of the company as per year is:");
    printf("\n YEAR \t\t\t\t SUM \t\t\t\t AVERAGE ");
    tsum=0;
    for(a=0;a<n;a++)
    {
        printf("\n %d \t\t\t\t %f \t\t\t\t %f ",y1+a,sum1[a],average[a]);
        tsum=tsum+sum1[a];
    }
    taverage=tsum/n;
    printf("\n The total expenditure and average expenditure of the company of all years is %f and %f",tsum,taverage);
}
