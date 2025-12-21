#include <stdio.h>

// takes in hex letters. These letters are in ASCII and turned to integer numbers. These integer numbers have hex value of the
// actual hex letter
int hex_letter_to_int(char hex_letter) {
    if (hex_letter >= 48 && hex_letter <= 57) return hex_letter - 48;
    if (hex_letter >= 97 && hex_letter <= 102) return hex_letter - 87;
    return -1;
}

int main()
{
    int current_char = getchar();
    while(current_char != EOF)
    {
        int second_char = getchar();

        if(second_char != EOF)
        {
            // int is 4 bytes (32 bits);
            int current_char_value = hex_letter_to_int(current_char);
            int second_char_value = hex_letter_to_int(second_char);

            // hex values use the last 4 bits. So in our final char we will use in total 8 bits (2 hex values).
            // The first 4 bits will be our first character and the last 4 will be our second character.
            // char = 1 byte
            // So our result char will be aaaabbbb. Where a is the bits of current_char and b is the bits of second_char
            char result = current_char_value << 4;
            // | is the OR operator. It will allow us to keep the first 4 bits as is. Then also insert the second character
            // to the last 4 bits.
            result |= second_char_value;
            putchar(result);
        }

        current_char = getchar();
    }

    return 0;
}