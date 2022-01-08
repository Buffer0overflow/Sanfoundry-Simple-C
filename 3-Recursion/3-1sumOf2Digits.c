// find sum of 2 digits using recursion

#include <stdio.h>

int sum(int d)
{

    if (d != 0)
    {

        return (d % 10 + sum(d / 10));
    }
    else
    {
        return 0;
    }
}
int main()
{

    int num, result;
    printf("Enter a number to find sum of its digit: \n");
    scanf(" %d", &num);
    result = sum(num);
    printf("Sum of digits in %d is %d", num, result);
    return 0;
};