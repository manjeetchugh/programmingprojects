#include <stdio.h>

int main()
{
    int num, originalNum, remainder;
    int digits = 0;
    int sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    originalNum = num;

    // Count the number of digits
    while (originalNum != 0)
    {
        originalNum /= 10;
        digits++;
    }

    originalNum = num;

    // Calculate the Armstrong sum
    while (originalNum != 0)
    {
        remainder = originalNum % 10;

        int power = 1;

        for (int i = 0; i < digits; i++)
        {
            power *= remainder;
        }

        sum += power;
        originalNum /= 10;
    }

    if (sum == num)
    {
        printf("%d is an Armstrong Number.\n", num);
    }
    else
    {
        printf("%d is not an Armstrong Number.\n", num);
    }

    return 0;
}
