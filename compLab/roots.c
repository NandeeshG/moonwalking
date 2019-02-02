#include <stdio.h>
#include <math.h>

int main()
{
    char name[20];
    printf("Enter your name- ");
    scanf("%s", &name);
    printf("Hi %s. This program\n", name);

    printf("Prints the roots of given quadratic eqn.\n");
    printf("If equation is 'ax^2 + bx + c' \n");
    printf("Enter a,b,c in order - ");
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    float d = (b * b) - (4 * a * c);
    if (d > 0)
    {
        d = sqrt(d);
        float a2 = a, b2 = b;
        float alpha = -1 * (b2);
        alpha += d;
        alpha /= (2 * (a2));

        float beta = -1 * (b2);
        beta -= d;
        beta /= (2 * (a2));

        printf("Roots are %f , %f .\n", alpha, beta);
        return 0;
    }
    else if (d == 0)
    {
        d = sqrt(d);
        float a2 = a, b2 = b;
        float alpha = -1 * (b2);
        alpha /= (2 * (a2));
        printf("Roots are %f , %f .\n", alpha, alpha);
        return 0;
    }
    else
    {
        printf("No real roots exist.\n");
        return 0;
    }
}
/*
D:\Documents\Programming\online\moonwalking\compLab>gcc roots.c
D:\Documents\Programming\online\moonwalking\compLab>a.exe
Enter your name- ng
Hi ng. This program
Prints the roots of given quadratic eqn.
If equation is 'ax^2 + bx + c'
Enter a,b,c in order - 4
5
3
No real roots exist.

D:\Documents\Programming\online\moonwalking\compLab>a.exe
Enter your name- ng
Hi ng. This program
Prints the roots of given quadratic eqn.
If equation is 'ax^2 + bx + c'
Enter a,b,c in order - 3
6
2
Roots are -0.422650 , -1.577350 .

D:\Documents\Programming\online\moonwalking\compLab>a.exe
Enter your name- ng
Hi ng. This program
Prints the roots of given quadratic eqn.
If equation is 'ax^2 + bx + c'
Enter a,b,c in order - 2
8
1
Roots are -0.129171 , -3.870829 .

D:\Documents\Programming\online\moonwalking\compLab>a.exe
Enter your name- ng
Hi ng. This program
Prints the roots of given quadratic eqn.
If equation is 'ax^2 + bx + c'
Enter a,b,c in order - 16
8
1
Roots are -0.250000 , -0.250000 .

D:\Documents\Programming\online\moonwalking\compLab>
*/
