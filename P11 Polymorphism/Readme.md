# P11: Polymorphism in C++

This directory contains C++ code examples that demonstrate the concept of **Polymorphism**, a fundamental principle of Object-Oriented Programming (OOP). Polymorphism allows objects of different classes to be treated as objects of a common base class, enabling more flexible and reusable code.

## Key Concepts

### 1. Compile-Time Polymorphism (Static Polymorphism)
- Achieved through **function overloading** and **operator overloading**.
- Behavior is resolved at compile time.

### 2. Run-Time Polymorphism (Dynamic Polymorphism)
- Achieved through **inheritance** and **virtual functions**.
- Behavior is resolved at runtime using **vtable** and **vptr** mechanisms.

## Code Structure

The code in this directory includes examples of:

- **Function Overloading**: Multiple functions with the same name but different parameter lists.
- **Operator Overloading**: Custom behavior for operators like `+`, `-`, etc.
- **Inheritance**: Base and derived class relationships.
- **Virtual Functions**: Enabling runtime polymorphism.
- **Abstract Classes and Interfaces**: Demonstrating pure virtual functions.

## How to Run

1. Clone the repository:
   ```bash
   git clone https://github.com/vaibhavgabani/Cpp.git
   cd Cpp/P11%20Polymorphism
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
- How function overloading works in practice.
- Using operator overloading to define custom behavior.
- Overriding base class methods in derived classes using virtual functions.
- Leveraging abstract classes for enforcing method implementation.

## Learning Outcomes

By studying and running the code in this directory, you will:
- Understand the difference between static and dynamic polymorphism.
- Learn how to implement polymorphism in C++.
- Appreciate the importance of polymorphism in creating extensible and maintainable software.

---
Feel free to explore, modify, and learn from the examples provided! If you encounter any issues or have suggestions for improvement, feel free to open an issue or contribute to the repository.
