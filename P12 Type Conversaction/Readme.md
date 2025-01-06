# P12: Type Conversion in C++

This directory contains C++ code examples that demonstrate the concept of **Type Conversion**, which refers to converting data from one type to another. C++ supports both implicit and explicit type conversions.

## Key Concepts

### 1. Implicit Type Conversion (Type Promotion)
- Performed automatically by the compiler.
- Examples include:
  - Converting `int` to `float`.
  - Converting `char` to `int`.

### 2. Explicit Type Conversion (Type Casting)
- Performed manually by the programmer.
- Types include:
  - **C-style Casts**: `(type) expression`
  - **Function-style Casts**: `type(expression)`
  - **C++ Cast Operators**:
    - `static_cast`
    - `dynamic_cast`
    - `const_cast`
    - `reinterpret_cast`

## Code Structure

The code in this directory includes examples of:

- Implicit conversions during operations.
- Explicit conversions using C-style and function-style casts.
- Safe and unsafe type casts using C++ cast operators.
- Handling conversion-related issues like precision loss.

## How to Run

1. Clone the repository:
   ```bash
   git clone https://github.com/vaibhavgabani/Cpp.git
   cd Cpp/P12%20Type%20Conversaction
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
- How implicit type conversion occurs in expressions.
- The difference between safe and unsafe casts.
- Scenarios where explicit type casting is necessary.
- Using `dynamic_cast` for runtime type identification in polymorphism.

## Learning Outcomes

By studying and running the code in this directory, you will:
- Understand when and why implicit conversions occur.
- Learn how to use C++ casting operators effectively and safely.
- Appreciate the trade-offs between different casting approaches.
- Identify potential pitfalls, such as data loss or undefined behavior.

---
Feel free to explore, modify, and learn from the examples provided! If you encounter any issues or have suggestions for improvement, feel free to open an issue or contribute to the repository.
