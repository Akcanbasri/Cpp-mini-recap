# Qt Console Application Example

## Overview

This project is a Qt console application demonstrating various C++ concepts and Qt functionalities. It covers enums, structs, functions (including overloading), flow control, arrays, operators, input/output, loops, and more.

## Project Structure

- **main.cpp**: The main file containing the implementation of various C++ and Qt concepts.

## Features

1. **Enums and Structs**:
   - Demonstrates the use of enums for colors and structs for product and laptop definitions.
   
2. **Function Overloading**:
   - Includes overloaded functions named `test` that accept different parameters (int, QString, bool).

3. **Flow Control and Error Handling**:
   - Functions like `calc`, `catYears`, and `dogYears` showcase error handling and flow control.

4. **Passing by Value and Reference**:
   - Function `testVal` demonstrates how to pass parameters by value and reference.

5. **Input and Output**:
   - Uses `cin` for input and `cout` along with `qInfo`, `qWarning`, `qCritical` for output.

6. **Loops and Conditions**:
   - Various loop constructs (`while`, `do-while`, and `for`) and conditional statements (`if-else`, `switch-case`) are illustrated.

7. **Memory Management**:
   - Demonstrates creating objects on the heap and managing memory manually.

## How to Run

1. **Prerequisites**:
   - Ensure you have Qt installed on your machine.

2. **Build the Project**:
   - Open the project in Qt Creator or use the command line to navigate to the project directory and run:
     ```sh
     qmake
     make
     ```

3. **Run the Application**:
   - Execute the compiled binary from the command line or within Qt Creator.

## Code Explanation

### Enums and Structs

- **Enum for Colors**:
  ```cpp
  enum Colors { black, red, green, blue };
  ```
- **Struct for Product**:
  ```cpp
  struct product {
      int weight;
      double value;
      Colors color;
  };
  ```

### Function Overloading

- Different versions of the `test` function:
  ```cpp
  void test() { qInfo() << "Hello From test Function"; }
  void test(QString name) { qInfo() << "Name:" << name; }
  void test(int age) { qInfo() << "Age:" << age; }
  void test(bool isActive) {
      if (isActive) qInfo() << "Yes it is active";
      else qInfo() << "No it is not active";
  }
  ```

### Flow Control and Error Handling

- `calc` function for flow control and error checking:
  ```cpp
  int calc(int offset, int age) {
      if (offset == 0) qFatal("offset can't be zero!");
      if (age <= 0 || age > 120) qFatal("Invalid Age!");
      return offset * age;
  }
  ```

### Passing by Value and Reference

- `testVal` demonstrates passing by value and reference:
  ```cpp
  void testVal(int x, int &y) {
      x = x * 10;
      y = y * 100;
      qInfo() << "test x value:" << x;
      qInfo() << "test y value:" << y;
  }
  ```

### Input and Output

- Using `cin` and `cout` for input and output:
  ```cpp
  cout << "Hello" << endl;
  qInfo() << "Hello";
  
  int age;
  qInfo() << "Enter Your Age:";
  cin >> age;
  if (age <= 100 && age >= 18) qInfo() << "Your Age is" << age;
  else qInfo() << "This is not a valid age";
  ```

### Loops and Conditions

- Different loop constructs and conditions:
  ```cpp
  while (start <= max) {
      qInfo() << "While =" << start;
      start++;
  }
  
  do {
      qInfo() << "Do =" << doStart;
      doStart++;
  } while (doStart <= max);
  
  for (int var = 0; var <= userMax; ++var) {
      qInfo() << "your number= " << var;
  }
  ```

### Memory Management

- Creating and managing objects on the heap:
  ```cpp
  QObject* get_ptr(QString name) {
      QObject *o = new QObject();
      o->setObjectName(name);
      return o;
  }
  
  QObject *o3 = get_ptr("ByPointer");
  qInfo() << o3->objectName();
  ```

## Conclusion

This project serves as a comprehensive example of various fundamental concepts in C++ and Qt. It is designed to help beginners understand and practice these concepts through practical implementation.
