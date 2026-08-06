#include <stdio.h>

int main()
{
    // Variables
    int age = 22;
    float pi = 3.14;
    char percentage = '%';

    printf("Age = %d\n", age);
    printf("Pi = %f\n", pi);
    printf("Percentage = %c\n", percentage);

    // Input
    int a, b;
    printf("Enter a: ");
    scanf("%d", &a);

    printf("Enter b: ");
    scanf("%d", &b);

    printf("Sum = %d\n", a + b);

    return 0;
}
