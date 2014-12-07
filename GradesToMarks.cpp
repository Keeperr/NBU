#include <iostream>
#include <string>

using namespace std;

void gradesToMarks(const std::string& fnumber, double n){

    if (n >= 5.50 && n <= 6.00){
        cout << fnumber << "\t" << "A" << endl;
    }
    else if (n < 5.50 && n > 4.49){
        cout << fnumber << "\t" << "B" << endl;
    }
    else if (n < 4.50 && n > 3.49){
        cout << fnumber << "\t" << "C" << endl;
    }
    else if (n >= 3.00 && n < 3.50){
        cout << fnumber << "\t" << "D" << endl;
    }
    else if (n >= 2.50 && n < 3.00){
        cout << fnumber << "\t" << "E" << endl;
    }
    else if (n < 2.50){
        cout << fnumber << "\t" << "F" << endl;
    }
}

int main(){

    std::string f;
    double n;

    while (cin >> f >> n) {
        gradesToMarks(f, n);
    }
}
