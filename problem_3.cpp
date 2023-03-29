#include <iostream>
using namespace std;

class Circle {
private:
    float radius;

public:
    void setRadius(float r) {
        radius = r;
    }

    float getArea() {
        return 3.14 * radius * radius;
    }

    float getPerimeter() {
        return 2 * 3.14 * radius;
    }
};

int main() {
    Circle c1, c2;

    c1.setRadius(5.0);

    float area1 = c1.getArea();
    float perimeter1 = c1.getPerimeter();

    c2.setRadius(2.5);

    float area2 = c2.getArea();
    float perimeter2 = c2.getPerimeter();

    cout << "Circle 1:" << endl;
    cout << "Area: " << area1 << endl;
    cout << "Perimeter: " << perimeter1 << endl;

    cout << "Circle 2:" << endl;
    cout << "Area: " << area2 << endl;
    cout << "Perimeter: " << perimeter2 << endl;

    return 0;
}
