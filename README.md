# Assignment 2 — Syntax, Semantics, and Memory Management

This repository contains all source code for Assignment 2.

## Part 1 — Syntax and Semantics

- `part1_sec1/` — Python, JavaScript, and C++ versions of the sum-of-an-array
  program, each with the syntax/semantic bugs from the assignment listing,
  plus the captured interpreter/compiler output (`error_output.txt`).
- `part1_sec2/` — Original programs in Python, JavaScript, and C++ used to
  compare **type systems** (static vs. dynamic, strong vs. weak typing)
  across the three languages.

## Part 2 — Memory Management

- `part2_sec3/rust/` — Ownership & borrowing demo (`ownership_demo.rs`) and a
  companion program that intentionally fails to compile to show the borrow
  checker catching a use-after-move bug (`ownership_error_demo.rs`).
- `part2_sec3/java/` — Garbage collection demo (`GcDemo.java`).
- `part2_sec3/cpp/` — Correct manual memory management
  (`manual_memory_demo.cpp`) and a buggy version with a memory leak and a
  dangling pointer (`leak_and_dangling_demo.cpp`), profiled with `valgrind`.

## Report

`Assignment2_Report.docx` 
## How to run

```bash
# Python
python3 part1_sec2/python/type_system_demo.py

# JavaScript (Node.js)
node part1_sec2/javascript/type_system_demo.js

# C++
g++ -std=c++17 part1_sec2/cpp/type_system_demo.cpp -o type_demo && ./type_demo

# Rust
rustc part2_sec3/rust/ownership_demo.rs -o ownership_demo && ./ownership_demo

# Java
javac part2_sec3/java/GcDemo.java && java -cp part2_sec3/java GcDemo

# C++ memory profiling (requires valgrind)
g++ -g part2_sec3/cpp/leak_and_dangling_demo.cpp -o leak_demo
valgrind --leak-check=full ./leak_demo
```
