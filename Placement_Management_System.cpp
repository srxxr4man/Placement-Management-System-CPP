#include <iostream>
#include <vector>
#include <queue>
using namespace std;

// Base Class
class Person {
public:
    int id;
    string name;

    Person() {}

    Person(int i, string n) {
        id = i;
        name = n;
    }

    virtual void display() {
        cout << "ID: " << id << endl;
        cout << "Name: " << name << endl;
    }

    virtual ~Person() {}
};

// Student
class Student : public Person {
public:
    float cgpa;
    bool placed;
    float salary;

    Student() {
        cgpa = 0;
        placed = false;
        salary = 0;
    }

    Student(int i, string n, float c) : Person(i, n) {
        if (c < 0 || c > 10)
            throw "Invalid CGPA!";

        cgpa = c;
        placed = false;
        salary = 0;
    }

    // Assign Salary Based on CGPA
    void assignSalary() {
        if (cgpa >= 9)
            salary = 20;
        else if (cgpa >= 8)
            salary = 12;
        else if (cgpa >= 7)
            salary = 8;
        else
            salary = 5;
    }

    void display(){
        cout << "\nStudent Details:\n";
        cout << "ID: " << id << endl;
        cout << "Name: " << name << endl;
        cout << "CGPA: " << cgpa << endl;

        if (placed)
            cout << "Salary: " << salary << " LPA\n";
    }

    // Operator Overloading
    bool operator>(const Student &s) const {
        return cgpa > s.cgpa;
    }

    bool operator>=(float minCGPA) const {
        return cgpa >= minCGPA;
    }
};

// Company
class Company {
public:
    string name;
    float minCGPA;
    int vacancies;

    Company() {}

    Company(string n, float m, int v) {
        if (m < 0 || m > 10)
            throw "Invalid Min CGPA!";
        if (v <= 0)
            throw "Invalid Vacancies!";

        name = n;
        minCGPA = m;
        vacancies = v;
    }

    void display() {
        cout << "\nCompany: " << name << endl;
        cout << "Min CGPA: " << minCGPA << endl;
        cout << "Vacancies: " << vacancies << endl;
    }
};

// Template
template <typename T>
void displayAll(vector<T> &arr) {
    if (arr.empty()) {
        cout << "No data available\n";
        return;
    }
    for (auto &x : arr) {
        x.display();
    }
}

// Placement System
class PlacementSystem {
private:
    vector<Student> students;
    vector<Company> companies;

public:

    void addStudent() {
        int id;
        string name;
        float cgpa;

        cout << "Enter ID Name CGPA: ";
        cin >> id >> name >> cgpa;

        try {
            students.push_back(Student(id, name, cgpa));
            cout << "Student added successfully!\n";
        } catch (const char* msg) {
            cout << msg << endl;
        }
    }

    void addCompany() {
        string name;
        float cgpa;
        int v;

        cout << "Enter Company Name MinCGPA Vacancies: ";
        cin >> name >> cgpa >> v;

        try {
            companies.push_back(Company(name, cgpa, v));
            cout << "Company added successfully!\n";
        } catch (const char* msg) {
            cout << msg << endl;
        }
    }

    void displayStudents() {
        displayAll(students);
    }

    void displayCompanies() {
        displayAll(companies);
    }

    // Ranking (Bubble Sort)
    void rankStudents() {
        int n = students.size();

        for (int i = 0; i < n - 1; i++) {
            for (int j = 0; j < n - i - 1; j++) {
                if (!(students[j] > students[j + 1])) {
                    Student temp = students[j];
                    students[j] = students[j + 1];
                    students[j + 1] = temp;
                }
            }
        }

        cout << "Students ranked successfully!\n";
    }

    void allocateJobs() {
        if (students.empty() || companies.empty()) {
            cout << "Add students and companies first!\n";
            return;
        }

        cout << "\n--- Job Allocation (Queue Based) ---\n";

        // Job Recruitment using Queue
        queue<Student*> q;

        for (auto &s : students) {
            q.push(&s);
        }

        for (auto &c : companies) {
            cout << "\n" << c.name << " hiring...\n";

            int count = 0;
            int size = q.size();

            while (size--) {
                Student* s = q.front();
                q.pop();

                if (!s->placed &&
                    *s >= c.minCGPA &&
                    count < c.vacancies) {

                    s->assignSalary();

                    cout << s->name
                         << " selected in " << c.name
                         << " with package " << s->salary << " LPA\n";

                    s->placed = true;
                    count++;
                }

                q.push(s);
            }

            if (count == 0)
                cout << "No eligible students\n";
        }
    }
};

// Main
int main() {
    PlacementSystem ps;
    int choice;

    do {
        cout << "\n===== PLACEMENT MANAGEMENT SYSTEM =====\n";
        cout << "1. Add Student\n";
        cout << "2. Add Company\n";
        cout << "3. Display Students\n";
        cout << "4. Display Companies\n";
        cout << "5. Rank Students\n";
        cout << "6. Allocate Jobs\n";
        cout << "7. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1: ps.addStudent(); break;
            case 2: ps.addCompany(); break;
            case 3: ps.displayStudents(); break;
            case 4: ps.displayCompanies(); break;
            case 5: ps.rankStudents(); break;
            case 6: ps.allocateJobs(); break;
            case 7: cout << "Exiting...\n"; break;
            default: cout << "Invalid choice!\n";
        }

    } while (choice != 7);

    return 0;
}
