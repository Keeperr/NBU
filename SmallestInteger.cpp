#include <iostream>
using namespace std;

int main(){

    int total;
    double n, smallest;

    cin >> total >> n;
    smallest = n;

    for (int i = 2; i <= total; i++){
        cin >> n;
        if (n < smallest){
            smallest = n;
        }
    }

    cout << smallest << endl;
}
