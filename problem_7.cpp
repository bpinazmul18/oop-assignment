#include <iostream>
using namespace std;

class Shape {
protected:
    float width;
    float height;

public:
    void setWidth(float w) {
        width = w;
    }

    void setHeight(float h) {
        height = h;
    }
};

class Rectangle : public Shape {
public:
    float getArea() {
        return width * height;
    }

    float getPerimeter() {
        return 2 * (width + height);
    }
};

int main() {
    Rectangle rect;

    rect.setWidth(5.0);
    rect.setHeight(3.0);

    cout << "Area of the rectangle: " << rect.getArea() << endl;
    cout << "Perimeter of the rectangle: " << rect.getPerimeter() << endl;

    return 0;
}
