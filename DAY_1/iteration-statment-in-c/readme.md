# C Language Loops Guide

This guide explains the three main looping structures in C: `for`, `while`, and `do-while`. Each loop type has specific characteristics and optimal use cases.

## Table of Contents
- [Introduction to Loops](#introduction-to-loops)
- [For Loop](#for-loop)
- [While Loop](#while-loop)
- [Do-While Loop](#do-while-loop)
- [Choosing the Right Loop](#choosing-the-right-loop)
- [Examples](#examples)

## Introduction to Loops

Loops are control structures that allow you to execute a block of code repeatedly. They are essential for tasks like:
- Processing arrays or collections
- Iterating a specific number of times
- Executing code until a condition is met
- Working with user input

## For Loop

The `for` loop is ideal when you know exactly how many times you want to execute a block of code.

### Syntax

```c
for (initialization; condition; update) {
    // Code to be executed
}
```

### Components

- **Initialization**: Executed once before the loop begins (often used to initialize a counter variable)
- **Condition**: Evaluated before each iteration; loop continues while this is true
- **Update**: Executed after each iteration (typically increments or decrements the counter)

### Example

```c
for (int i = 0; i < 5; i++) {
    printf("%d\n", i);
}
```

This loop prints numbers from 0 to 4.

## While Loop

The `while` loop is used when you want to repeat a block of code as long as a condition is true, and you may not know in advance how many iterations will be needed.

### Syntax

```c
while (condition) {
    // Code to be executed
}
```

### Behavior

1. The condition is evaluated before each iteration
2. If the condition is false initially, the loop body will never execute
3. Loop continues until the condition becomes false

### Example

```c
int count = 0;
while (count < 5) {
    printf("%d\n", count);
    count++;
}
```

This loop also prints numbers from 0 to 4.

## Do-While Loop

The `do-while` loop is similar to the `while` loop, but it guarantees that the code block executes at least once, as the condition is checked after each iteration rather than before.

### Syntax

```c
do {
    // Code to be executed
} while (condition);
```

### Behavior

1. The code block executes once before checking the condition
2. The condition is evaluated after each iteration
3. Even if the condition is initially false, the loop body executes at least once

### Example

```c
int count = 0;
do {
    printf("%d\n", count);
    count++;
} while (count < 5);
```

This also prints numbers from 0 to 4, but would print 0 even if the initial condition were false.

## Choosing the Right Loop

| Loop Type | Best Used When | Example Use Case |
|-----------|----------------|------------------|
| `for`     | You know the exact number of iterations | Iterating through an array with known size |
| `while`   | You need to continue until a condition is false, might execute zero times | Reading file until EOF |
| `do-while` | You need to execute at least once, then continue while condition is true | Getting and validating user input |

## Examples

### For Loop Example: Summing an Array

```c
int numbers[] = {1, 2, 3, 4, 5};
int sum = 0;

for (int i = 0; i < 5; i++) {
    sum += numbers[i];
}
printf("Sum: %d\n", sum);  // Output: Sum: 15
```

### While Loop Example: Reading Until EOF

```c
char ch;
while ((ch = getchar()) != EOF) {
    putchar(ch);
}
```

### Do-While Example: Input Validation

```c
int number;
do {
    printf("Enter a positive number: ");
    scanf("%d", &number);
} while (number <= 0);
printf("You entered: %d\n", number);
```

## Key Differences

1. **Execution guarantee**:
   - `for` and `while` loops check the condition before execution (may execute zero times)
   - `do-while` loops check the condition after execution (always executes at least once)

2. **Structure**:
   - `for` loops combine initialization, condition, and update in one line
   - `while` loops only evaluate a condition
   - `do-while` loops evaluate the condition after executing the code block

3. **Best practices**:
   - Use `for` when you know the iteration count
   - Use `while` when you have only a termination condition
   - Use `do-while` when you need at least one iteration