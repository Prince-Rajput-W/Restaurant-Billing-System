# Restaurant Billing System

A simple and efficient **Restaurant Billing System** developed in **C language** for generating customer bills, calculating GST, maintaining bill records, and producing daily sales reports.

## 📌 Features

* Generate restaurant bills automatically
* Maintain unique bill numbers
* Calculate GST (5%) on total amount
* Store daily sales records in file system
* Generate admin daily report
* Track total bills and total earnings

## 🛠️ Technologies Used

* C Programming
* File Handling
* Standard Input/Output

## 📂 Project Files

* `system.c` → Main billing system for customer orders
* `admin.c` → Admin report system for daily earnings
* `billno.txt` → Stores latest bill number
* `sales.txt` → Stores daily sales records

## 🍽️ Menu Included

* Burger
* Pizza
* Pasta
* Coffee
* Sandwich
* Fries
* Momos
* Noodles
* Cold Drink
* Ice Cream

## ▶️ How to Run

### Compile Files

```bash
gcc system.c -o system
gcc admin.c -o admin
```

### Run Billing System

```bash
./system
```

### Run Admin Report

```bash
./admin
```

## 📊 Working

1. Customer selects menu items
2. Quantity is entered
3. Total bill is calculated
4. GST is added automatically
5. Final amount is displayed
6. Sales data is saved in file
7. Admin can check total daily earnings

## 📈 Future Improvements

* Add item-wise bill display
* Add discount system
* Add login authentication
* Improve menu interface

## 👨‍💻 Author

Prince
Developed as a C programming project for learning file handling and billing system logic.
