#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void Addition() // This function will do addition for the calculator.
{
    float x, y;
    char c;
    printf("Enter the values you want to add: \n");
    scanf("%f", &x);
    float sum = x;
    while (1)
    {
        scanf("%f", &y);        
        printf("\n");        
        scanf("%c", &c);
        if (c == 'q')
        {
            break;
        }
        sum = sum + y;
        printf("%.2f \n", sum);
    }
}

void substraction() // This function will do substraction for the calculator.
{
    float x, y;
    char c;
    printf("Enter the values to initiate substraction: \n");
    scanf("%f", &x);
    float sub = x;
    while (1)
    {
        scanf("%f", &y);
        printf("\n");
        scanf("%c", &c);
        if (c == 'q')
        {
            break;
        }
        sub = sub - y;
        printf("%.2f \n", sub);
    }
}

void Multiplication() // This function will do multiplication for the calculator.
{
    float x, y;
    char c;
    printf("Enter the values to initiate the operation: \n");
    scanf("%f", &x);
    float pro = x;
    while (1)
    {
        scanf("%f", &y);
        scanf("%c", &c);
        printf("\n");
        if (c == 'q')
        {
            break;
        }
        pro = pro * y;
        printf("%.2f \n", pro);
    }
}

void Division() // This function will do division for the calculator.
{
    float x, y;
    char c;
    printf("Enter the values to initiate division: \n");
    scanf("%f", &x);
    float div = x;
    while (1)
    {
        scanf("%f", &y);
        scanf("%c", &c);
        printf("\n");
        if (c == 'q')
        {
            break;
        }
        div = div / y;
        printf("Q = %.2f or Q = %d & R = %lf \n", div, (int)div, fmod(x, y));
    }
    
}

int main()
{
    char c;
    start:
    printf("Enter the option regarding the operation you want to perform: \n");
    printf("1. Addition \n");
    printf("2. Substraction \n");
    printf("3. Multiplication \n");
    printf("4. Division \n");
    printf("Enter 'q' to exit \n");
    scanf("%c", &c);

    switch (c)
    {
    case '1':
        Addition();
        goto start;

    case '2':
        substraction();
        goto start;

    case '3':
        Multiplication();
        goto start;

    case '4':
        Division();
        goto start;

    case 'q':
        printf("Exiting...........\n");
        break;

    default:
        printf("Invalid Input!");
        goto start;
    }

    return 0;
}
