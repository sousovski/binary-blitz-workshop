# Java Programming Examples: Loops and Problem Solving

This guide provides several example problems in Java demonstrating the use of loops and various problem-solving techniques.

## Table of Contents
- [Example 1: Fibonacci Sequence Generator](#example-1-fibonacci-sequence-generator)
- [Example 2: Palindrome Checker](#example-2-palindrome-checker)
- [Example 3: Armstrong Number Checker](#example-3-armstrong-number-checker)
- [Example 4: Pattern Printing using Nested Loops](#example-4-pattern-printing-using-nested-loops)
- [Example 5: Find All Factors of a Number](#example-5-find-all-factors-of-a-number)
- [Example 6: Sum of Digits Calculator](#example-6-sum-of-digits-calculator)

## Example 1: Fibonacci Sequence Generator

This program generates the Fibonacci sequence up to a user-specified number of terms.

```java
import java.util.Scanner;

public class FibonacciGenerator {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        // Get user input
        System.out.print("Enter the number of Fibonacci terms to generate: ");
        int n = scanner.nextInt();
        
        System.out.println("First " + n + " Fibonacci numbers:");
        
        int first = 0;
        int second = 1;
        
        // Handle special cases
        if (n >= 1) {
            System.out.print(first + " ");
        }
        if (n >= 2) {
            System.out.print(second + " ");
        }
        
        // Generate remaining Fibonacci numbers using a loop
        for (int i = 3; i <= n; i++) {
            int next = first + second;
            System.out.print(next + " ");
            
            // Update for next iteration
            first = second;
            second = next;
        }
        
        scanner.close();
    }
}
```

## Example 2: Palindrome Checker

This program checks whether a given string is a palindrome (reads the same forward and backward).

```java
import java.util.Scanner;

public class PalindromeChecker {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        // Get user input
        System.out.print("Enter a string: ");
        String input = scanner.nextLine();
        
        boolean isPalindrome = true;
        int length = input.length();
        
        // Check if the string is a palindrome using for loop
        for (int i = 0; i < length / 2; i++) {
            if (input.charAt(i) != input.charAt(length - i - 1)) {
                isPalindrome = false;
                break;
            }
        }
        
        if (isPalindrome) {
            System.out.println("\"" + input + "\" is a palindrome.");
        } else {
            System.out.println("\"" + input + "\" is not a palindrome.");
        }
        
        scanner.close();
    }
}
```

## Example 3: Armstrong Number Checker

This program checks whether a given number is an Armstrong number (the sum of its digits each raised to the power of the number of digits equals the number itself).

```java
import java.util.Scanner;

public class ArmstrongNumberChecker {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        // Get user input
        System.out.print("Enter a number: ");
        int number = scanner.nextInt();
        
        // Store the original number
        int originalNumber = number;
        
        // Count the number of digits
        int digits = 0;
        int temp = number;
        while (temp > 0) {
            temp /= 10;
            digits++;
        }
        
        // Compute sum of nth powers of digits
        int sum = 0;
        temp = number;
        
        while (temp > 0) {
            int digit = temp % 10;
            int power = 1;
            
            // Calculate power using a loop
            for (int i = 0; i < digits; i++) {
                power *= digit;
            }
            
            sum += power;
            temp /= 10;
        }
        
        // Check if it's an Armstrong number
        if (sum == originalNumber) {
            System.out.println(originalNumber + " is an Armstrong number.");
        } else {
            System.out.println(originalNumber + " is not an Armstrong number.");
        }
        
        scanner.close();
    }
}
```

## Example 4: Pattern Printing using Nested Loops

This program prints a pyramid pattern of stars based on the number of rows specified by the user.

```java
import java.util.Scanner;

public class PatternPrinting {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        // Get user input
        System.out.print("Enter the number of rows: ");
        int rows = scanner.nextInt();
        
        System.out.println("Pattern:");
        
        // Outer loop for rows
        for (int i = 1; i <= rows; i++) {
            // Inner loop for spaces
            for (int j = 1; j <= rows - i; j++) {
                System.out.print(" ");
            }
            
            // Inner loop for stars
            for (int k = 1; k <= 2 * i - 1; k++) {
                System.out.print("*");
            }
            
            System.out.println();
        }
        
        scanner.close();
    }
}
```

## Example 5: Find All Factors of a Number

This program finds and displays all factors of a user-specified positive integer.

```java
import java.util.Scanner;

public class FactorFinder {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        // Get user input
        System.out.print("Enter a positive integer: ");
        int number = scanner.nextInt();
        
        System.out.println("Factors of " + number + ":");
        
        // Find and print all factors
        for (int i = 1; i <= number; i++) {
            if (number % i == 0) {
                System.out.print(i + " ");
            }
        }
        
        scanner.close();
    }
}
```

## Example 6: Sum of Digits Calculator

This program calculates the sum of all digits in a user-specified number.

```java
import java.util.Scanner;

public class SumOfDigits {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        // Get user input
        System.out.print("Enter a number: ");
        int number = scanner.nextInt();
        
        int originalNumber = number;
        int sum = 0;
        
        // Calculate sum of digits using a while loop
        while (number > 0) {
            int digit = number % 10;
            sum += digit;
            number /= 10;
        }
        
        System.out.println("Sum of digits in " + originalNumber + " = " + sum);
        
        scanner.close();
    }
}
```
