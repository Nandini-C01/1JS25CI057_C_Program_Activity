#include <stdio.h>
int main()
{
    printf("Name: Nandini B C\n");
    printf("USN: 1JS25CI057\n");
    printf("Program: Simple Addition of Two Numbers\n");
    printf("----------------------------------------\n");
    int a, b, sum;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    sum = a + b;
    printf("Sum = %d\n", sum);
    return 0;
}
