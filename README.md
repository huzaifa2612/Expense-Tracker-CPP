# 💰 Personal Expense Tracker

![C++](https://img.shields.io/badge/C++-11%2B-blue.svg)
![Build](https://img.shields.io/badge/Build-Passing-success.svg)
![Contributions](https://img.shields.io/badge/Contributions-Welcome-brightgreen.svg)

> A lightweight, console-based C++ application engineered to streamline daily financial tracking and budget management using core file handling and string manipulation techniques.

## 📖 Overview
The **Personal Expense Management System** is highly effective for managing day-to-day finances, whether tracking individual budget allocations or managing shared living expenses in a hostel environment. The system operates entirely through a command-line interface (CLI) and leverages core software engineering principles to ensure data persistence, fault tolerance, and a seamless user experience.

## ✨ Core Functionalities & Technical Implementation
* **Persistent Data Management (File I/O):** Utilizes the `<fstream>` library to establish a continuous data flow. Expenses are appended in real-time (`ios::app`) to a local `data.csv` file, ensuring data remains intact across sessions and system reboots.
* **Algorithmic Data Parsing:** Reads comma-separated values and utilizes `.find(',')` and `.substr()` functions to accurately isolate item types from prices, parsing them into standard integers (`stoi()`) for reliable arithmetic operations.
* **Robust Fault Tolerance:** Fortified against user-generated anomalies (e.g., inputting text instead of numbers). Employs stream state verification (`cin.fail()`, `cin.clear()`) and input buffer clearing to prevent infinite loops and runtime crashes.
* **Streamlined CLI:** Built upon a strictly encapsulated, modular `do-while` control structure and `switch` casing, providing an intuitive and menu-driven user experience.

## 🛠️ Technical Stack
* **Language:** C++11 (or higher)
* **Libraries:** `<iostream>`, `<fstream>`, `<string>`, `<limits>`
* **Architecture:** Procedural / Modular Programming
* **Storage:** Flat-file database (`.csv`)

## 🚀 Getting Started

### Prerequisites
* A standard C++ compiler (e.g., GCC, MinGW)

### Installation & Execution
```bash
# 1. Clone the repository
git clone [https://github.com/huzaifa2612/Expense-Tracker-CPP.git](https://github.com/huzaifa2612/Expense-Tracker-CPP.git)

# 2. Navigate to the project directory
cd Expense-Tracker-CPP

# 3. Compile the source code
g++ main.cpp -o expense_tracker

# 4. Run the application
./expense_tracker
