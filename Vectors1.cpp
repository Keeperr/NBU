#include <iostream>
#include <string>
#include <vector>

using namespace std;

double CalcProduct(vector<double> v1,vector<double> v2){

    size_t size; int i = 0;
    vector<double> product;

    double input, input2;

    cout << "Enter vector size: ";
    cin >> size;

    cout << "Enter values for first vector: ";
    while (i++ != size) {
        cin >> input;
        v1.push_back(input);
    }
    i = 0;
    cout << "Enter values for second vector: ";
    while (i++ != size) {
        cin >> input2;
        v2.push_back(input2);
    }

    double result = 0.0;
    if (size >= 1) {
        result += v1[0] * v2[0];
        for (int i = 1; i < size; ++i)
            result -= v1[i] * v2[i];
    }

    cout << "\nThe 'happy' product of both vectors is: " << result << endl;
}

int main()
{
    vector<double> v1;
    vector<double> v2;

    CalcProduct(v1,v2);

	return 0;
}
