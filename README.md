🎓 Placement Management System (C++)

📌 Overview
This project is a Placement Management System developed in C++.
It simulates the real-world campus placement process by managing students and companies, ranking students based on CGPA, and allocating jobs based on eligibility and company vacancies.

🚀 Features
Add student details (ID, Name, CGPA)
Add company details (Name, Minimum CGPA, Vacancies)
Display students and companies
Rank students based on CGPA (Bubble Sort)
Job allocation using Queue (FIFO) mechanism
Salary assignment based on CGPA
Exception handling for invalid inputs

🧠 Concepts Used
Object-Oriented Programming (OOP)
Inheritance (Student inherits from Person)
Polymorphism (display() function)
STL (Standard Template Library)
vector for storing data
queue for job allocation
Operator Overloading
Exception Handling (try-catch)
Sorting Algorithms (Bubble Sort)

⚙️ How It Works
User adds students and companies
Students are ranked based on CGPA
All students are inserted into a queue
Each company processes students one by one
If eligibility criteria is satisfied:
Student is selected
Salary is assigned
Vacancy count is updated
Each student is placed only once

❗ Error Handling
Invalid CGPA (<0 or >10)
Invalid number of vacancies
Handled using try-catch to prevent program crash

🎯 Conclusion
This project demonstrates how core C++ concepts can be applied to simulate a real-world system like campus placements in a simple and efficient way.
