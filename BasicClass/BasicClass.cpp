#include <iostream>
#include <math.h>


class Circle {
private: 
    int Radius;
public:
    Circle(int);
    ~Circle();
    int Area();
    int GetRadius();
    void SetRadius(int);
};

Circle::Circle(int r) {
    Radius = r;
}

Circle::~Circle() {
    std::cout << "Destructor is Called" << std::endl;
}

int Circle::Area() {
    return 3.14 * Radius * Radius;
}

int Circle::GetRadius() {
    return Radius;
}

void Circle::SetRadius(int r) {
    Radius = r;
}

int main()
{
    Circle C(10);
    std::cout << "Area: " << C.Area() << std::endl;
    std::cout << "Radius: " << C.GetRadius() << std::endl;
    std::cout << "Changing Radius of Circle to 20" << std::endl;
    C.SetRadius(20);
    std::cout << "Area: " << C.Area() << std::endl;
    std::cout << "Radius: " << C.GetRadius() << std::endl;

    return 0;
}