# 🎓 Placement Management System (C++)

<p align="center">
  <img src="https://img.shields.io/badge/Language-C++-blue?style=for-the-badge&logo=cplusplus" />
  <img src="https://img.shields.io/badge/Concept-OOP-orange?style=for-the-badge" />
  <img src="https://img.shields.io/badge/Data%20Structures-Queue%20%7C%20Vector-green?style=for-the-badge" />
  <img src="https://img.shields.io/badge/Project-Console%20Based-purple?style=for-the-badge" />
</p>

## 📌 About the Project

The **Placement Management System** is a console-based application developed using C++. It simulates the campus placement process by managing student and company details, ranking students based on their CGPA, and allocating jobs according to eligibility criteria and available vacancies.

The system uses Object-Oriented Programming concepts and STL data structures to make the placement process organized and efficient.

## 🧠 Concepts Used

| Concept | Application |
|---|---|
| Object-Oriented Programming | Organizing students and companies into classes |
| Inheritance | `Student` inherits from `Person` |
| Polymorphism | Using the `display()` function |
| STL | `vector` and `queue` |
| Exception Handling | Handling invalid inputs using `try-catch` |
| Operator Overloading | Customizing operator behavior |
| Bubble Sort | Ranking students based on CGPA |
| Queue (FIFO) | Processing students for placement |

## ⚙️ Features

- ➕ Add student details (ID, Name, CGPA)
- 🏢 Add company details (Name, Minimum CGPA, Vacancies)
- 📋 Display student and company information
- 🏆 Rank students based on CGPA
- 🔄 Allocate jobs using a Queue (FIFO)
- 💰 Assign salary packages based on CGPA
- 🛡️ Prevent multiple placements for the same student
- ⚠️ Validate inputs and handle exceptions

## 🔄 Placement Workflow

```text
        START
          |
          v
   Add Student Details
          |
          v
   Add Company Details
          |
          v
  Sort Students by CGPA
          |
          v
   Insert Students into
       Queue (FIFO)
          |
          v
   Process Each Student
          |
          v
   Check Eligibility
    /      |       \
   /       |        \
 CGPA    Vacancy   Not Already
 Valid   Available   Placed
   \       |        /
    \      |       /
          v
    Student Selected
          |
          v
    Assign Salary
          |
          v
   Update Placement
        Status
          |
          v
         END
```

## 💡 Salary Allocation Logic

The salary package is assigned according to the student's CGPA.

| CGPA | Salary Package |
|---|---:|
| CGPA ≥ 9 | 20 LPA |
| CGPA ≥ 8 | 12 LPA |
| CGPA ≥ 7 | 8 LPA |
| CGPA < 7 | 5 LPA |

## 🖥️ Sample Output

```text
Enter ID Name CGPA:
1 Arun 9.1

Student added successfully!

Company hiring...
Arun selected with package 20 LPA
```

## ❗ Error Handling

The system uses exception handling (`try-catch`) to manage invalid inputs and prevent unexpected program termination.

- Invalid CGPA: Less than 0 or greater than 10.
- Invalid vacancies: Zero or negative values.
- Invalid input: Handles incorrect user entries where implemented.

## 🛠️ Technologies Used

- **Language:** C++
- **Libraries:** iostream, vector, queue
- **Concepts:** OOP, STL, Exception Handling
- **Algorithm:** Bubble Sort

## ▶️ How to Run

1. Clone the repository:

   ```bash
   git clone https://github.com/your-username/Placement-Management-System-CPP.git
   ```

2. Navigate to the project directory:

   ```bash
   cd Placement-Management-System-CPP
   ```

3. Compile the program:

   ```bash
   g++ Placement_Management_System.cpp -o placement
   ```

4. Run the program:

   ```bash
   ./placement
   ```

   On Windows:

   ```bash
   placement.exe
   ```

## 🎯 Learning Outcomes

Through this project, I gained practical experience in:

- Implementing inheritance and polymorphism in C++.
- Working with STL containers such as vectors and queues.
- Applying sorting algorithms to rank student records.
- Understanding FIFO-based job allocation.
- Using operator overloading and exception handling.
- Applying OOP concepts to a real-world placement scenario.

## 🚀 Future Enhancements

- Add student login and registration.
- Store student and company details using file handling or a database.
- Generate placement reports.
- Add company-wise placement statistics.
- Implement advanced sorting and ranking options.

---

<p align="center">
  <b>🎓 Placement Management System — Simplifying Campus Recruitment!</b>
</p>
