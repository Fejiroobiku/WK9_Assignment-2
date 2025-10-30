# WK9_Assignment 2 – C Programming: Pointers, Functions & Dynamic Memory

**Course**: BSE: Low-Level Programming in C
**Assignment**: WK9_Assignment 2
**Group Members**:
- **Maxwel Okoth** – First half of all programs (core logic, structure, pointers, function design)
- **Michael Obiku** – Second half of all programs (implementation details, memory management, testing, input/output)
**Submission Deadline**: October 30, 2025

---

## Overview

This repository contains **three C programs** designed to demonstrate mastery of:

1. **Stack & Heap Memory**
2. **Pointers** (variables, arrays, strings)
3. **Nested Loops & Modular Functions**
4. **Dynamic Memory Management** (`malloc`, `calloc`, `realloc`, `free`)
5. **Function Pointers**

Each program is modular, uses **pointers extensively**, and follows clean coding practices.

---

## Files

| File | Description |
|------|-----------|
| `net_salary_calculator.c` | Calculates net salary with tax brackets and deductions using pointer-based functions |
| `name_sorter.c` | Sorts 20 full names in ascending/descending order using **bubble sort** and **function pointers** |
| `email_manager.c` | Dynamically manages 10 student emails, then shrinks to 6 using `malloc`, `realloc`, and `free` |

---

## Compilation & Execution

Ensure you have `gcc` installed.

```bash
# Compile each program
gcc net_salary_calculator.c -o net_salary
gcc name_sorter.c -o name_sorter
gcc email_manager.c -o email_manager

# Run
./net_salary
./name_sorter
./email_manager
```

> **Note**: Use `valgrind` to check for memory leaks:
> ```bash
> valgrind --leak-check=full ./email_manager
> ```

---

## Program Features

### 1. `net_salary_calculator.c`
- Modular functions for each deduction
- Pointers used in **all functions except `main`**
- Tax logic based on salary tiers
- Output: Net salary printed with 2 decimal places

### 2. `name_sorter.c`
- Accepts 20 full names
- User chooses `asc` or `desc`
- Uses **function pointers** for flexible sorting
- Bubble sort with pointer swapping
- Full dynamic memory allocation & deallocation

### 3. `email_manager.c`
- Stores 10 student emails using **double pointers** (`char **`)
- Uses `malloc` → `realloc` → `free`
- Shrinks from 10 to 6 students **without data loss**
- Robust error handling for memory allocation

---

## Group Contributions

| Member | Role & Contributions |
|-------|------------------------|
| **Maxwel Okoth** | - Designed program structure and function prototypes<br>- Implemented **first half** of all `.c` files:<br> • Tax logic & deduction functions<br> • Bubble sort loop setup & function pointers<br> • Initial `malloc` and array setup<br>- Wrote pointer logic and modular design<br>- Ensured compliance with assignment rubric |
| **Michael Obiku** | - Implemented **second half** of all `.c` files:<br> • Input handling, memory management, `free()`<br> • `realloc` shrinking logic<br> • Output formatting and testing<br>- Added error checks and user prompts<br>- Final testing and debugging<br>- Contributed to README and report |

> **All contributions are tracked via Git commits** – verifiable in the repository history.

## Sample Output

### Net Salary Calculator
```
Enter gross salary (USD): 250
Net Salary: $189.25
```

### Name Sorter
```
Enter sort order (asc/desc): desc
...
Sorted Names:
Zoe Williams
Victor Lee
...
```

### Email Manager
```
Original Emails (10 students):
...
Emails after shrinking to 6 students:

**Submitted by**: Maxwel Okoth & Michael Obiku
**Date**: 30/10/2025
