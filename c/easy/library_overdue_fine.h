#include <stdio.h>

int main(void)
{
    int n;
    float fine = 0;

    printf("Enter the number of days the book is overdue: ");
    scanf("%d", &n);

    if (n =< 0)
    {
        printf("Invalid input\n");
        return 1;
    }
else {
    for (int day = 1; day <= n; day++)
    {
        if (day <= 5)
        {
            fine += 2;
        }
        else if (day <= 10)
        {
            fine += 5;
        }
        else
        {
            fine += 10;
        }
    }

    printf("Fine: %.2f\n", fine);
}
    return 0;
}
