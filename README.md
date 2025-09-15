# C++ Programming Lessons - Complete Learning Path

[![Language](https://img.shields.io/badge/language-C%2B%2B20-blue.svg)](https://en.cppreference.com/)
[![Platform](https://img.shields.io/badge/platform-macOS%20%7C%20Linux%20%7C%20Windows-lightgrey.svg)]()
[![License](https://img.shields.io/badge/license-MIT-green.svg)](LICENSE)

A comprehensive, hands-on C++ learning repository organized as a structured course. Each lesson is self-contained with practical examples you can compile and run independently. Progresses from beginner fundamentals to advanced concepts using modern C++20+ standards.

## 🎯 Project Overview

This repository contains **13 comprehensive modules** covering essential C++ programming concepts:
- **120+ practical examples** across different difficulty levels
- **Self-contained lessons** - each `.cpp` file compiles independently
- **Modern C++ practices** (C++20+ standards)
- **Real-world applications** and exercises
- **Progressive difficulty** from basics to advanced OOP concepts

## 🚀 Quick Start

### Prerequisites
```bash
# macOS (recommended)
xcode-select --install                    # Apple Clang compiler
brew install cmake llvm clang-format     # Optional tools

# Verify installation
clang++ --version
```

### Compile & Run Any Lesson
```bash
# Create build directory
mkdir -p build

# Compile with modern C++ standards and warnings
clang++ -std=c++20 -Wall -Wextra -Wpedantic -g introduction/Test.cpp -o build/test
./build/test

# With sanitizers (debug mode)
clang++ -std=c++20 -g -O0 -fsanitize=address,undefined pointer/startPointer.cpp -o build/pointer_demo
./build/pointer_demo
```

## 📚 Learning Path & Course Structure

### 🌟 Module 1: Introduction & Fundamentals
**Folder: `introduction/`**
- `Test.cpp` - Hello World and basic I/O
- `Test2.cpp` - Variables and data types
- `operator.cpp` - Arithmetic, logical, and comparison operators

**Key Concepts**: Basic syntax, cout/cin, variables, operators, type system

### 🔀 Module 2: Conditional Logic
**Folder: `condition/`**
- `if.cpp` - Basic if statements
- `if_else.cpp` - If-else branching
- `if_else_if.cpp` - Multi-branch conditions
- `switch.cpp` - Switch-case statements
- `TernaryOperator.cpp` - Conditional operator (?:)
- `nested_statement.cpp` - Nested conditional logic

**Key Concepts**: Decision making, branching logic, control flow

### 🔄 Module 3: Loops & Iteration
**Folder: `loop/`**
- `for_loop.cpp` - For loop fundamentals
- `while_loop.cpp` - While loop patterns
- `do_while_loop.cpp` - Do-while loops
- `nested_loop.cpp` & `nested_loop_2.cpp` - Nested iteration
- `goto_label.cpp` - Label and goto (educational)
- `pow.cpp` & `pow_2.cpp` - Mathematical calculations
- `sum_data.cpp` - Data processing examples
- `worker.cpp` - Real-world loop applications

**Key Concepts**: Iteration, nested loops, loop control, algorithms

### 🛠️ Module 4: Functions & Modularity
**Folder: `function/`**
- `return_none_param.cpp` - Functions without parameters
- `return_has_param.cpp` - Functions with parameters
- `none_return_param.cpp` & `none_return_has_param.cpp` - Void functions
- `function_PassByValue.cpp` & `function_PassByValue1.cpp` - Pass by value
- `function_PassByReferent.cpp` - Pass by reference
- `overloading.cpp` & `overloading2.cpp` - Function overloading
- `recursive_function.cpp` & `recursive_function2.cpp` - Recursion
- `persion.cpp` & `product.cpp` - Real-world examples

**Key Concepts**: Function design, parameter passing, recursion, overloading

### 📊 Module 5: Arrays & Data Collections
**Folder: `array/`**
- `hello.cpp` - Basic array operations
- `test.cpp` - Array fundamentals
- `TwoArra.cpp` & `arrayTwoDimension.cpp` - 2D arrays
- `userTwoDimension.cpp` - Interactive 2D array input
- `ThreeDimansion.cpp` - 3D array operations
- `persion.cpp` & `employee.cpp` - Object arrays
- `product.cpp` & `catogory.cpp` - Real-world data structures

**Key Concepts**: Array manipulation, multi-dimensional arrays, data organization

### 🎯 Module 6: Pointers & Memory Management
**Folder: `pointer/`**
- `startPointer.cpp` - Pointer fundamentals
- `levelPointer.cpp` - Multi-level pointers
- `pointerArray.cpp` - Pointer-array relationship
- `mallocPointer.cpp` & `mallocPointerTwo.cpp` - Dynamic allocation
- `callocOne.cpp` - Calloc memory allocation
- `realloc.cpp` - Memory reallocation
- `functionPointer.cpp` & `functionPointerRedom.cpp` - Function pointers

**Key Concepts**: Memory management, dynamic allocation, pointer arithmetic

### 🏗️ Module 7: Structures & Custom Types
**Folder: `structure/`**
- `helloStructure.cpp` - Basic struct definition
- `nestedStruct.cpp` - Nested structures
- `bookArray.cpp` & `employeeArray.cpp` - Arrays of structures
- `objectPointer.cpp` - Pointer to structures
- `objectStructArray.cpp` - Complex data organization
- `typedefStructure.cpp` - Type aliases
- `errorStudent.cpp` - Error handling examples

**Key Concepts**: Data encapsulation, custom types, structured programming

### 🔧 Module 8: Templates & Generic Programming
**Folder: `template/`**
- `function_template.cpp` - Function templates
- `struct_template.cpp` - Class templates
- `two_template.cpp` - Multiple template parameters

**Key Concepts**: Generic programming, code reusability, template specialization

### ⚠️ Module 9: Exception Handling
**Folder: `exception/`**
- `exception.cpp` - Try-catch blocks, throwing exceptions

**Key Concepts**: Error handling, exception safety, robust programming

### 📂 Module 10: File Input/Output
**Folder: `file/`**
- `text_file_read.cpp` & `text_file_wirte.cpp` - Text file operations
- `text_user_read.cpp` & `text_user_wirte.cpp` - User data file handling
- `bainary_product_read.cpp` & `bainary_product_write.cpp` - Binary file operations
- `bainary_woker_write.cpp` - Binary worker data storage

**Key Concepts**: File streams, text vs binary files, file I/O operations

### 🏛️ Module 11: Object-Oriented Programming (OOP)
**Folder: `oop/`**

#### Encapsulation (`oop/encapsulation/`)
- `class_object.cpp` - Basic class and object creation
- `contructor.cpp` & `destructor.cpp` - Constructor and destructor methods
- `set_get.cpp` - Getter and setter methods
- `keyword_this.cpp` - Using the 'this' pointer
- `friend_class.cpp` & `friend_function.cpp` - Friend relationships
- `static_method.cpp` - Static methods and variables
- `inline_method.cpp` - Inline function optimization
- `nested_class.cpp` - Classes within classes
- `pointer.cpp` & `pointer_two.cpp` - Object pointers

#### Inheritance (`oop/inheritance/`)
- Advanced inheritance concepts and implementations

#### Polymorphism (`oop/polymorphism/`)
- Virtual functions and polymorphic behavior

**Key Concepts**: Classes, objects, encapsulation, inheritance, polymorphism

### 🔄 Module 12: Unions & Memory Optimization
**Folder: `union/`**
- `test.cpp` - Basic union operations
- `object.cpp` - Union with objects

**Key Concepts**: Memory-efficient data types, unions vs structs

### 🚀 Module 13: Real-World Projects
**Folder: `project/`**
- `project.cpp` - Main project demonstration
- `product.cpp` - Product management system
- `Studens.cpp` - Student management system
- `money.cpp` - Financial calculations
- `Delivery_Fee.cpp` - Delivery cost calculator
- `Hybrid_Inheritance.cpp` - Advanced OOP inheritance example
- `color.h` - Color utility header

**Key Concepts**: Project organization, real-world applications, system integration

## 🛠️ Development Setup

### Recommended Compiler Flags
```bash
# Development (with warnings)
-std=c++20 -Wall -Wextra -Wpedantic -Wconversion -Wshadow -g

# Debug (with sanitizers)
-std=c++20 -g -O0 -fsanitize=address,undefined -fno-omit-frame-pointer

# Release (optimized)
-std=c++20 -O2 -DNDEBUG
```

### Optional: CMake Project Setup
Create a unified build system:

```cmake
# CMakeLists.txt
cmake_minimum_required(VERSION 3.20)
project(cpp_lessons LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Add compiler warnings
add_compile_options(-Wall -Wextra -Wpedantic)

# Example executable
add_executable(lesson_runner src/main.cpp)
```

## 📖 Learning Recommendations

### Beginner Path (Modules 1-3)
1. Start with `introduction/` - understand basic syntax
2. Master `condition/` - learn decision making
3. Practice `loop/` - understand iteration patterns

### Intermediate Path (Modules 4-6)  
4. Study `function/` - learn modular programming
5. Explore `array/` - understand data collections
6. Master `pointer/` - learn memory management

### Advanced Path (Modules 7-9)
7. Build with `structure/` - create custom types
8. Generalize with `template/` - write reusable code
9. Handle errors with `exception/` - robust programming

### Expert Path (Modules 10-13)
10. Learn `file/` - master file input/output operations
11. Dive into `oop/` - master object-oriented programming concepts
12. Optimize with `union/` - understand unions and memory optimization
13. Build `project/` - apply your skills in real-world projects

## 🎓 Project Ideas & Exercises

### Beginner Projects
- **Calculator** (modules 1-3): Basic arithmetic with menu system
- **Grade Manager** (modules 4-5): Student grade calculations and arrays
- **Simple Games** (loops + conditions): Number guessing, tic-tac-toe

### Intermediate Projects
- **Contact Manager** (structures + arrays): Store and search contacts
- **File Processor** (pointers + functions): Read/write text files
- **Data Analyzer** (templates): Generic statistical functions

### Advanced Challenges
- **Memory Pool** (pointers + templates): Custom memory allocator
- **Expression Parser** (all concepts): Mathematical expression evaluator
- **Mini Database** (structures + templates + exceptions): Data storage system

### Expert Projects
- **Chat Application** (OOP + File I/O): Real-time messaging app
- **Image Viewer** (OOP + Templates): View and edit images
- **Custom Shell** (pointers + file I/O): Build a simple command-line shell

## 🔧 Troubleshooting

### Common Issues
```bash
# Compiler not found
xcode-select --install

# Permission denied
chmod +x ./build/program_name

# Memory errors
# Recompile with: -fsanitize=address,undefined -g
```

### Code Style
- Use `clang-format` for consistent formatting
- Enable `clang-tidy` for static analysis
- Follow modern C++ best practices (RAII, smart pointers)

## 📈 Progress Tracking

- [ ] **Module 1**: Introduction & Fundamentals
- [ ] **Module 2**: Conditional Logic  
- [ ] **Module 3**: Loops & Iteration
- [ ] **Module 4**: Functions & Modularity
- [ ] **Module 5**: Arrays & Data Collections
- [ ] **Module 6**: Pointers & Memory Management
- [ ] **Module 7**: Structures & Custom Types
- [ ] **Module 8**: Templates & Generic Programming
- [ ] **Module 9**: Exception Handling
- [ ] **Module 10**: Object-Oriented Programming (OOP)
- [ ] **Module 11**: File Input/Output
- [ ] **Module 12**: Unions & Bit Fields
- [ ] **Module 13**: Project Examples

## 🤝 Contributing

Feel free to:
- Add new examples to existing modules
- Create additional modules (STL, OOP, Concurrency)
- Improve existing code with modern C++ features
- Add unit tests for examples

## 📚 Additional Resources

- [cppreference.com](https://en.cppreference.com/) - Comprehensive C++ reference
- [C++ Core Guidelines](https://isocpp.github.io/CppCoreGuidelines/) - Best practices
- [Compiler Explorer](https://godbolt.org/) - Online compiler and assembly viewer

## 📄 License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.

---

**Happy Learning!** 🚀 Start with `introduction/Test.cpp` and work your way through each module systematically.
