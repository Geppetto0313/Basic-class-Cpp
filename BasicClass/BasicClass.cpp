#include <iostream>

//Class.
class Circle {
private: 
    //Data Members.
    double Radius;
public:
    //Member Functions.
    Circle();
    Circle(double);
    Circle(Circle&);
    ~Circle();
    double Area();
    double GetRadius();
    void SetRadius(double);
};

//Default Constructor
Circle::Circle() {
    Radius = 0;
}

//Parameterized Constructor.
Circle::Circle(double r) {
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
double Circle::Area() {
    return 3.14 * Radius * Radius;
}

//Accessor.
double Circle::GetRadius() {
    return Radius;
}

//Mutator.
void Circle::SetRadius(double r) {
    Radius = r;
}

int main()
{
    //Calling Default Constructor.
    Circle C;

    //Calling Parameterized Constructor for Circles of Various sizes.
    Circle C1(10), C2(22);

    //Calling Copy Constructor.
    Circle C3(C2);

    //Circle - Default Constructor.
    std::cout << "Circle:" << std::endl;
    std::cout << "Radius: " << C.GetRadius() << std::endl;
    std::cout << "Area: " << C.Area() << std::endl;
    std::cout << std::endl;

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

    //Circle 4 - Copy Constructor.
    std::cout << "Circle 3:" << std::endl;
    std::cout << "Radius: " << C3.GetRadius() << std::endl;
    std::cout << "Area: " << C3.Area() << std::endl;
    std::cout << std::endl;

    //Changing Circle 1 from Radius 10 to 20.
    C1.SetRadius(20);
    std::cout << "Changed Radius of Circle 1 to 20" << std::endl;
    std::cout << "New Circle 1:" << std::endl;
    std::cout << "Radius: " << C1.GetRadius() << std::endl;
    std::cout << "Area: " << C1.Area() << std::endl;
    std::cout << std::endl;

    return 0;
}