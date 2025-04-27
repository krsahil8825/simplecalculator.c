// including libray
#include <stdio.h>

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

    // user greeting and instruction
    printf("\n\a***** Welcome To SimpleCalculator.c *****\n\n");
    printf("This Calculator not follows the rule of BODMAS\n");
    printf("\n----User Instruction----\n");
    printf("1. Press '1' for addition\n2. Press '2' for subtraction\n3. Press '3' for multiplication\n");
    printf("4. Press '4' for division\n5. Press '5' for show result\n6. Press '6' for exit\n");
    printf("-------Let's Start!-------\n\n");

    // taking number input from user
    enterNumber();
    scanf("%f", &inputnumber);

    // assigning inputnumber value to result because this is first number and result is NULL
    result = inputnumber;

    // calling chooseOperator function to choose operator
    chooseOperator();
    scanf("%d", &option);

    // loop start to perform operation
    while (option != 6)
    {
        switch (option)
        {
        // taking number input from user and calling add function and display result
        case 1:
        {
            enterNumber();
            scanf("%f", &inputnumber);
            result = add(result, inputnumber);
            printf("Result = %.2f\n", result);
            break;
        }

        // taking number input from user and calling subtract function and display result
        case 2:
        {
            enterNumber();
            scanf("%f", &inputnumber);
            result = subtract(result, inputnumber);
            printf("Result = %.2f\n", result);
            break;
        }

        // taking number input from user and calling multiply function and display result
        case 3:
        {
            enterNumber();
            scanf("%f", &inputnumber);
            result = multiply(result, inputnumber);
            printf("Result = %.2f\n", result);
            break;
        }

        // taking number input from user and calling division function and display result
        case 4:
        {
            enterNumber();
            scanf("%f", &inputnumber);
            result = division(result, inputnumber);
            printf("Result = %.2f\n", result);
            break;
        }

        // showing result
        case 5:
        {
            printf("Result = %.2f\n", result);
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
        chooseOperator();
        scanf("%d", &option);
    }

    // show result after exiting the loop
    printf("Result = %.2f\n\n", result);

    // credit and src
    printf("Created By Kumar Sahil.\nGitHub- https://github.com/krsahil8825/SimpleCalculator.c\n\a");

    printf ("Press any character to Close the program completly.\n");
    scanf("%d", &option);

    return 0;
}

// this to display option for supported operator
void chooseOperator()
{
    printf("Enter: 1 for addition, 2 for subtraction, 3 for multiplication, 4 for division, 5 for show result, 6 for exit.\nEnter a operator: ");
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