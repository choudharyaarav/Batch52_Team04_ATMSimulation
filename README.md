# ATM Simulation System

## Problem Statement

Develop a menu-driven ATM Simulation System using the C programming language. The program should allow a user to enter a PIN and perform basic ATM operations such as checking account balance, depositing money, withdrawing money, and exiting the system.

The system should allow a maximum of three PIN attempts and should prevent invalid deposits and withdrawals exceeding the available balance.

## Team Details

**Batch:** 52  
**Team Number:** 04

**Team Members:**
1. Aarav Choudhary
2. Paras Jain
3. Pankaj Singh

## Objectives

- To develop a simple ATM simulation using C.
- To implement PIN-based authentication.
- To perform basic ATM transactions.
- To validate deposit and withdrawal amounts.
- To apply fundamental C programming concepts in a practical program.

## Features

- PIN verification
- Maximum three PIN attempts
- Card blocking after three incorrect attempts
- Check account balance
- Deposit money
- Withdraw money
- Insufficient balance checking
- Invalid amount checking
- Menu-driven ATM interface
- Exit option

## Algorithm / Pseudocode

```text
START

Set PIN = 1234
Set Balance = 5000

Repeat for maximum 3 attempts:
    Ask user to enter PIN

    If entered PIN is correct:
        Display "PIN correct"
        Continue to ATM menu
    Otherwise:
        Display wrong PIN and remaining attempts

If all 3 attempts are incorrect:
    Display "Card blocked"
    STOP

Repeat:
    Display ATM Menu

    1. Check Balance
    2. Deposit Money
    3. Withdraw Money
    4. Exit

    Read user's choice

    If choice = 1:
        Display current balance

    If choice = 2:
        Ask for deposit amount

        If amount > 0:
            Add amount to balance
            Display new balance
        Otherwise:
            Display "Invalid amount"

    If choice = 3:
        Ask for withdrawal amount

        If amount <= 0:
            Display "Invalid amount"

        Else if amount > balance:
            Display "Insufficient balance"

        Otherwise:
            Subtract amount from balance
            Display remaining balance

    If choice = 4:
        Display "Thank you for using ATM"

    For any other choice:
        Display "Wrong choice"

Until choice = 4

STOP
```

## Flowchart

The flowchart of the ATM Simulation System represents the following process:

`Start → PIN Verification → ATM Menu → Select Operation → Check Balance / Deposit / Withdraw / Exit → Return to Menu → End`

A detailed flowchart can be included as `flowchart.png` in the final project repository.

## C Programming Concepts Used

- Variables and data types
- `printf()` and `scanf()`
- If-else statements
- For loop
- Do-while loop
- Switch-case statement
- Break statement
- Arithmetic operators
- Conditional statements
- User input and output

## How to Compile and Execute

### Using CLion

1. Open the project in CLion.
2. Open `ATM_Simulation.c`.
3. Build the project.
4. Click the **Run** button.
5. Enter PIN `1234`.
6. Select an operation from the ATM menu.

### Using Terminal

Compile:

```bash
clang ATM_Simulation.c -o ATM_Simulation
```

Run:

```bash
./ATM_Simulation
```

## Sample Test Cases

| Test Case | Input | Expected Output | Actual Output |
|---|---|---|---|
| Correct PIN | 1234 | PIN correct and ATM menu displayed | PIN correct and ATM menu displayed |
| Wrong PIN | Incorrect PIN | Wrong PIN and attempts left displayed | Wrong PIN and attempts left displayed |
| Three Wrong PINs | Wrong PIN 3 times | Card blocked | Card blocked |
| Check Balance | Option 1 | Rs 5000.00 | Rs 5000.00 |
| Deposit Money | Option 2, Rs 1000 | New balance Rs 6000.00 | New balance Rs 6000.00 |
| Invalid Deposit | Option 2, -500 | Invalid amount | Invalid amount |
| Withdraw Money | Option 3, Rs 500 | Remaining balance Rs 4500.00 | Remaining balance Rs 4500.00 |
| Excess Withdrawal | Option 3, Rs 10000 | Insufficient balance | Insufficient balance |
| Invalid Withdrawal | Option 3, -500 | Invalid amount | Invalid amount |
| Wrong Menu Choice | Option 9 | Wrong choice! Try again. | Wrong choice! Try again. |
| Exit | Option 4 | Thank you for using ATM! | Thank you for using ATM! |

## Conclusion

The ATM Simulation System successfully demonstrates basic ATM operations using C programming. The project applies loops, conditional statements, switch-case, input/output operations, and arithmetic calculations to create a simple menu-driven application.

This project is developed for educational purposes only.