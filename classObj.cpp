#include <iostream>
using namespace std;

class Student {
    public:
        string id;
        string name;
};

int main () {
    Student st1;
    
    cout << "Enter your student's id: ";
    cin >> st1.id;
    
    cout << "Enter your student's name: ";
    cin >> st1.name;

    cout << "Student's id is : " << st1.id << endl;
    cout << "Student's name is : " << st1.name << endl;
    
    return 0;
}