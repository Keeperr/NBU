#include <iostream>
#include <iomanip>
#include <stdio.h>
#define PI 3.14159

using namespace std;

class Circle{

private:
    double r;

public:
    Circle(double radius): r(radius){}

    double get_perimeter()
    {
        return 2*PI*r;
    }

    double get_area()
    {
        return PI*r*r;
    }
};

int main()
{
    double radius, d, r;

    cout << "Enter radius: ";
    cin >> radius;

    Circle c(radius);

    cout << "Circle's perimeter is: " << fixed << setprecision(2) << c.get_perimeter() << endl;
    cout << "Circle's area is: " << fixed << setprecision(2) << c.get_area() << endl;

    return 0;
}
