# Java Basics: Input/Output and Control Structures

This guide covers fundamental concepts of input/output operations in Java along with essential control structures (loops and conditionals).

## Table of Contents
- [Input and Output](#input-and-output)
  - [Console Output](#console-output)
  - [Console Input](#console-input)
- [Control Structures](#control-structures)
  - [Conditional Statements](#conditional-statements)
  - [Loop Structures](#loop-structures)
- [Examples](#examples)

## Input and Output

### Console Output

Java provides several ways to output data to the console:

```java
// Print without a new line
System.out.print("Hello");

// Print with a new line
System.out.println("Hello World");

// Formatted output
System.out.printf("Number: %d, String: %s, Float: %.2f", 10, "Hello", 5.12345);
```

### Console Input

To read input from the console, we use the `Scanner` class:

```java
import java.util.Scanner;

public class InputExample {
    public static void main(String[] args) {
        // Create a Scanner object
        Scanner scanner = new Scanner(System.in);
        
        // Read a string
        System.out.print("Enter your name: ");
        String name = scanner.nextLine();
        
        // Read an integer
        System.out.print("Enter your age: ");
        int age = scanner.nextInt();
        
        // Read a double
        System.out.print("Enter your height (in meters): ");
        double height = scanner.nextDouble();
        
        System.out.println("Name: " + name + ", Age: " + age + ", Height: " + height + "m");
        
        // Close the scanner when done
        scanner.close();
    }
}
```

## Control Structures

### Conditional Statements

#### If-Else Statement

The `if-else` statement is used to execute different code blocks based on specified conditions.

```java
int number = 10;

// Simple if statement
if (number > 0) {
    System.out.println("The number is positive");
}

// If-else statement
if (number % 2 == 0) {
    System.out.println("The number is even");
} else {
    System.out.println("The number is odd");
}

// If-else-if ladder
if (number > 0) {
    System.out.println("The number is positive");
} else if (number < 0) {
    System.out.println("The number is negative");
} else {
    System.out.println("The number is zero");
}
```

#### Switch Statement

The `switch` statement is used to select one of many code blocks to be executed.

```java
int day = 3;
String dayName;

switch (day) {
    case 1:
        dayName = "Monday";
        break;
    case 2:
        dayName = "Tuesday";
        break;
    case 3:
        dayName = "Wednesday";
        break;
    case 4:
        dayName = "Thursday";
        break;
    case 5:
        dayName = "Friday";
        break;
    case 6:
        dayName = "Saturday";
        break;
    case 7:
        dayName = "Sunday";
        break;
    default:
        dayName = "Invalid day";
}

System.out.println("Day: " + dayName);
```

### Loop Structures

#### For Loop

The `for` loop is used when you know how many times you want to execute a block of code.

```java
// Basic for loop
for (int i = 0; i < 5; i++) {
    System.out.println("Iteration " + i);
}

// For loop with multiple variables
for (int i = 0, j = 10; i < j; i++, j--) {
    System.out.println("i = " + i + ", j = " + j);
}
```

#### For-Each Loop

The `for-each` loop is used to iterate through elements in an array or collection.

```java
// Array iteration
String[] fruits = {"Apple", "Banana", "Cherry", "Date", "Elderberry"};

for (String fruit : fruits) {
    System.out.println("Fruit: " + fruit);
}

// ArrayList iteration
import java.util.ArrayList;

ArrayList<Integer> numbers = new ArrayList<>();
numbers.add(1);
numbers.add(2);
numbers.add(3);

for (Integer number : numbers) {
    System.out.println("Number: " + number);
}
```

#### While Loop

The `while` loop executes a block of code as long as a specified condition is true.

```java
int count = 0;

while (count < 5) {
    System.out.println("Count: " + count);
    count++;
}
```

#### Do-While Loop

The `do-while` loop is similar to the while loop, but it executes the code block once before checking the condition.

```java
int count = 0;

do {
    System.out.println("Count: " + count);
    count++;
} while (count < 5);
```

## Examples

### Example 1: Calculator using Scanner and If-Else

```java
import java.util.Scanner;

public class Calculator {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        System.out.print("Enter first number: ");
        double num1 = scanner.nextDouble();
        
        System.out.print("Enter second number: ");
        double num2 = scanner.nextDouble();
        
        System.out.print("Enter an operator (+, -, *, /): ");
        char operator = scanner.next().charAt(0);
        
        double result;
        
        if (operator == '+') {
            result = num1 + num2;
        } else if (operator == '-') {
            result = num1 - num2;
        } else if (operator == '*') {
            result = num1 * num2;
        } else if (operator == '/') {
            if (num2 != 0) {
                result = num1 / num2;
            } else {
                System.out.println("Error: Division by zero");
                scanner.close();
                return;
            }
        } else {
            System.out.println("Error: Invalid operator");
            scanner.close();
            return;
        }
        
        System.out.println(num1 + " " + operator + " " + num2 + " = " + result);
        scanner.close();
    }
}
```

### Example 2: Finding Prime Numbers using Loops

```java
import java.util.Scanner;

public class PrimeNumbers {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        System.out.print("Enter the upper limit: ");
        int limit = scanner.nextInt();
        
        System.out.println("Prime numbers up to " + limit + ":");
        
        // Loop through numbers from 2 to the limit
        for (int number = 2; number <= limit; number++) {
            boolean isPrime = true;
            
            // Check if the number is prime
            for (int i = 2; i <= Math.sqrt(number); i++) {
                if (number % i == 0) {
                    isPrime = false;
                    break;
                }
            }
            
            // Print the number if it's prime
            if (isPrime) {
                System.out.print(number + " ");
            }
        }
        
        scanner.close();
    }
}
```

