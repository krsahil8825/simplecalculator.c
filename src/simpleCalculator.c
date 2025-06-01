// including libray
#include <stdio.h>
#include <stdlib.h>

// this function to clear the screen
void clearScreen();

// this function display header and instructions
void displayHeader();

// this to display option for supported operator
void chooseOperator();

// this to display print statement for enter a number
void enterNumber();

// this to display print not valid option if user enter wrong operator and chooseOperator function
void notValidOption();

// this help to perform add operation
int add(int number1, int number2);

// this help to perform subtract operation
int subtract(int number1, int number2);

// this help to perform multiply operation
int multiply(int number1, int number2);

// this help to perform division operation
int division(int number1, int number2);

// main function
int main()
{
    // variable stores option
    int option;

    // variable stores input number
    float inputnumber;

    // variable stores result
    float result;

    // clear the screen
    clearScreen();

    // display header and instructions
    displayHeader();

    // display user instruction
    printf("\n----User Instruction----\n");
    printf("1. Press '1' for addition\n2. Press '2' for subtraction\n3. Press '3' for multiplication\n");
    printf("4. Press '4' for division\n5. Press '5' for exit\n");
    printf("-------Let's Start!-------\n\n");

    // taking number input from user
    enterNumber();
    scanf("%f", &inputnumber);

    // assigning inputnumber value to result because this is first number and result is NULL
    result = inputnumber;

    // calling chooseOperator function to choose operator
    chooseOperator();
    scanf("%d", &option);

    // loop start to perform operation until user choose exit option
    // option 5 is exit option
    while (option != 5)
    {
        switch (option)
        {
        // taking number input from user and calling add function and display result
        case 1:
        {
            enterNumber();
            scanf("%f", &inputnumber);
            result = add(result, inputnumber);
            break;
        }

        // taking number input from user and calling subtract function and display result
        case 2:
        {
            enterNumber();
            scanf("%f", &inputnumber);
            result = subtract(result, inputnumber);
            break;
        }

        // taking number input from user and calling multiply function and display result
        case 3:
        {
            enterNumber();
            scanf("%f", &inputnumber);
            result = multiply(result, inputnumber);
            break;
        }

        // taking number input from user and calling division function and display result
        case 4:
        {
            enterNumber();
            scanf("%f", &inputnumber);
            result = division(result, inputnumber);
            break;
        }

        // invalid operator option so ask it again
        default:
        {
            notValidOption();
            scanf("%d", &option);
            continue; // this help to skip the loop once
        }
        }

        // it help to perform calculation operation unlimited times
        // takes opetor input from user
        clearScreen();   // clear the screen after each operation
        displayHeader(); // display header and instructions
        printf("Current Result = %.2f\n", result);

        chooseOperator();
        scanf("%d", &option);
    }

    clearScreen();   // clear the screen after exiting the loop
    displayHeader(); // display header and instructions

    // show result after exiting the loop
    printf("Result = %.2f\n\n", result);

    // credit and src
    printf("Created By Kumar Sahil. \nView Sorce Code- https://github.com/krsahil8825/SimpleCalculator.c \nCopyRight (c) 2025 Kumar Sahil | All Rights Reserved.\n\n");

    printf("Press any character (i.e. A-Z, a-z, any symbol or number) to Close the terminal automaticly.\a\n");
    scanf("%d", &option);

    return 0;
}

// this function to clear the screen
void clearScreen()
{
#ifdef _WIN32 // Check if the OS is Windows
    system("cls");
#else // For Linux/macOS
    system("clear");
#endif
}

// this function display Intro and instructions
void displayHeader()
{
    printf("\a***** Welcome To SimpleCalculator.c *****\n\n");
    printf("This Calculator not follows the rule of BODMAS\n");
    printf("Developed By Kumar Sahil. GitHub- https://github.com/krsahil8825\n\n");
}

// this to display option for supported operator
void chooseOperator()
{
    printf("Enter: 1 for addition, 2 for subtraction, 3 for multiplication, 4 for division and 5 for exit.\nEnter a operator: ");
}

// this to display print statement for enter a number
void enterNumber()
{
    printf("Enter a number: ");
}

// this to display print not valid option if user enter wrong operator and chooseOperator function
void notValidOption()
{
    printf("\aEnter a valid operator!\n");
    chooseOperator();
}

// this help to perform add operation
int add(int number1, int number2)
{
    return number1 + number2; // return result
}

// this help to perform subtract operation
int subtract(int number1, int number2)
{
    return number1 - number2; // return result
}

// this help to perform multiply operation
int multiply(int number1, int number2)
{
    return number1 * number2; // return result
}

// this help to perform division operation
int division(int number1, int number2)
{
    return number1 / number2; // return result
}