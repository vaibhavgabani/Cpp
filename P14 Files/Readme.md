# P14: File Handling in C++

This directory contains C++ code examples that illustrate the concept of **File Handling**, a crucial feature for managing persistent storage through reading and writing operations.

## Key Concepts

### 1. File Streams
- **ifstream**: For reading from files.
- **ofstream**: For writing to files.
- **fstream**: For both reading and writing.

### 2. File Operations
- **Opening Files**: Files can be opened during stream object creation or using the `open()` method.
- **Closing Files**: Always use `close()` to release system resources after operations.
- **File Modes**: Control the behavior of file access (e.g., read, write, append, binary). Examples include:
  - `ios::in`: Read mode.
  - `ios::out`: Write mode.
  - `ios::app`: Append mode.
  - `ios::binary`: Binary mode.

### 3. Error Handling
- Handle common file errors gracefully:
  - Use `fail()` to check if a file operation failed.
  - Use `eof()` to check for the end of a file.

## Code Examples

The examples in this directory cover:

- Reading from and writing to text files.
- Appending data to existing files.
- Handling binary files for structured data.
- Implementing robust error handling for file operations.

## How to Run

1. Clone the repository:
   ```bash
   git clone https://github.com/vaibhavgabani/Cpp.git
   cd Cpp/P14%20Files
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
- Reading content from a file and displaying it in the console.
- Writing user inputs or program outputs to a file.
- Appending additional content to existing files.
- Managing errors like missing files or insufficient permissions effectively.

## Learning Objectives

By exploring these examples, you will:
- Master the basics of file I/O operations in C++.
- Understand the distinction between text and binary file processing.
- Learn best practices for error handling in file operations.

---
Feel free to experiment with the examples and adapt them to your needs. If you encounter any issues or have ideas for improvement, don't hesitate to contribute to the repository or open an issue.
