#include <stdio.h>

// menu function decleared. This function display menu.
void menu();

// menusecond function decleared. This function display second menu.
void menusecond();

// add function decleared. This function add the given numbers.
int addFunction(int functionNum1, int functionNum2);

// subtract function decleared. This function subtract the given numbers.
int subtractFunction(int functionNum1, int functionNum2);

// multiplication function decleared. This function multiply the given numbers.
int multiplicationFunction(int functionNum1, int functionNum2);

// division function decleared. This function divide the given numbers.
int divisionFunction(int functionNum1, int functionNum2);

// main function starts here
int main()
{
    // this variable store the choice option from user input
    int choice;

    // this variable indicates is this program is running first time or not
    int isfirstime = 1;

    // this variable indicates is any artithematic operations is performed yet or not
    int calculationperformed = 0;

    // this variable stores result
    float result = 0;

    // this variable stores input from user
    float inputnum1, inputnum2;

    // greeting the user
    printf("\n\nWelcome to the Simple Calculator! (This calculator dosn't follow BODMASS rule).\n");

    // menu function call
    menu();

    // taking input form user
    scanf("%d", &choice);

    // this loop work till the choice value is not equal to 5
    while (choice != 5)
    {
        // this check is user performing first operation. this is used to check how many number input is required
        // if this "isfirstime" = 1 the we need 2 times input from user to perform operation
        if (isfirstime == 1)
        {
            // this switch case is use to call the function as per user requirements
            switch (choice)
            {
                // taking input from user and and calling add function and set the value of "isfirsttime" = 0 because now not need of 2 user inputs
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

                // taking input from user and and calling subtract function and set the value of "isfirsttime" = 0 because now not need of 2 user inputs
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

                // taking input from user and and calling multiply function and set the value of "isfirsttime" = 0 because now not need of 2 user inputs
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

                // taking input from user and and calling divide function and set the value of "isfirsttime" = 0 because now not need of 2 user inputs
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

                // taking input again because of invalid input
                default:
                {
                    isfirstime = 1;
                    printf("Invalid option!\a\nEnter a valid option\n\n");
                    menu();
                    scanf("%d", &choice);
                    continue;
                }
            }
        }

        // else this "isfirstime" = 0 the we need 1 times input from user to perform operation and the role of second
        // number is aquired by result
        else if (isfirstime == 0)
        {
            switch (choice)
            {
                // taking input from user and and calling add function
                case 1:
                {
                    printf("Enter a number: ");
                    scanf("%f", &inputnum1);
                    result=addFunction(result, inputnum1);
                    break;
                }

                // taking input from user and and calling subtract function
                case 2:
                {
                    printf("Enter a number: ");
                    scanf("%f", &inputnum1);
                    result=subtractFunction(result, inputnum1);
                    break;
                }

                // taking input from user and and calling multiply function
                case 3:
                {
                    printf("Enter a number: ");
                    scanf("%f", &inputnum1);
                    result=multiplicationFunction(result, inputnum1);
                    break;
                }

                // taking input from user and and calling divide function
                case 4:
                {
                    printf("Enter a number: ");
                    scanf("%f", &inputnum1);
                    result=divisionFunction(result, inputnum1);
                    break;
                }

                // taking input again because of invalid input
                default:
                {
                    printf("Invalid option!\a\nEnter a valid option\n");
                    menusecond();
                    scanf("%d", &choice);
                    continue;
                }
            }
        }

        // calculation is perfomed first time so it value is chenged to 1
        calculationperformed = 1;

        // asking input again
        menusecond();
        scanf("%d", &choice);
    }
    
    // this print result according to condition
    if (calculationperformed == 1)
    {
        printf("Result = %f\n", result);
    }
    else 
    {
        printf("You didn't perfomed any Calculation yet! so, Result = NULL\n");
    }
    
    return 0;
}

// menu function body/definition. This function display menu.
void menu()
{
    printf("\n********Menu********\n\n");
    printf("1. Addition.\n");
    printf("2. Subtraction.\n");
    printf("3. Multiplication.\n");
    printf("4. Division.\n");
    printf("5. Exit and show result.\n\n");
    printf("Please select an option: ");
}

// menusecond function body/definition. This function display second menu.
void menusecond()
{
    printf("\n\nDo you want to continue?\n");
    printf("\n********Menu********\n\n");
    printf("1. Addition.\n");
    printf("2. Subtraction.\n");
    printf("3. Multiplication.\n");
    printf("4. Division.\n");
    printf("5. Exit and show result\n\n");
    printf("Please select an option: ");
}

// add function body/definition. This function add the given numbers.
int addFunction(int functionNum1 , int functionNum2)
{
    return functionNum1 + functionNum2; // return result
}

// subtract function body/definition. This function subtract the given numbers.
int subtractFunction(int functionNum1 , int functionNum2)
{
    return functionNum1 - functionNum2; // return result
}

// multiplication function body/definition. This function multiply the given numbers.
int multiplicationFunction(int functionNum1 , int functionNum2)
{
    return functionNum1 * functionNum2; // return result
}

// division function body/definition. This function divide the given numbers.
int divisionFunction(int functionNum1 , int functionNum2)
{
    return functionNum1 / functionNum2; // return result
}