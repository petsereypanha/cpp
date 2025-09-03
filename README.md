# C++ Learning Guide

A concise, modern, progressive path to learn C++ from zero to intermediate/early-advanced, focused on good habits and modern standards (C++17/20+).

## 1. Mindset & Tooling
- Install a recent compiler: GCC ≥ 12, Clang ≥ 15, or MSVC (latest).
- Always compile with warnings + pedantic + security flags.
  Example:
  g++ -std=c++20 -Wall -Wextra -Wpedantic -Wconversion -Wshadow -Werror -O2 -g file.cpp -o app
- Use a formatter (clang-format) and a static analyzer (clang-tidy) early.
- Prefer incremental learning with lots of tiny experiments.

## 2. First Program
```cpp
#include <iostream>
int main() {
    std::cout << "Hello, C++!\n";
    return 0; // optional in modern C++
}
```
Compile & run:
```
g++ -std=c++20 hello.cpp -o hello
./hello
```

## 3. Core Building Blocks
| Topic | Key Points | Gotchas |
|-------|------------|---------|
| Types | int, long, unsigned, float, double, bool, char | Size/platform differences |
| Initialization | Prefer brace `{}` | Avoid narrowing: `int x{3.14}; // error` |
| const | Read-only intent | Use everywhere possible |
| constexpr | Compile-time evaluation | Enables optimization |
| auto | Type deduction | Keep readability |
| enum class | Scoped enums | No implicit to int |
| using | Type aliases | Prefer over typedef |

## 4. Variables & Initialization
Prefer modern initialization:
```cpp
int a{42};        // value init
std::string s{"hi"};
auto sum = a + 8; // deduced
```
Avoid uninitialized variables.

## 5. Operators (see introduction/operator.cpp)
Categories:
- Arithmetic: + - * / %
- Comparison: == != < > <= >=
- Logical: && || ! (short-circuit)
- Bitwise: & | ^ ~ << >>
- Assignment & compound: = += -= ...
- Increment/decrement: ++ -- (prefer pre- over post- when return value unused)
- Special: sizeof, typeid, ?:, ::, .* ->*

## 6. Control Flow
```cpp
if (auto v = read(); v > 0) { /* init-statement in if (C++17) */ }
for (int i = 0; i < n; ++i) {}
for (auto& x : vec) {}
while (cond) {}
```
Use switch with enum class for clarity.

## 7. Functions
```cpp
auto add(int a, int b) -> int { return a + b; }
[[nodiscard]] int compute(); // warn if ignored
```
Pass by const reference for large objects, by value for small trivially copyable data.

## 8. References & Pointers
- Reference: must bind at init; never null.
- Pointer: can be null; needs lifetime management.
- Prefer references unless you need reseating, optional null, or array semantics.

Smart pointers:
- unique_ptr<T>: sole ownership.
- shared_ptr<T>: shared ownership; use sparingly.
- weak_ptr<T>: non-owning observer.

## 9. Memory & RAII
RAII (Resource Acquisition Is Initialization): tie lifetime of resource to object.
Avoid new/delete directly in most application code. Wrap in smart pointers or standard containers.

## 10. Value Semantics & Copy/Move
Rule of Zero: Prefer types that don’t need custom destructor / copy / move.
If you implement one of destructor, copy/move ctor/assignment => consider all (Rule of Five).

## 11. Classes & Structs
```cpp
class Vector2 {
public:
    double x{0}, y{0};
    Vector2() = default;
    Vector2(double x, double y): x{x}, y{y} {}
    [[nodiscard]] double length() const;
private:
    // invariants go here
};
```
Use explicit on single-arg constructors to avoid implicit conversions.

## 12. Templates & Generic Programming
Function template:
```cpp
template <typename T>
T max_value(const T& a, const T& b) { return (b < a) ? a : b; }
```
Class template, concepts (C++20):
```cpp
#include <concepts>
template <std::integral I>
I add(I a, I b) { return a + b; }
```
Prefer concepts over SFINAE for clarity.

## 13. Standard Library Essentials
Containers: vector, array, string, unordered_map, map, set, optional, variant, tuple.
Algorithms: std::for_each, std::transform, std::sort, std::accumulate, ranges (C++20).
Iterators: abstraction over traversal; prefer range-based for.
Chrono: strong typed time.
Filesystem: <filesystem> for paths, iteration.

## 14. Error Handling
- Use exceptions for exceptional cases (logic errors, resource failures).
- Don’t throw in destructors (unless terminating).
- For recoverable, expected absence: std::optional / std::expected (C++23) pattern.
- Validate inputs early.

## 15. Concurrency (Intro)
Tools: std::thread, std::jthread (C++20), mutex, lock_guard, unique_lock, atomic, condition_variable.
Prefer higher-level: std::async, parallel algorithms, task frameworks.
Avoid data races: guard shared state.

## 16. Modern Features by Standard
- C++11: auto, range-for, nullptr, move semantics, smart pointers, lambda.
- C++14: generic lambdas, make_unique.
- C++17: structured bindings, if with initializer, optional, variant, filesystem.
- C++20: concepts, ranges, coroutines (low-level), calendar, span.
- C++23: expected, mdspan, more ranges.

## 17. Build & Project Structure
Minimal layout:
```
project/
  src/
    main.cpp
  include/
    project/...
  tests/
  CMakeLists.txt
```
Starter CMakeLists.txt:
```cmake
cmake_minimum_required(VERSION 3.20)
project(demo LANGUAGES CXX)
set(CMAKE_CXX_STANDARD 20)
add_executable(demo src/main.cpp)
```

## 18. Debugging & Tooling
- gdb or lldb for stepping.
- AddressSanitizer / UndefinedBehaviorSanitizer: add flags
  -fsanitize=address,undefined -fno-omit-frame-pointer -g
- Valgrind (Linux) for leaks (if not using ASan).

## 19. Performance Basics
- Measure before optimizing (chrono or benchmarking libs).
- Avoid premature micro-optimizations.
- Understand complexity of algorithms & containers.

## 20. Style & Clean Code
- One responsibility per function.
- Minimize mutable shared state.
- Express intent with names; avoid comments that restate code; prefer comments for WHY.

## 21. Common Pitfalls
| Pitfall | Fix |
|---------|-----|
| Dangling references | Tie lifetimes; return by value |
| Iterator invalidation | Know container rules |
| Undefined behavior | Enable sanitizers |
| Mixing signed/unsigned | Cast carefully or align types |
| Raw owning new/delete | Use smart pointers / containers |

## 22. Practice Ideas
Progressive exercises:
1. FizzBuzz with configurable rules.
2. Vector statistics (mean, median, variance) with tests.
3. Simple Matrix class (operator+, operator*).
4. File word-frequency counter (unordered_map, filesystem).
5. Generic cache with LRU policy (templates + chrono).
6. Threaded producer-consumer queue.
7. Range-based pipeline using views (C++20).

## 23. Learning Strategy
- Write tiny focused experiments (one concept per file).
- Read cppreference.com for authoritative details.
- Study high-quality open source (LLVM, fmtlib, Catch2 patterns).

## 24. Reference Links
- cppreference: https://en.cppreference.com/
- ISO C++ guidelines (Core Guidelines): https://isocpp.github.io/CppCoreGuidelines/CppCoreGuidelines
- Compiler Explorer: https://godbolt.org/
- Clang-Tidy checks: https://clang.llvm.org/extra/clang-tidy/

## 25. Next Steps From Here
Add a /src folder, start a main.cpp, practice each section, and iterate. Pair each new concept with a runnable example + a short test.

---
Feel free to extend this README with deeper sections (coroutines, ranges adaptors, executors) as you progress.
