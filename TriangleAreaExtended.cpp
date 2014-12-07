#include <iostream>
#include <iomanip>
#include <string>
#include <math.h>

using namespace std;

class Triangle{

private:
    double a, b, c;

public:
    Triangle(double sideA, double sideB, double sideC): a(sideA), b(sideB), c(sideC){}

    double get_perimeter()
    {
        return a + b + c;
    }

    double get_area()
    {
        double p = (a+b+c)/2;
        return sqrt(p*(p-a)*(p-b)*(p-c));
    }

    bool exists(double a, double b, double c) const
    {
        return a + b > c && a + c > b && b + c > a;
    }
};

int main()
{
    double a, b, c, sideA, sideB, sideC;
    cout << "Enter sides a, b, and c: ";
    cin >> a >> b >> c;

    Triangle t(a, b, c);

    if(!t.exists(a, b, c))
    {
        cout << "No such triangle!" << endl;
        return 1;
    }

    cout << "The triangle's perimeter is: " << t.get_perimeter() << endl;
    cout << "The triangle's area is: " << fixed << setprecision(2) << t.get_area() << endl;

    return 0;
}
