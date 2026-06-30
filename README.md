# Parking Management System 

A Data Structures and Algorithms (DSA) based Parking Management System developed in C++ as a semester project.
This project manages parking slots, waiting queues, and parking fee collection using efficient DSA concepts.

# Project Overview

The Parking Management System is designed to automate the parking process by handling:

Car entry into parking slots
Waiting queue when parking is full
Car removal
Parking fee collection
Searching parked cars
Displaying available slots

This project demonstrates practical implementation of Stack and Queue in a real-world system.

# Objectives
To understand the practical use of Data Structures
To implement parking slot management efficiently
To reduce manual parking operations
To manage waiting vehicles automatically
To track total parking earnings

# Features

✅ Park a car
✅ Remove a car
✅ Display parked cars
✅ Display waiting queue
✅ Search a car
✅ Show available slots
✅ Show total earnings
✅ Automatic queue management
✅ User-friendly menu-driven system

# Technologies Used
C++
Object-Oriented Programming (OOP)
Stack (LIFO)
Queue (FIFO)
📂 Data Structures Used

1. Stack

Used to store parked cars.

Why?
Parking works on Last In First Out (LIFO) in this project.

Example:
Car1
Car2
Car3
Last parked car leaves first.

2. Queue

Used for waiting cars.

Why?
Waiting cars are managed using First In First Out (FIFO).
Example:
Car6
Car7
Car8
first waiting car gets parking first.

# Working Algorithm
Car Entry:
Check available slots.
If slots available → Park car.
If full → Add to waiting queue.
Car Exit:
Remove top parked car.
Collect parking fee.
Check waiting queue.
Move first waiting car into parking.
Search Car:
Traverse parking stack.
Compare car number.
Display result.
 

# Windows:
parking.exe

# Linux/Mac:

./parking
📜 Menu Options
1. Park Car
2. Remove Car
3. Display Parked Cars
4. Display Waiting Queue
5. Search Car
6. Check Available Slots
7. Show Total Earnings
8. Exit
📊 Example Flow
Slots = 5

Car1 enters
Car2 enters
Car3 enters
Car4 enters
Car5 enters
Car6 enters → goes to waiting queue
Car5 leaves
Car6 automatically moves into parking

# Time Complexity
Operation	Complexity
Park Car	O(1)
Remove Car	O(1)
Search Car	O(n)
Display Cars	O(n)
Queue Operations	O(1)

# Future Improvements
Parking time tracking
Dynamic parking slots
Database integration
GUI version
VIP parking system using Priority Queue
Parking reports generation
Online reservation system

# Academic Relevance

This project is developed as a Semester Project for the Data Structures and Algorithms (DSA) course to demonstrate the implementation of:
Stack
Queue
Searching
OOP Concepts