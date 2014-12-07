#include <iostream>
using namespace std;

int sumDigits(int n)
{
    int total(0);

    while(n>0){
        total += n % 10;
        n /= 10;
    }

    return total;
}

int main(){

    int numbaah;
    cin >> numbaah;

    cout << sumDigits(numbaah) << endl;

    return 0;
}
