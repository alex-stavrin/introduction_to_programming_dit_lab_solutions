// Γράψτε ένα πρόγραμμα pyth.c που δέχεται 2 inputs - τα μήκη των καθέτων πλευρών
// ενός ορθογωνίου τριγώνου και τυπώνει τα ακόλουθα:
// Το εμβαδόν του τριγώνου.
// Την περίμετρο του τριγώνου.

#include <stdio.h>
#include <math.h>

int main()
{
    printf("Enter side 1: ");
    int side1;
    scanf("%d", &side1);

    printf("Enter side 2: ");
    int side2;
    scanf("%d", &side2);

    int side3 = sqrt(side1 * side1 + side2 * side2);

    int perimeter = side1 + side2 + side3;
    printf("Perimeter is: %d\n", perimeter);

    double area = (side1 * side2) / 2.0;
    printf("Area is: %f\n", area);
}