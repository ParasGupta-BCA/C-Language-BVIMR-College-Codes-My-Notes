#include <stdio.h>
int factorial(int num)
{
    if (num == 1 || num == 0)
    {
        return 1;
    }
    else
    {
        return (num * factorial(num - 1));
    }
}
int main()
{
    int number;
    printf("Enter the number you want to do factorial\n");
    scanf("%d", &number);
    printf("the factorial of %d is %d\n", number, factorial(number));

    return 0;
}