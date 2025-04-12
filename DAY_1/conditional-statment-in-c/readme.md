# C Control Flow Statements

This README provides a comprehensive explanation of control flow statements in C programming language, covering conditional statements (`if`, `else if`, `else`) and loop control statements (`break`, `continue`).

## Table of Contents
- [Conditional Statements](#conditional-statements)
  - [if Statement](#if-statement)
  - [if-else Statement](#if-else-statement)
  - [if-else if-else Statement](#if-else-if-else-statement)
  - [Nested if Statements](#nested-if-statements)
  - [The Ternary Operator](#the-ternary-operator)
- [Loop Control Statements](#loop-control-statements)
  - [break Statement](#break-statement)
  - [continue Statement](#continue-statement)
- [Examples](#examples)
  - [Practical if-else Examples](#practical-if-else-examples)
  - [Practical break Examples](#practical-break-examples)
  - [Practical continue Examples](#practical-continue-examples)

## Conditional Statements

Conditional statements allow your program to make decisions and execute different code blocks based on different conditions.

### if Statement

The `if` statement is the most basic conditional statement. It executes a block of code only if the specified condition evaluates to true.

**Syntax:**
```c
if (condition) {
    // code to be executed if condition is true
}
```

**Example:**
```c
int age = 20;

if (age >= 18) {
    printf("You are eligible to vote.\n");
}
```

### if-else Statement

The `if-else` statement provides an alternative code block to execute when the condition is false.

**Syntax:**
```c
if (condition) {
    // code to be executed if condition is true
} else {
    // code to be executed if condition is false
}
```

**Example:**
```c
int number = 15;

if (number % 2 == 0) {
    printf("%d is even.\n", number);
} else {
    printf("%d is odd.\n", number);
}
```

### if-else if-else Statement

The `if-else if-else` chain allows testing multiple conditions sequentially.

**Syntax:**
```c
if (condition1) {
    // code to be executed if condition1 is true
} else if (condition2) {
    // code to be executed if condition1 is false and condition2 is true
} else if (condition3) {
    // code to be executed if condition1 and condition2 are false and condition3 is true
} else {
    // code to be executed if all conditions are false
}
```

**Example:**
```c
int score = 75;

if (score >= 90) {
    printf("Grade: A\n");
} else if (score >= 80) {
    printf("Grade: B\n");
} else if (score >= 70) {
    printf("Grade: C\n");
} else if (score >= 60) {
    printf("Grade: D\n");
} else {
    printf("Grade: F\n");
}
```

### Nested if Statements

`if` statements can be nested inside other `if` or `else` blocks.

**Example:**
```c
int age = 25;
int hasID = 1; // 1 represents true

if (age >= 18) {
    if (hasID) {
        printf("You can enter the venue.\n");
    } else {
        printf("You need to show an ID to enter.\n");
    }
} else {
    printf("You must be at least 18 years old to enter.\n");
}
```

### The Ternary Operator

The ternary operator `? :` provides a shorthand way to write simple if-else statements.

**Syntax:**
```c
condition ? expression1 : expression2;
```

**Example:**
```c
int age = 20;
char* status = (age >= 18) ? "Adult" : "Minor";
printf("Status: %s\n", status);
```

## Loop Control Statements

Loop control statements alter the normal execution of loops.

### break Statement

The `break` statement terminates the innermost enclosing loop or switch statement.

**Use Cases:**
1. Exit a loop early when a specific condition is met
2. Terminate a case in a switch statement
3. Exit an infinite loop

**Example in a for loop:**
```c
for (int i = 1; i <= 10; i++) {
    if (i == 5) {
        break; // Exit the loop when i equals 5
    }
    printf("%d ", i);
}
// Output: 1 2 3 4
```

**Example in a while loop:**
```c
int i = 1;
while (i <= 10) {
    if (i == 5) {
        break; // Exit the loop when i equals 5
    }
    printf("%d ", i);
    i++;
}
// Output: 1 2 3 4
```

**Example in a switch statement:**
```c
char grade = 'B';

switch (grade) {
    case 'A':
        printf("Excellent!\n");
        break;
    case 'B':
        printf("Good job!\n");
        break;
    case 'C':
        printf("Well done\n");
        break;
    default:
        printf("Invalid grade\n");
}
```

### continue Statement

The `continue` statement skips the rest of the current iteration and jumps to the next iteration of the loop.

**Use Cases:**
1. Skip specific iterations based on a condition
2. Avoid nested conditional code within loops

**Example in a for loop:**
```c
for (int i = 1; i <= 10; i++) {
    if (i % 2 == 0) {
        continue; // Skip even numbers
    }
    printf("%d ", i);
}
// Output: 1 3 5 7 9
```

**Example in a while loop:**
```c
int i = 0;
while (i < 10) {
    i++;
    if (i % 2 == 0) {
        continue; // Skip even numbers
    }
    printf("%d ", i);
}
// Output: 1 3 5 7 9
```

## Examples

### Practical if-else Examples

**Example 1: Simple Login Validation**
```c
char username[50] = "admin";
char password[50] = "password123";
char inputUser[50] = "admin";
char inputPass[50] = "password123";

if (strcmp(username, inputUser) == 0 && strcmp(password, inputPass) == 0) {
    printf("Login successful!\n");
} else {
    printf("Invalid username or password!\n");
}
```

**Example 2: Temperature Classifier**
```c
float temp = 25.5;

if (temp < 0) {
    printf("Freezing weather\n");
} else if (temp >= 0 && temp < 10) {
    printf("Very cold weather\n");
} else if (temp >= 10 && temp < 20) {
    printf("Cold weather\n");
} else if (temp >= 20 && temp < 30) {
    printf("Normal temperature\n");
} else if (temp >= 30 && temp < 40) {
    printf("Hot weather\n");
} else {
    printf("Very hot weather\n");
}
```

### Practical break Examples

**Example 1: Search in an Array**
```c
int numbers[] = {10, 20, 30, 40, 50, 60};
int size = 6;
int searchValue = 30;
int found = 0;

for (int i = 0; i < size; i++) {
    if (numbers[i] == searchValue) {
        printf("Value %d found at index %d\n", searchValue, i);
        found = 1;
        break; // Exit loop once the value is found
    }
}

if (!found) {
    printf("Value %d not found in the array\n", searchValue);
}
```

**Example 2: Menu-driven Program**
```c
int choice;
int running = 1;

while (running) {
    printf("\nMenu:\n");
    printf("1. Option 1\n");
    printf("2. Option 2\n");
    printf("3. Option 3\n");
    printf("4. Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    
    switch (choice) {
        case 1:
            printf("You selected Option 1\n");
            break;
        case 2:
            printf("You selected Option 2\n");
            break;
        case 3:
            printf("You selected Option 3\n");
            break;
        case 4:
            printf("Exiting the program...\n");
            running = 0;
            break;
        default:
            printf("Invalid choice. Please try again.\n");
    }
}
```

### Practical continue Examples

**Example 1: Processing Items with Exceptions**
```c
int items[] = {1, 2, -3, 4, -5, 6, 7, -8, 9, 10};
int size = 10;

printf("Processing only positive items: ");
for (int i = 0; i < size; i++) {
    if (items[i] < 0) {
        continue; // Skip negative numbers
    }
    printf("%d ", items[i]);
}
// Output: Processing only positive items: 1 2 4 6 7 9 10
```

**Example 2: Avoiding Division by Zero**
```c
int numerators[] = {10, 8, 6, 0, 4, 2};
int divisors[] = {2, 4, 0, 2, 0, 2};
int size = 6;

for (int i = 0; i < size; i++) {
    if (divisors[i] == 0) {
        printf("Cannot divide %d by zero. Skipping...\n", numerators[i]);
        continue; // Skip division by zero
    }
    printf("%d / %d = %d\n", numerators[i], divisors[i], numerators[i] / divisors[i]);
}
```