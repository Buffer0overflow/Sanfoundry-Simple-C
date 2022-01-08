/*
 * C Program to Convert Binary to Octal
 */

#include <stdio.h>
int main()
{
    long int binarynum, octalnum = 0, j = 1, remainder;
    printf("Enter the value for  binary number: ");
    scanf("%ld", &binarynum);
    while (binarynum != 0)
    {
        remainder = binarynum % 10;
        octalnum = octalnum + remainder * j;
        j = j * 2;
        binarynum = binarynum / 10;
    }
    printf("Equivalent octal value: %lo\n", octalnum);

    /*
    Another way to get octal value for any binary is to use format specifiers in c like in the code below which will return same value as in above code.
    */
    long int bin = 0b1101; /* we used binary notation to write binary value (0b)xxxx - which might not be supported by some compilers */
    printf("Octal value for binary value %ld is %lo",bin,bin); /* binary value will be printed as Decimal value - no built-in binary format specifier for printf to use. */
    return 0;
}