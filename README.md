
# 🚗 Car Sale System (C++)

A console-based Car Sale Management System written in C++ that allows users to manage cars, customers, employees, and sales operations. This system uses Object-Oriented Programming (OOP) principles to offer an interactive, menu-driven approach for maintaining vehicle inventory and processing transactions.

---

## 📌 Features

### 🔧 Core Functionality
- Menu-driven system with categorized operations
- Manages:
  - Cars
  - Customers
  - Employees
  - Sales (Buying cars)

---

### 🚘 Car Management
- View all car records
- Search cars by:
  - Car ID
  - Model
- Update car information
- Delete cars from the system
- Add new cars

---

### 🧍 Customer Management
- Display all customers
- Search by ID or name
- Update or delete customer data

---

### 🧑‍💼 Employee Management
- Display employee records
- Search by ID or name
- Update or delete employee information

---

### 💰 Sale Management
- Buy a car
- View total price of all cars
- Display all system data
- Save all data to file

---

## 🧱 Code Structure

- `menu` class handles all menus and interaction logic
- Uses a `list` class (from `list.h`) to perform all data operations
- Menus:
  - Sell Menu
  - Car Menu
  - Customer Menu
  - Employee Menu

---

## 💻 Technologies Used

- **Language:** C++
- **IDE/Compiler:** Any standard C++ compiler (e.g., Code::Blocks, DevC++, g++, MSVC)
- **Storage:** Basic file I/O for persistent storage

---

## ▶️ How to Run

1. Ensure you have a C++ compiler installed (e.g. `g++`)
2. Make sure the required `list.h` file is present in the same directory.
3. Compile:
   `bash
   g++ main.cpp -o car_sale_system

4. Run:

   ```bash
   ./car_sale_system
   ```

---

## 🧭 Sample Menu Structure

### Sell Menu

text
1: Display all information
2: Buy Car
3: Total amount of all Cars
4: Store information in file
5: Main Menu


### Car Menu

text
1: Display all information
2: Search by ID
3: Search by Model
4: Update information
5: Delete information
6: Main Menu


### Customer & Employee Menus

text
1: Display all information
2: Search by ID
3: Search by Name
4: Update information
5: Delete information
6: Main Menu

## 📁 File Handling

* All records and data can be saved to a file for persistence
* Ensures data is not lost after program termination

## 🙌 Author

This system was developed as part of an academic project to demonstrate the application of:

* Object-Oriented Programming in C++
* File Handling
* Structured Menu Navigation
* Real-world scenario modeling

## 📄 License

This project is released under the MIT License.
