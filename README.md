Project Overview
The Personal Expense Management System is a lightweight, console-based C++ application engineered to streamline daily financial tracking. Designed with practical utility in mind, this tool is highly effective for managing day-to-day finances, whether tracking individual budget allocations or managing shared living expenses in a hostel environment.

The system operates entirely through a command-line interface (CLI) and leverages core software engineering principles to ensure data persistence, fault tolerance, and a seamless user experience. By utilizing the C++ Standard Library, the application efficiently records, parses, and aggregates financial data without the need for external database dependencies.

✨ Core Functionalities & Technical Implementation
1. Persistent Data Management (File I/O)
Implementation: Utilizes the <fstream> library to establish a continuous data flow between the application and a local data.csv file.

Mechanism: Expenses are appended in real-time (ios::app). When viewing or calculating totals, the system dynamically reads the CSV file line-by-line, ensuring that data remains intact across multiple sessions and system reboots.

2. Algorithmic Data Parsing
Implementation: Applies advanced string manipulation techniques using <string> methods.

Mechanism: The application reads comma-separated values and utilizes the .find(',') and .substr() functions to accurately isolate the 'Item Type' from the 'Price'. It then parses the string-based numerical values into standard integers using stoi() for accurate arithmetic operations.

3. Robust Error Handling & Fault Tolerance
Implementation: Integrates stream state verification and input buffer clearing via <limits>.

Mechanism: The system is fortified against user-generated anomalies (e.g., inputting alphabetical characters when a numerical price is required). By employing cin.fail(), cin.clear(), and cin.ignore(numeric_limits<streamsize>::max(), '\n'), the application prevents infinite loops and runtime crashes, ensuring uninterrupted execution.

4. Streamlined Command-Line Interface (CLI)
Implementation: Built upon a modular do-while control structure and switch casing.

Mechanism: Provides an intuitive, menu-driven user experience. Functions are strictly encapsulated (addExpense(), viewExpense(), showTotal()), maintaining a clean separation of concerns and keeping the main() execution thread highly readable.

🛠️ Technical Stack
Language: C++11 (or higher)

Libraries: <iostream>, <fstream>, <string>, <limits>

Architecture: Procedural / Modular Programming

Storage: Flat-file database (.csv)

👨‍💻 Developer Profile

Muhammad Huzaifa: [Linkedin](https://www.linkedin.com/in/muhammad-huzaifa-55a666308/)
