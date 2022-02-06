#include <iostream>

//Class.
class Circle {
private: 
    //Data Members.
    int Radius;
public:
    //Member Functions.
    Circle();
    Circle(int);
    Circle(Circle&);
    ~Circle();
    int Area();
    int GetRadius();
    void SetRadius(int);
};

//Constructor
Circle::Circle() {
    Radius = 0;
}

//Parameterized Constructor.
Circle::Circle(int r) {
    Radius = r;
}

//Copy Constructor
Circle::Circle(Circle& C) {
    Radius = C.Radius;
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
    //Calling Constructor for Circles of Various sizes.
    Circle C1(10), C2(22), C3(5), C4(C2);

    //Circle 1 - Parameterized Constructor.
    std::cout << "Circle 1:" << std::endl;
    std::cout << "Radius: " << C1.GetRadius() << std::endl;
    std::cout << "Area: " << C1.Area() << std::endl;
    std::cout << std::endl;

    //Circle 2 - Parameterized Constructor.
    std::cout << "Circle 2:" << std::endl;
    std::cout << "Radius: " << C2.GetRadius() << std::endl;
    std::cout << "Area: " << C2.Area() << std::endl;
    std::cout << std::endl;

    //Circle 3 - Parameterized Constructor.
    std::cout << "Circle 3:" << std::endl;
    std::cout << "Radius: " << C3.GetRadius() << std::endl;
    std::cout << "Area: " << C3.Area() << std::endl;
    std::cout << std::endl;

    //Circle 4 - Copy Constructor.
    std::cout << "Circle 4:" << std::endl;
    std::cout << "Radius: " << C4.GetRadius() << std::endl;
    std::cout << "Area: " << C4.Area() << std::endl;
    std::cout << std::endl;

    //Changing Circle 1 from Radius 10 to 20.
    std::cout << "Changing Radius of Circle 1 to 20" << std::endl;
    C1.SetRadius(20);
    std::cout << "New Circle 1:" << std::endl;
    std::cout << "Radius: " << C1.GetRadius() << std::endl;
    std::cout << "Area: " << C1.Area() << std::endl;
    std::cout << std::endl;

    return 0;
}