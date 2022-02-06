#include <iostream>
#include <math.h>

//Class.
class Circle {
private: 
    //Data Members.
    int Radius;
public:
    //Member Functions.
    Circle(int);
    ~Circle();
    int Area();
    int GetRadius();
    void SetRadius(int);
};

//Constructor.
Circle::Circle(int r) {
    Radius = r;
}

//Deconstructor.
Circle::~Circle() {
    std::cout << "Destructor(s) is Called" << std::endl;
}

//Facilitator.
int Circle::Area() {
    return 3.14 * Radius * Radius;
}

//Accessor.
int Circle::GetRadius() {
    return Radius;
}

//Mutator.
void Circle::SetRadius(int r) {
    Radius = r;
}

int main()
{
    //Calling constructor for 3 Circles of Varius sizes.
    Circle C1(10), C2(22), C3(5);

    //Circle 1.
    std::cout << "Circle 1:" << std::endl;
    std::cout << "Area: " << C1.Area() << std::endl;
    std::cout << "Radius: " << C1.GetRadius() << std::endl;
    std::cout << std::endl;

    //Circle 2.
    std::cout << "Circle 2:" << std::endl;
    std::cout << "Area: " << C2.Area() << std::endl;
    std::cout << "Radius: " << C2.GetRadius() << std::endl;
    std::cout << std::endl;

    //Circle 3.
    std::cout << "Circle 3:" << std::endl;
    std::cout << "Area: " << C3.Area() << std::endl;
    std::cout << "Radius: " << C3.GetRadius() << std::endl;
    std::cout << std::endl;

    //Changing Circle 1 from Radius 10 to 20.
    std::cout << "Changing Radius of Circle 1 to 20" << std::endl;
    C1.SetRadius(20);
    std::cout << "New Circle 1:" << std::endl;
    std::cout << "Area: " << C1.Area() << std::endl;
    std::cout << "Radius: " << C1.GetRadius() << std::endl;
    std::cout << std::endl;

    return 0;
}