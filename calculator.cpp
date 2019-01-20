#include <stdio.h>
int main()
{
    float number1;
    float number2;
    float result;
    int choice;

    printf("Choose two numbers\n");
    scanf("%f %f", &number1, &number2);

    printf("Choose one of the operations\n1-Addition\n2-Subtraction\n3-Multiply\n4-Divide\n");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        result = (number1 + number2);
        break;

    case 2:
        result = (number1 - number2);
        break;

    case 3:
        result = (number1 * number2);
        break;

    case 4:
        result = (number1 / number2);
        break;
    }

    printf("The result is %f ", result);
}
