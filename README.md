# Printer Queue Management System (C++)

This project is a **simple Printer Queue Management System** implemented using **C++**, **STL Queue**, and **Object-Oriented Programming (OOP)** concepts.  
It simulates how print jobs are processed in a printer using the **First Come, First Served (FCFS)** approach.

---

## 🎯 Objective

The objectives of this project are:
- To understand the **queue data structure**
- To apply **OOP principles** in C++
- To simulate real-world printer job scheduling
- To practice using STL containers

---

## 🧠 Concepts Used

- Queue Data Structure (STL `queue`)
- Object-Oriented Programming (OOP)
- Classes and Objects
- Constructors
- FIFO (First In First Out) principle
- Input/Output operations (`cout`)

---

## 🧾 Program Description

- The **PrintJob** class stores information about a print document.
- The **Printer** class manages print jobs using a queue.
- Print jobs are added to the queue using `addJob()`.
- Jobs are printed in the order they are received.
- If no jobs are available, an appropriate message is displayed.

---

## 🧩 Class Structure

### Class: `PrintJob`

**Data Member**
- `string document`

**Constructor**
- Initializes the document name

---

### Class: `Printer`

**Data Member**
- `queue<PrintJob> jobs`

**Member Functions**
- `void addJob(string doc)`
- `void print()`

---

## ▶️ Sample Output

