#include <iostream>
using namespace std;

class Square {
private:
    float length;

public:
    void setLength(float l) {
        length = l;
    }

    float getArea() {
        return length * length;
    }

    float getPerimeter() {
        return 4 * length;
    }
};

int main() {
    Square sq;

    sq.setLength(5.0);

    float area = sq.getArea();
    float perimeter = sq.getPerimeter();

    cout << "Area: " << area << endl;
    cout << "Perimeter: " << perimeter << endl;

    return 0;
}
