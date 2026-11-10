# 🎓 Placement Management System — C++

<p align="center">
  <b>Manage Students. Connect Companies. Simplify Campus Recruitment.</b>
  <br>
  A console-based placement management application developed using C++ and Object-Oriented Programming concepts.
</p>

<p align="center">
  <img src="https://img.shields.io/badge/Language-C++-blue?style=for-the-badge&logo=cplusplus" />
  <img src="https://img.shields.io/badge/Concept-OOP-orange?style=for-the-badge" />
  <img src="https://img.shields.io/badge/Data%20Structures-Queue%20%7C%20Vector-green?style=for-the-badge" />
  <img src="https://img.shields.io/badge/Project-Console%20Based-purple?style=for-the-badge" />
</p>

---

## 📌 About the Project

The **Placement Management System** is a console-based application developed using C++. It simulates the campus placement process by managing student and company details, ranking students based on their CGPA, and allocating jobs according to eligibility criteria and available vacancies.

The application uses **Object-Oriented Programming (OOP)** concepts and Standard Template Library (STL) data structures to organize student records, process company recruitment requirements, and simplify placement allocation.

The system aims to demonstrate how fundamental C++ programming concepts can be applied to solve a real-world problem in the academic environment.

## ✨ Key Features

- 👨‍🎓 **Student Management:** Add and maintain student details, including ID, name, and CGPA.
- 🏢 **Company Management:** Register companies with minimum CGPA requirements and available vacancies.
- 📋 **Record Display:** View student and company information.
- 🏆 **Student Ranking:** Rank students based on CGPA using Bubble Sort.
- 🔄 **Queue-Based Allocation:** Process students using the FIFO (First In, First Out) principle.
- 💼 **Job Allocation:** Select eligible students based on CGPA, vacancy availability, and placement status.
- 💰 **Salary Assignment:** Allocate salary packages according to student CGPA.
- 🛡️ **Placement Validation:** Prevent students from receiving multiple placements.
- ⚠️ **Exception Handling:** Handle invalid inputs using `try-catch` blocks.

## 🚀 Core Modules & Capabilities

### 1. 👨‍🎓 Student Management
- Add student ID, name, and CGPA.
- Maintain student records using STL containers.
- Display student information.
- Track individual placement status.

### 2. 🏢 Company Management
- Add company details.
- Specify minimum CGPA eligibility.
- Maintain available vacancy information.
- Display registered company details.

### 3. 🏆 Student Ranking System
- Sort students according to CGPA.
- Apply the Bubble Sort algorithm.
- Prioritize students with higher academic performance.

### 4. 🔄 Queue-Based Placement Allocation
- Insert students into a queue.
- Process students according to FIFO order.
- Check CGPA eligibility and vacancy availability.
- Avoid allocating multiple jobs to the same student.
- Update placement status after successful selection.

### 5. 💰 Salary Allocation System

The application assigns salary packages based on student CGPA.

| CGPA Criteria | Salary Package |
|---|---:|
| CGPA ≥ 9 | 20 LPA |
| CGPA ≥ 8 | 12 LPA |
| CGPA ≥ 7 | 8 LPA |
| CGPA < 7 | 5 LPA |

## 🧠 Concepts Used

| Concept | Application |
|---|---|
| Object-Oriented Programming | Organizing students and companies into classes |
| Inheritance | `Student` inherits from `Person` |
| Polymorphism | Function overriding using `display()` |
| Operator Overloading | Customizing operator behavior |
| STL – Vector | Managing student and company records |
| STL – Queue | FIFO-based student processing |
| Bubble Sort | Ranking students based on CGPA |
| Exception Handling | Handling invalid inputs using `try-catch` |

## 🔄 System Workflow

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
        Insert into Queue
                |
                v
       Process Each Student
                |
                v
       Check Eligibility
                |
       +--------+---------+
       |        |         |
       v        v         v
      CGPA   Vacancies   Placement
     Valid   Available    Status
       |        |         |
       +--------+---------+
                |
                v
       Select Eligible Student
                |
                v
         Assign Salary
                |
                v
       Update Placement Status
                |
                v
               END
```

## 🖥️ Sample Output

```text
Enter ID Name CGPA:
1 Arun 9.1

Student added successfully!

Company hiring...
Arun selected with package 20 LPA
```

## ❗ Error Handling & Validation

The application uses exception handling to manage invalid inputs and improve program reliability.

- **Invalid CGPA:** Rejects values below 0 or above 10.
- **Invalid Vacancies:** Rejects zero or negative vacancy values.
- **Invalid Input:** Handles incorrect user entries where implemented.
- **Placement Validation:** Prevents an already placed student from receiving another placement.

## 🛠️ Technology Stack

| Technology | Purpose |
|---|---|
| C++ | Core programming language |
| iostream | Input and output operations |
| vector | Dynamic record management |
| queue | FIFO-based student processing |
| OOP | Class-based program design |
| Bubble Sort | Student ranking |
| try-catch | Exception handling |

## 🎯 Project Objectives & Learning Outcomes

This project focuses on applying fundamental C++ programming concepts to a practical campus recruitment scenario.

Through this project, we explored:

- Implementing inheritance and polymorphism in C++.
- Understanding operator overloading.
- Working with STL containers such as vectors and queues.
- Applying Bubble Sort for student ranking.
- Understanding FIFO-based job allocation.
- Implementing exception handling and input validation.
- Developing class-based solutions to real-world problems.
- Improving problem-solving and logical thinking skills.
- Collaborating as a team to develop a functional C++ application.

## 🔮 Future Enhancements

- 🔐 Introduce student and administrator login systems.
- 💾 Implement file handling or database integration for permanent storage.
- 📊 Generate placement statistics and reports.
- 🏢 Add company-wise recruitment summaries.
- 🔍 Introduce advanced student filtering and ranking options.
- 📄 Generate individual student placement reports.
- 🖥️ Develop a graphical user interface.

## 🎓 Academic Project Details

| Detail | Information |
|---|---|
| **Institution** | Muthoot Institute of Technology and Science (MITS) |
| **Department** | Artificial Intelligence and Data Science |
| **Course** | Programming in C++ |
| **Semester** | Semester 2 |
| **Academic Batch** | 2025–2029 |
| **Project Type** | Academic Team Project |
| **Project Domain** | C++ Programming & Object-Oriented Programming |
| **Project Title** | Placement Management System |

## 👨‍💻 Project Team

<p align="center">
  <b>Built with ❤️ by Team Placement Management System</b>
</p>

<p align="center">
  <b>A Sreeram</b> · <b>Freya Muneer</b> · <b>Abhinav V Prasad</b> · <b>Asil Sameer</b>
</p>

<p align="center">
  🎓 Artificial Intelligence & Data Science Students
  <br>
  Muthoot Institute of Technology and Science (MITS)
</p>

---

<p align="center">
  <b>🎓 Simplifying Campus Recruitment Through C++ Programming.</b>
  <br><br>
  ⭐ If you find this project interesting, consider giving this repository a star!
  <br><br>
  <b>Made with ❤️ and Code.</b>
</p>
