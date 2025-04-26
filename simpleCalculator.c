#include <stdio.h>

void menu();
void menu2();
void menu3();
void menu4();
int addFunction(int num1, int num2);
int subtractFunction(int num1, int num2);
int multiplicationFunction(int num1, int num2);
int divisionFunction(int num1, int num2);

int main()
{
    int choice, isfirstime = 1;
    float result = 0;
    float inputnum1, inputnum2, inputnum3;

    menu();
    scanf("%d", &choice);

    while (choice != 5)
    {
        if (isfirstime == 1)
        {
            switch (choice)
            {
                case 1:
                {
                    isfirstime = 0;
                    printf("Enter First number: ");
                    scanf("%f", &inputnum1);
                    printf("Enter Second number: ");
                    scanf("%f", &inputnum2);
                    result=(inputnum1, inputnum2);
                    break;
                }

                case 2:
                {
                    isfirstime = 0;
                    printf("Enter First number: ");
                    scanf("%f", &inputnum1);
                    printf("Enter Second number: ");
                    scanf("%f", &inputnum2);
                    result=subtractFunction(inputnum1, inputnum2);
                    break;
                }

                case 3:
                {
                    isfirstime = 0;
                    printf("Enter First number: ");
                    scanf("%f", &inputnum1);
                    printf("Enter Second number: ");
                    scanf("%f", &inputnum2);
                    result=multiplicationFunction(inputnum1, inputnum2);
                    break;
                }

                case 4:
                {
                    isfirstime = 0;
                    printf("Enter First number: ");
                    scanf("%f", &inputnum1);
                    printf("Enter Second number: ");
                    scanf("%f", &inputnum2);
                    result=divisionFunction(inputnum1, inputnum2);
                    break;
                }

                default:
                {
                    isfirstime = 1;
                    printf("Invalid option!\a");
                    menu2();
                    scanf("%d", &choice);
                    continue;
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
                    scanf("%f", &inputnum3);
                    result=addFunction(result, inputnum3);
                    break;
                }

                case 2:
                {
                    printf("Enter First number: ");
                    scanf("%f", &inputnum3);
                    result=subtractFunction(result, inputnum3);
                    break;
                }

                case 3:
                {
                    printf("Enter First number: ");
                    scanf("%f", &inputnum3);
                    result=multiplicationFunction(result, inputnum3);
                    break;
                }

                case 4:
                {
                    printf("Enter First number: ");
                    scanf("%f", &inputnum3);
                    result=divisionFunction(result, inputnum3);
                    break;
                }

                default:
                {
                    printf("Invalid option!\a");
                    menu4();
                    scanf("%d", &choice);
                    continue;
                }
            }
        }
        menu3();
        scanf("%d", &choice);
    }
    if(result != 0)
    {
        printf("Result = %f", result);
    }
    return 0;
}

void menu()
{
    printf("\n\nWelcome to the Simple Calculator!\n");
    printf("\n********Menu********\n\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Exit\n\n");
    printf("Please select an option (1-6): ");
}

void menu2()
{
    printf("\n\nEnter a valid option!\n");
    printf("\n********Menu********\n\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Exit\n\n");
    printf("Please select an option (1-6): ");
}

void menu3()
{
    printf("\n\nDo you want to continue?\n");
    printf("\n********Menu********\n\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Exit and show result.\n\n");
    printf("Please select an option (1-6): ");
}

void menu4()
{
    printf("\n\nEnter a valid option!\nDo you want to continue?\n");
    printf("\n********Menu********\n\n");
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