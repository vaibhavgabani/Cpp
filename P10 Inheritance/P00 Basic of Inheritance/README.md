# Inheritance in C++

## Introduction

Inheritance is a fundamental concept in object-oriented programming (OOP) that allows a class (derived class) to inherit properties and behaviors from another class (base class). This promotes code reusability and establishes a natural hierarchy between classes.

## Types of Inheritance

### 1. Single Inheritance

Single inheritance is when a class (derived class) inherits from one base class. This is the simplest form of inheritance.

### 2. Multiple Inheritance

Multiple inheritance allows a derived class to inherit from more than one base class. This means a derived class can inherit attributes and methods from multiple base classes.

### 3. Multilevel Inheritance

Multilevel inheritance occurs when a class is derived from another derived class. This creates a multi-tiered hierarchy.

### 4. Hierarchical Inheritance

Hierarchical inheritance is when multiple derived classes inherit from a single base class. This means a single base class serves as a parent class for multiple derived classes.

### 5. Hybrid Inheritance

Hybrid inheritance is a combination of two or more types of inheritance. It typically involves a mix of hierarchical, multiple, and multilevel inheritance to form a more complex hierarchy.

## Modes of Inheritance

### 1. Public Inheritance

In public inheritance, the public and protected members of the base class become public and protected members of the derived class, respectively. Private members of the base class are not accessible directly by the derived class.

### 2. Protected Inheritance

In protected inheritance, the public and protected members of the base class become protected members of the derived class. Private members of the base class remain inaccessible.

### 3. Private Inheritance

In private inheritance, the public and protected members of the base class become private members of the derived class. Private members of the base class are not accessible directly by the derived class.

### Inheritance Modes Table

The following table summarizes the access control for members in the derived class based on the inheritance mode:

| Base Class  | Derived Class: Private Mode | Derived Class: Protected Mode | Derived Class: Public Mode |
|-------------|-----------------------------|-------------------------------|----------------------------|
| Private     | Not Inherited               | Not Inherited                 | Not Inherited              |
| Protected   | Private                     | Protected                     | Protected                  |
| Public      | Private                     | Protected                     | Public                     |

## Conclusion

Understanding inheritance and its types is crucial for efficient object-oriented programming in C++. Inheritance not only promotes code reuse but also helps in establishing a clear and logical hierarchy between classes. By choosing the appropriate type and mode of inheritance, you can design your classes in a way that is both efficient and maintainable.

For more detailed information and examples, refer to the official C++ documentation and OOP resources.
