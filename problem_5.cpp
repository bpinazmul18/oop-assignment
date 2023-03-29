#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class Employee {
private:
    int id;
    string name;
    int age;
    float salary;

public:
    void setEmployee(int empId, string empName, int empAge, float empSalary) {
        id = empId;
        name = empName;
        age = empAge;
        salary = empSalary;
    }

    void displayEmployee() {
        cout << setw(5) << id << " | " << setw(15) << name << " | " << setw(3) << age << " | " << setw(10) << salary << endl;
    }
};

int main() {
    // Create an array of employees
    Employee employees[3];

    // Set the employee information
    employees[0].setEmployee(1, "Nazu", 24, 5000.0);
    employees[1].setEmployee(2, "Shohagh", 25, 6000.0);
    employees[2].setEmployee(3, "Razu", 26, 7000.0);

    // Display the employee information as a table
    cout << "ID   | Name           | Age | Salary" << endl;
    cout << "-------------------------------------" << endl;
    for (int i = 0; i < 3; i++) {
        employees[i].displayEmployee();
    }

    return 0;
}
