# Java Strings

This README provides a comprehensive guide to the `String` class in Java, including creation, manipulation, and commonly used methods.

## Introduction to Strings

In Java, `String` is a class that represents a sequence of characters. It is widely used in Java programming and comes with a rich set of methods for string manipulation.

Key characteristics:
- Strings are immutable (once created, cannot be changed)
- String literals are stored in the String Pool


## Creating Strings

```java
// Using string literal (preferred)
String greeting = "Hello, World!";

// Using new keyword
String message = new String("Hello, World!");

// From character array
char[] charArray = {'H', 'e', 'l', 'l', 'o'};
String fromChars = new String(charArray);

// Empty string
String empty = "";
```

## String Properties

### Length

```java
String text = "Hello";
int length = text.length();  // 5
```

### Checking for Empty Strings

```java
String text = "";
boolean isEmpty = text.isEmpty();  // true
```

## String Comparison

### Equality

```java
String str1 = "Hello";
String str2 = "Hello";
String str3 = new String("Hello");

// Content comparison
boolean isEqual1 = str1.equals(str2);                // true
boolean isEqual2 = str1.equals(str3);                // true

// Reference comparison 
boolean isSameRef1 = (str1 == str2);  // true (both point to same String Pool object)
boolean isSameRef2 = (str1 == str3);  // false (different objects, str3 not in pool)
```

## String Manipulation

### Case Conversion

```java
String text = "Hello, World!";

String uppercase = text.toUpperCase();    // "HELLO, WORLD!"
String lowercase = text.toLowerCase();    // "hello, world!"
```

### Character and Substring Extraction

```java
String text = "Hello, World!";

// Single character
char firstChar = text.charAt(0);  // 'H'

// Substring
String sub1 = text.substring(7);     // "World!"
String sub2 = text.substring(0, 5);  // "Hello"

### Trimming

```java
// Trim whitespace
String padded = "  Hello  ";
String trimmed = padded.trim();  // "Hello"
```

### Splitting 

```java
// Split
String csvText = "apple,banana,orange";
String[] fruits = csvText.split(",");  // ["apple", "banana", "orange"]

String multiline = "Line1\nLine2\nLine3";
String[] lines = multiline.split("\n");  // ["Line1", "Line2", "Line3"]
```


## String Performance

Since strings are immutable, operations that appear to modify a string actually create new string objects. For frequent modifications, use `StringBuilder` or `StringBuffer`.

### StringBuilder

```java
// Mutable, not thread-safe, better performance
StringBuilder builder = new StringBuilder("Hello");
builder.append(", World");
builder.append('!');
builder.insert(5, " there");
builder.replace(0, 5, "Hi");
builder.delete(3, 9);
String result = builder.toString();  // "Hi World!"

// Chaining operations
String chainResult = new StringBuilder()
    .append("Hello")
    .append(", ")
    .append("World")
    .toString();  // "Hello, World"
```

### StringBuffer

```java
// Mutable, thread-safe, synchronized methods
StringBuffer buffer = new StringBuffer("Hello");
buffer.append(", World!");
String result = buffer.toString();  // "Hello, World!"
```

## String Formatting

```java
// Using String.format
String formatted1 = String.format("Hello, %s! You have %d new messages.", "John", 5);
// "Hello, John! You have 5 new messages."

// Using formatted (Java 15+)
String formatted2 = "Current position: (%d, %d)".formatted(10, 20);
// "Current position: (10, 20)"

// Common format specifiers
// %s - String
// %d - Integer
// %f - Float/Double
// %b - Boolean
// %c - Character
// %n - Platform-specific line separator

// Precision and width
String moneyFormat = String.format("$%,.2f", 1234.56);  // "$1,234.56"
String paddedNumber = String.format("%05d", 42);        // "00042"
```

## Java String Pool

Java maintains a special memory area called the "String Pool" that stores string literals to improve memory efficiency.

```java
String s1 = "hello";          // Creates "hello" in the String Pool
String s2 = "hello";          // Reuses the same "hello" from the Pool
String s3 = new String("hello");  // Creates new object outside the Pool
```
