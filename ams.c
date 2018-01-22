#include <stdio.h>
void main()
{
    int number, originalNumber, remainder, result = 0;
    printf("Enter  the 3 digit integer: ");
    scanf("%d", &number);
    originalNumber = number;
    while (originalNumber != 0)
    {
        remainder = originalNumber%10;
        result += remainder*remainder*remainder;
        originalNumber /= 10;
    }
    if(result == number)
        printf("%d it is an Armstrong number.",number);
    else
        printf("%d it is not an Armstrong number.",number);
    return 0;
}
