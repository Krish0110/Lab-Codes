#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>

const int originX = 300;
const int originY = 200;
const double PI = 3.14159265359;
void triangle(int x, int y, int u,
            int v, int p, int q){
	line(x+originX, -y+originY,
            u+originX, -v+originY);
	line(u+originX, -v+originY,
            p+originX, -q+originY);
	line(p+originX, -q+originY,
            x+originX, -y+originY);
}

reflection()
{
    int b;
    printf("Choose an axis of reflection
            \n1.X-axis\t2.Y-axis\t");
    scanf("%d", &b);
    return b;
}

int main()
{
    int gd = DETECT, gm;
    int x, y, u, v, p , q;
    int x1, y1;
    int a;
    initgraph(&gd, &gm,"C:\\TURBOC3\\BGI");
    printf("Enter the coordinates
            of the triangle::");
    scanf("%d%d%d%d%d%d", &x, &y,
            &u, &v, &p, &q);
    float theta;
    char in;
    do
    {
    clrscr();
    triangle(x, y, u, v, p ,q);
    printf("Select::\n1.Translation\t
    2.Rotation\n3.Reflection\t 4.Scaling\n");
    scanf("%d", &a);
    switch(a)
    {
    case 1:
        //translation
        printf("enter the translation vector:");
        scanf("%d%d", &x1,&y1);
        triangle(x + x1, y + y1, u + x1,
            v + y1, p + x1, q + y1);
        break;

    case 2:
        //rotation
        printf("Enter the angle
                theta in deg::");
        scanf("%f", &theta);
        theta = (PI / 180 ) * theta;
        triangle(x * cos(theta)-y*sin(theta),
            x * sin(theta) + y * cos(theta),
            u * cos(theta) - v * sin(theta),
            u* sin(theta) + v*cos(theta),
            p * cos(theta) - q* sin(theta),
            p * sin(theta) + q * cos(theta));
        break;
    case 3:
        int a;
        a = reflection();
        switch(a)
        {
            case 1:
                triangle(x, -y, u, -v,
                    p , -q);
                break;
            case 2:
                    triangle(-x, y, -u,
                        v, -p , q);
                break;
            default:
                printf("Invalid option!");
                break;

        }
        break;
    case 4:
        printf("Enter the scaling vector
            (x,y)::" );
        scanf("%d%d", &x1, &y1);
        triangle(x1 * x, y1 * y, x1 * u,
            y1 * v, x1 * p , y1 * q);
        break;
    default:
        printf("Choose a valid option!");
        break;
    }
    printf("Again?(y/n)::" );
    scanf(" %c", &in);
    }while(in == 'y' || in == 'Y');
    getch();
    closegraph();
    return 0;

}
