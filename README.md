# SimpleCalculator.c

A beginner-friendly console-based calculator written in C. It performs basic arithmetic operations like addition, subtraction, multiplication, and division, and operates in a continuous loop until the user chooses to exit. This calculator **does not follow BODMAS rules**, meaning operations are performed in the order of input.

[![License: Apache 2.0](https://img.shields.io/badge/License-Apache_2.0-blue.svg)](https://opensource.org/licenses/Apache-2.0)

---

## Features

- Simple and interactive CLI calculator
- Supports:
  - Addition
  - Subtraction
  - Multiplication
  - Division
- Clear screen after every operation
- Continuous operations until manually exited
- Platform-independent screen clearing (Windows/Linux/macOS)
- Custom user prompts for better guidance

---

## Usage Instructions

1. **Compile the program:**

```bash
gcc SimpleCalculator.c -o SimpleCalculator.exe
```

2. **Run the program:**

```bash
./SimpleCalculator.exe
```

3. **Follow on-screen prompts:**

   - Enter the first number.
   - Choose an operation.
   - Enter the next number.
   - Repeat until you're done.
   - Press `5` to exit the program and display the final result.

---

## Notes

- The calculator executes operations sequentially; it does **not** apply precedence rules like BODMAS.
- Only valid numeric inputs should be provided.
- In case of invalid operator input, the program prompts the user again.

---

## Code Structure Overview

- `clearScreen()` – Clears the console screen depending on the operating system.
- `chooseOperator()` – Displays the operator menu.
- `enterNumber()` – Prompts user to enter a number.
- `notValidOption()` – Displays a message for invalid input and re-prompts.
- `add()`, `subtract()`, `multiply()`, `division()` – Functions to perform respective operations.

---

## Example

```
***** Welcome To SimpleCalculator.c *****

This Calculator not follows the rule of BODMAS <br/>
Developed By Kumar Sahil. GitHub- https://github.com/krsahil8825

----User Instruction----
1. Press '1' for addition
2. Press '2' for subtraction
3. Press '3' for multiplication
4. Press '4' for division
5. Press '5' for exit
-------Let's Start!-------

Enter a number: 10
Enter a operator: 1
Enter a number: 5
Current Result = 15.00
...
Result = 35.00
Created By Kumar Sahil.
GitHub - https://github.com/krsahil8825/SimpleCalculator.c
```

---

## Contributing

Contributions and suggestions to improve this project are welcome. Feel free to fork the repository and submit pull requests.

---

## License

This project is licensed under the [Apache License 2.0](https://www.apache.org/licenses/LICENSE-2.0).

---

## Author

**Originally created by [Kumar Sahil](https://github.com/krsahil8825) (2025)** | All rights reserved.

**Read Notice before Using in Your Project [Notice](/NOTICE)**
