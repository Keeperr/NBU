#include <iostream>
#include <stdio.h>

using namespace std;

int main(){

    string input;

    cout << "Enter a string: ";
    cin >> input;

    if (input == string(input.rbegin(), input.rend())) {
        cout << "Yes";
    } else {
        cout << "No";
    }

    return 0;
}
