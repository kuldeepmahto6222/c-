#include <iostream>
class Rectangle {
private:
    int length;
    int width;
public:
    Rectangle(int l, int w) : length(l), width(w) {}
    int area() const { return length * width; }
};
int main() {
    Rectangle rect(4, 5);
    std::cout << "Area of the rectangle: " << rect.area() << std::endl;
    return 0;
}

