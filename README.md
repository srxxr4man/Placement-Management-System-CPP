🎓 Placement Management System (C++)

📌 Description
This is a console-based Placement Management System built using C++.
It simulates the campus placement process by managing students and companies, ranking students based on CGPA, and allocating jobs based on eligibility and vacancies.

🧠 Concepts Used
💻 Object-Oriented Programming (OOP)
🧬 Inheritance (Student inherits from Person)
🔁 Polymorphism (display() function)
📦 STL (vector, queue)
⚠️ Exception Handling (try-catch)
🔄 Operator Overloading
📊 Sorting (Bubble Sort)

⚙️ Features
Add student details (ID, Name, CGPA)
Add company details (Name, Minimum CGPA, Vacancies)
Display students and companies
Rank students based on CGPA
Allocate jobs using Queue (FIFO)
Assign salary based on CGPA
Prevent multiple placements for a student

🖥️ How It Works
User enters student and company details
Students are sorted based on CGPA
All students are pushed into a queue
Each company processes students one by one
If:
  CGPA ≥ required CGPA
  Vacancy available
  Student not already placed
Then:
  Student is selected
  Salary is assigned
  Placement status is updated
  
💡 Salary Logic
CGPA ≥ 9 → 20 LPA
CGPA ≥ 8 → 12 LPA
CGPA ≥ 7 → 8 LPA
Else → 5 LPA
