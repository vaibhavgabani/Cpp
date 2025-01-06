# P15: Templates in C++

This directory contains C++ code examples that illustrate the concept of **Templates**, a powerful feature of the language that allows for generic programming. Templates enable writing flexible and reusable code that works with any data type.

## Key Concepts

### 1. Function Templates
- Allow the creation of functions that can operate on different data types.
- Example:
  ```cpp
  template <typename T>
  T add(T a, T b) {
      return a + b;
  }
  ```

### 2. Class Templates
- Enable the creation of generic classes.
- Example:
  ```cpp
  template <class T>
  class Box {
      T value;
  public:
      Box(T val) : value(val) {}
      T getValue() { return value; }
  };
  ```

### 3. Template Specialization
- Allows customizing the behavior of a template for a specific data type.
- Example:
  ```cpp
  template <>
  class Box<char> {
      char value;
  public:
      Box(char val) : value(val) {}
      char getValue() { return toupper(value); }
  };
  ```

## Code Examples

The examples in this directory cover:

- Creating and using function templates.
- Implementing class templates.
- Demonstrating partial and full template specialization.
- Understanding how templates enable code reusability.

## How to Run

1. Clone the repository:
   ```bash
   git clone https://github.com/vaibhavgabani/Cpp.git
   cd Cpp/P15%20Templates
   ```

2. Compile the code using a C++ compiler like `g++`:
   ```bash
   g++ main.cpp -o main
   ```

3. Execute the program:
   ```bash
   ./main
   ```

## Expected Output

The examples demonstrate:
- Using generic functions for various data types.
- Creating and manipulating generic classes.
- Customizing template behavior for specific scenarios.
- Observing the flexibility and efficiency of templates in C++.

## Learning Objectives

By exploring these examples, you will:
- Understand how templates work in C++.
- Learn to use function and class templates effectively.
- Gain insights into template specialization and its applications.
- Develop reusable and type-safe code.

## References

- [C++ Templates Documentation](https://cplusplus.com/doc/oldtutorial/templates/)
- [GeeksforGeeks: Templates in C++](https://www.geeksforgeeks.org/templates-cpp/)

---
Feel free to experiment with the examples and adapt them to your needs. If you encounter any issues or have ideas for improvement, don't hesitate to contribute to the repository or open an issue.

