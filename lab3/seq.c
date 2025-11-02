#include <stdio.h>
#include <math.h>

void sum()
{
    int sum = 0;
    int i = 1;
    while(i <= 100)
    {
        sum += i;
        i++;
    }

    printf("Sum is: %d\n", sum);
}

void basel()
{
    double sum = 0.0;
    for(int i = 1; i <= 100; i++)
    {
        sum += 1.0 / (i * i);
    }

    printf("Sum of basel is: %f\n", sum);
}

void pi_approx1()
{
    int i = 1;
    double sum = 0.0;
    do
    {
        sum += 1.0 / (i * i);
        i++;
    } while (i <= 100);

    double result = sqrt(6 * sum);
    printf("Pi approximation 1 is: %f\n", result);
}

void pi_approx2()
{
    int i = 1;
    double sum = 0.0;
    double term = 0.0;
    do
    {
        term = 1.0 / (i * i);
        sum += term;
        i++;
    } while (term >= 1e-15);

    double result = sqrt(6 * sum);
    printf("Pi approximation 2 is: %f\n", result);   
}

void eta_two()
{
    printf("Enter number of terms for eta_two: ");
    int number_of_terms;
    scanf("%d", &number_of_terms);
    
    double sum = 0.0;
    for(int i = 1; i <= number_of_terms; i++)
    {
        sum += pow(-1, i - 1) / (i * i);
    }

    printf("Sum of eta_two is %.6f\n", sum);
}

void pi_approx3()
{
    int i = 1;
    double sum = 0.0;
    double term = 0.0;
    do
    {
        term = 1.0 / (i * i);
        sum += term;
        i++;
    } while (term >= 1e-15);

    double result = sqrt(6 * sum);
    printf("Pi approximation 3 is: %1.8f\n", result);    
}

int main()
{
    sum();
    basel();
    pi_approx1();
    pi_approx2();
    pi_approx3();
    eta_two();
}