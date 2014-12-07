#include <iostream>
#include <stdio.h>

using namespace std;

bool isValid(double a, double b, double c)
{
    return a + b > c && a + c > b && b + c >a;
}

double Tperimeter(double a, double b, double c)
{
    return a + b + c;
}

int main(){

    double a, b, c;
    cout << "Enter side a: ";
    cin >> a;
    cout << "Enter side b: ";
    cin >> b;
    cout << "Enter side c: ";
    cin >> c;

    if (!isValid(a, b, c)){
        cout << "Such triangle doesn't exist" << endl;
        return 1;
    } else {

        cout << "The perimeter of the triangle is: " << Tperimeter(a, b, c);
    }

    return 0;
}
