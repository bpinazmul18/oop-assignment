#include <iostream>
using namespace std;

class Rectangle {
private:
    float length;
    float width;
public:
    void setLength(float l) {
        length = l;
    }
    void setWidth(float w) {
        width = w;
    }
    float getPerimeter() {
        return 2 * (length + width);
    }
    float getArea() {
        return length * width;
    }
};

int main() {
    Rectangle rect;
    rect.setLength(5.0);
    rect.setWidth(3.0);
    std::cout << "Perimeter: " << rect.getPerimeter() << std::endl;
    std::cout << "Area: " << rect.getArea() << std::endl;
    return 0;
}
