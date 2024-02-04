#include<stdio.h>
#include<conio.h>
#include<math.h>

void main()
{
    int i, j, k, a[3][3], b[3][3], c[3][3], s;

    clrscr();

    printf("Matrix 3*3\n");

    printf("Enter One Matrix value\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("Enter Value %d%d :", (i + 1), (j + 1));
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter Second Matrix value\n");

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("Enter Value %d%d :",(i+1),(j+1));
            scanf("%d", &b[i][j]);
        }
    }

    printf("Click 1 Addition \nClick 2 Subtraction \nClick 3 Multiplication\n");
    scanf("%d", &s);

    if (s == 1)
    {
        printf("Two Matrix Addition\n");
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 3; j++)
            {
                c[i][j] = a[i][j] + b[i][j];
            }
        }

        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 3; j++)
            {
                printf("%d\t", c[i][j]);
            }
            printf("\n");
        }
    }

    if (s == 2)
    {
        printf("Two Matrix Subtraction\n");
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 3; j++)
            {
                c[i][j] = a[i][j] - b[i][j];
            }
        }

        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 3; j++)
            {
                printf("%d\t", c[i][j]);
            }
            printf("\n");
        }
    }

    if (s == 3)
    {
        printf("Two Matrix Multiplication\n");
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 3; j++)
            {
                c[i][j] = 0; // Initialize to 0 before starting the multiplication
                for (k = 0; k < 3; k++)
                {
                    c[i][j] = c[i][j] + (a[i][k] * b[k][j]);
                }
            }
        }

        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 3; j++)
            {
                printf("%d\t", c[i][j]);
            }
            printf("\n");
        }
    }

    getch();
}
