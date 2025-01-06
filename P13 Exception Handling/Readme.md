# P13: Exception Handling in C++

This directory contains C++ code examples that demonstrate the concept of **Exception Handling**, which is used to handle runtime errors and ensure the program continues to operate gracefully.

## Key Concepts

### 1. Basics of Exception Handling
- **Try Block**: Contains code that might throw an exception.
- **Catch Block**: Handles the exception.
- **Throw Statement**: Used to signal an exception.

### 2. Standard Exceptions
- C++ provides a set of standard exception classes like `std::exception`, `std::runtime_error`, `std::logic_error`, etc.

### 3. Custom Exceptions
- You can define your own exception classes for specific error scenarios.

### 4. Exception Safety
- Ensures resources are cleaned up properly in the face of exceptions.
- Use RAII (Resource Acquisition Is Initialization) to manage resources safely.

## Code Structure

The code in this directory includes examples of:

- Basic try-catch blocks.
- Throwing and catching exceptions of different types.
- Using standard exception classes.
- Creating and using custom exception classes.
- Ensuring exception safety in resource management.

## How to Run

1. Clone the repository:
   ```bash
   git clone https://github.com/vaibhavgabani/Cpp.git
   cd Cpp/P13%20Exception%20Handling
   ```

2. Compile the code using a C++ compiler like `g++`:
   ```bash
   g++ main.cpp -o main
   ```

3. Run the executable:
   ```bash
   ./main
   ```

## Example Output

The examples will demonstrate:
- How exceptions are thrown and caught.
- The use of multiple catch blocks to handle specific exceptions.
- Using `std::exception` to handle generic exceptions.
- How custom exceptions enhance code readability and maintainability.

## Learning Outcomes

By studying and running the code in this directory, you will:
- Understand how exception handling works in C++.
- Learn to use both standard and custom exceptions effectively.
- Ensure your code is robust and resource-safe in the face of runtime errors.
- Develop practices to manage error handling in a clean and maintainable way.

## References

- [C++ Documentation on Exception Handling](https://cplusplus.com/doc/tutorial/exceptions/)
- [GeeksforGeeks: Exception Handling in C++](https://www.geeksforgeeks.org/exception-handling-c/)

---
Feel free to explore, modify, and learn from the examples provided! If you encounter any issues or have suggestions for improvement, feel free to open an issue or contribute to the repository.

