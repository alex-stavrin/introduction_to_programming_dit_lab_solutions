// Γράψτε ένα πρόγραμμα C calc.c που δρα ως ένα κομπιουτεράκι (calculator) για να πραγματοποιεί πρόσθεση.
// Το πρόγραμμά σας πρέπει να ζητά δύο ακεραίους από την πρότυπη είσοδο (stdin) και στην συνέχεια να τυπώνει
// το άθροισμά τους. Παράδειγμα εκτέλεσης ακολουθεί:

#include <stdio.h>

int main()
{
    printf("Please enter the first number: ");
    int number1;
    scanf("%d", &number1);

    printf("Please enter the second number: ");
    int number2;
    scanf("%d", &number2);

    int sum = number1 + number2;
    printf("The sum of the two numbers is: %d\n", sum);
}