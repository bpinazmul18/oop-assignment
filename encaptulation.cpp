#include <iostream>
using namespace std;

class Person {
    public:
        string name;
        string email;
    private:
        string number;
    protected:
        string pass;

    public:

        void setUser (string email, string name, string pass) {
            this -> email = email;
            this -> name = name;
            this -> pass = pass;
        }

        string getUser () {
            return name;
        }
};

int main () {
    Person nazu;
    nazu.setUser("bpinazmul18@gmail.com", "Nazmul Haque", "#fakjfkajdfj");

    cout << nazu.getUser() << endl;
    return 0;
}