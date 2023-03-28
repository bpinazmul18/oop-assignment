#include <iostream>
using namespace std;

class Student {
    public:
        string id;
        string name;
};

int main () {
    Student st1;
    st1.id = "CSE2203027032";
    st1.name = "Nazmul Haque";

    cout << "Student id is : " << st1.id << endl;
    cout << "Student name is : " << st1.name << endl;
    
    return 0;
}