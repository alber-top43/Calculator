#include <stdio.h>

// function to find the average 
float averageFunction(float num1, float num2, float num3)
{
    return (num1 + num2 + num3) / 3.0f;
}

// function to find pi to the nth term
double piFunction(int n)
{
    if (n <= 0)
        return 0.0;

    double sum = 0.0;

    for (int k = 0; k < n; k++)
    {
        double term = 1.0 / (2.0 * k + 1.0);

        if (k % 2 == 0)
            sum += term;
        else
            sum -= term;
    }

    return 4.0 * sum;
}

// function to find the square root of an integer 
int squareRootFunction(int m)
{
    if (m < 0)
        return -1;

    for (int i = 0; i * i <= m; i++)
    {
        if (i * i == m)
            return i;
    }

    return -1;
}

int main(void)
{
    int choice;

    do
    {
        // Calculator menu
        printf("\nWelcome User, please choose an option\n");
        printf("1. Average\n");
        printf("2. Calculate pi to the nth term\n");
        printf("3. Find the square root of an integer\n");
        printf("4. Exit\n");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
            {
                float ave1, ave2, ave3;

                printf("Enter first value: ");
                scanf("%f", &ave1);

                printf("Enter second value: ");
                scanf("%f", &ave2);

                printf("Enter third value: ");
                scanf("%f", &ave3);

                float averageValue = averageFunction(ave1, ave2, ave3);
                printf("The average of the three numbers is: %.2f\n", averageValue);
                break;
            }

            case 2:
            {
                int n;

                printf("Enter how many terms to calculate pi to: ");
                scanf("%d", &n);

                double piApproximation = piFunction(n);
                printf("The approximation of pi using %d terms is: %.6f\n", n, piApproximation);
                break;
            }

            case 3:
            {
                int nValue;

                printf("Enter an integer value to find its square root: ");
                scanf("%d", &nValue);

                int sres = squareRootFunction(nValue);

                if (sres == -1)
                    printf("No integer square root for %d\n", nValue);
                else
                    printf("The square root of %d is %d\n", nValue, sres);

                break;
            }

            case 4:
                printf("Goodbye\n");
                break;

            default:
                printf("Invalid choice, please only choose numbers from 1–4\n");
                break;
        }

    } while (choice != 4);

    return 0;
}
