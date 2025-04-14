# Java Arrays

This README provides a comprehensive guide to arrays in Java, including creation, manipulation, and the most commonly used array methods.

## Introduction to Arrays

An array in Java is a container object that holds a fixed number of values of a single type. Arrays are used to store multiple values in a single variable, instead of declaring separate variables for each value.

Key characteristics:
- Fixed size (cannot be changed after creation)
- All elements must be of the same data type
- Zero-indexed (the first element is at index 0)
- Objects in Java (even primitive arrays are treated as objects)    

## Creating Arrays

### Declaration Syntax

```java
// Declaration
dataType[] arrayName;  // Preferred way
// OR
dataType arrayName[];  // Valid but less common

// Examples
int[] numbers;         // Array of integers
String[] names;        // Array of strings
```

### Initialization

```java
// Method 1: Declaration and allocation
int[] numbers = new int[5];  // Creates array of 5 integers with default values (0)

// Method 2: Declaration, allocation and initialization
int[] numbers = new int[] {1, 2, 3, 4, 5};  // Creates and initializes array

// Method 3: Shorthand initialization (array literal)
int[] numbers = {1, 2, 3, 4, 5};  // Simplified version of method 2

// Default values
// For numeric types: 0
// For boolean: false
// For reference types (including String): null
```

## Accessing and Modifying Array Elements

Array elements are accessed using their index (position) within the array:

```java
int[] numbers = {10, 20, 30, 40, 50};

// Accessing elements
int firstNumber = numbers[0];  // Gets 10
int thirdNumber = numbers[2];  // Gets 30

// Modifying elements
numbers[1] = 25;  // Changes the second element from 20 to 25
```

## Array Properties

### Length

The `length` property returns the size of the array:

```java
int[] numbers = {1, 2, 3, 4, 5};
int arraySize = numbers.length;  // 5
```

Note: `length` is a property, not a method, so it doesn't use parentheses.

## Common Array Operations

### Iterating Through Arrays

```java
// Using standard for loop
int[] numbers = {1, 2, 3, 4, 5};
for (int i = 0; i < numbers.length; i++) {
    System.out.println(numbers[i]);
}

// Using enhanced for loop (for-each)
for (int number : numbers) {
    System.out.println(number);
}

```

## The Arrays Utility Class

Java provides the `java.util.Arrays` class with many useful static methods for array manipulation:

### Sorting

```java
int[] numbers = {5, 2, 9, 1, 3};
Arrays.sort(numbers);  // Sorts array in-place to {1, 2, 3, 5, 9}

// Sort part of an array
Arrays.sort(numbers, 1, 4);  // Sorts only elements at index 1, 2, and 3
```

### Comparing Arrays

```java
int[] array1 = {1, 2, 3};
int[] array2 = {1, 2, 3};
int[] array3 = {3, 2, 1};

boolean equals1 = Arrays.equals(array1, array2);  // true
boolean equals2 = Arrays.equals(array1, array3);  // false
```

### Filling Arrays

```java
int[] numbers = new int[5];
Arrays.fill(numbers, 10);  // Fills entire array with 10: {10, 10, 10, 10, 10}

// Fill a range
Arrays.fill(numbers, 1, 4, 20);  // Fills indices 1 to 3 with 20: {10, 20, 20, 20, 10}
```

### Converting Arrays to String

```java
int[] numbers = {1, 2, 3, 4, 5};
String arrayAsString = Arrays.toString(numbers);  // "[1, 2, 3, 4, 5]"
```

## Common Pitfalls

1. **Array indexing starting at 0**: The first element is at index 0, not 1
2. **ArrayIndexOutOfBoundsException**: Accessing index outside the array bounds
3. **Reference vs. Value**: Copying an array reference doesn't copy the data
4. **NullPointerException**: Trying to use an array that hasn't been initialized
5. **Fixed size**: Arrays cannot be resized after creation

```java
// Common errors
int[] numbers = new int[5];
// numbers[5] = 10;  // Error: ArrayIndexOutOfBoundsException
// int size = numbers.length();  // Error: length is a property, not a method
// numbers = numbers + new int[5];  // Error: Cannot concatenate arrays this way
```
