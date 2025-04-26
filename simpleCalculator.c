#include <stdio.h>

void menu();
void menu2();
int addFunction(int num1, int num2);
int subtractFunction(int num1, int num2);
int multiplicationFunction(int num1, int num2);
int divisionFunction(int num1, int num2);

int main()
{
    int choice, result = 0, isfirstime = 1;
    int inputnum1, inputnum2, inputnum3;

    menu();
    scanf("%d", &choice);

    while (choice != 5)
    {
        if (isfirstime == 1)
        {
            isfirstime = 0;

            switch (choice)
            {
                case 1:
                {
                    printf("Enter First number: ");
                    scanf("%d", &inputnum1);
                    printf("Enter Second number: ");
                    scanf("%d", &inputnum2);
                    result=(inputnum1, inputnum2);
                    break;
                }

                case 2:
                {
                    printf("Enter First number: ");
                    scanf("%d", &inputnum1);
                    printf("Enter Second number: ");
                    scanf("%d", &inputnum2);
                    result=subtractFunction(inputnum1, inputnum2);
                    break;
                }

                case 3:
                {
                    printf("Enter First number: ");
                    scanf("%d", &inputnum1);
                    printf("Enter Second number: ");
                    scanf("%d", &inputnum2);
                    result=multiplicationFunction(inputnum1, inputnum2);
                    break;
                }

                case 4:
                {
                    printf("Enter First number: ");
                    scanf("%d", &inputnum1);
                    printf("Enter Second number: ");
                    scanf("%d", &inputnum2);
                    result=divisionFunction(inputnum1, inputnum2);
                    break;
                }

                default:
                {
                    printf("Enter a Valid input");
                }
            }
        }

        else if (isfirstime = 0)
        {
            isfirstime = 0;

            switch (choice)
            {
                case 1:
                {
                    printf("Enter First number: ");
                    scanf("%d", &inputnum3);
                    result=addFunction(result, inputnum3);
                    break;
                }

                case 2:
                {
                    printf("Enter First number: ");
                    scanf("%d", &inputnum3);
                    result=subtractFunction(result, inputnum3);
                    break;
                }

                case 3:
                {
                    printf("Enter First number: ");
                    scanf("%d", &inputnum3);
                    result=multiplicationFunction(result, inputnum3);
                    break;
                }

                case 4:
                {
                    printf("Enter First number: ");
                    scanf("%d", &inputnum3);
                    result=divisionFunction(result, inputnum3);
                    break;
                }

                default:
                {
                    printf("Enter a Valid input");
                }
            }
        }
    }
    printf("Result = %d\n", result);
    return 0;
}

void menu()
{
    printf("Welcome to the Simple Calculator!\n");
    printf("\n\n********Menu********\n\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Exit\n\n");
    printf("Please select an option (1-6): ");
}

void menu2()
{
    printf("Do you want to continue\n");
    printf("\n\n********Menu********\n\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Exit and show result.\n\n");
    printf("Please select an option (1-6): ");
}

int addFunction(int num1, int num2)
{
    return num1 + num2;
}

int subtractFunction(int num1, int num2)
{
    return num1 - num2;
}

int multiplicationFunction(int num1, int num2)
{
    return num1 * num2;
}

int divisionFunction(int num1, int num2)
{
    return num1 / num2;
}