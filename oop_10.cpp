#include <iostream>
using namespace std;

// Abstract Class
class Shape
{
public:
    virtual void area() = 0;
};

// Derived Class
class Circle : public Shape
{
public:
    void area()
    {
        float r = 5;
        cout << "Area of Circle = " << 3.14 * r * r << endl;
    }
};

class Rectangle : public Shape
{
public:
    void area()
    {
        cout << "Area of Rectangle = " << 10 * 20 << endl;
    }
};

int main()
{
    Circle c;
    Rectangle r;

    c.area();
    r.area();

    return 0;
}