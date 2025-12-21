#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main()
{
    srand(time(NULL));

    // will produce random numbers in the range [0, RAND_MAX]
    int random_number1 = rand();
    int random_number2 = rand();
    int random_number3 = rand();

    // we confine the random number in the range [0, 1]
    double a = (double)random_number1 / RAND_MAX;
    double b = (double)random_number2 / RAND_MAX;
    double c = (double)random_number3 / RAND_MAX;

    printf("Random number 1: %f\n", a);
    printf("Random number 2: %f\n", b);
    printf("Random number 3: %f\n", c);

    // We will calculate the real roots of a * x^2 + b * x + c
    double delta = b * b - (4 * a * c);
    if(delta > 0) // two roots
    {
        double root1 = (-b + sqrt(delta)) / (2.0 * a);
        double root2 = (-b - sqrt(delta)) / (2.0 * a);
        printf("Roots are: %f,%f\n", root1, root2);
    }
    else if(delta == 0) // one root
    {
        double root = -b / (2.0 * a);
        printf("Root is: %f\n", root);
    }
    else // no roots 
    {
        printf("There are no real roots\n");
    }

    return 0;
}