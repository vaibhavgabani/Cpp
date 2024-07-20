# Classes and Objects in C++

## Introduction

In C++, classes and objects are fundamental concepts that enable object-oriented programming (OOP). A class is a blueprint for creating objects, providing the structure to define properties (attributes) and behaviors (methods) of the objects. An object is an instance of a class.

### Class Definition

A class is defined using the `class` keyword, followed by the class name and a set of curly braces enclosing its members. Members of a class can be variables (data members) or functions (member functions). Access specifiers like `public`, `private`, and `protected` control the visibility of these members.

### Object Creation

An object is created from a class using the class name followed by the object name. Multiple objects can be created from a single class.

### Example

Below is a simple example demonstrating the use of classes and objects in C++.

1. **Class Definition**: Define a class with public data members (like `brand`, `model`, and `year`) and a public member function (like `displayDetails`).
2. **Object Creation**: In the `main` function, create an object of the class.
3. **Accessing Members**: Access the public members of the class and assign values. Call the member function to print the details of the object.

### Access Specifiers

- **Public**: Members declared as public are accessible from outside the class.
- **Private**: Members declared as private are only accessible within the class.
- **Protected**: Members declared as protected are accessible within the class and by derived classes.

### Conclusion

Understanding classes and objects is crucial for writing modular and maintainable C++ code. By defining classes, you can encapsulate data and functions together, promoting better data management and code organization.

For more detailed examples and advanced topics, refer to the official C++ documentation or tutorials.
