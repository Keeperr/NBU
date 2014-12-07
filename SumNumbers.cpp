#include<iostream>
using namespace std;

int sumNumbers(int& sum, int number)
{
    if (number%2==0&&number%3!=0)
    {
       sum += number;
    }
    return sum;
}

int main ()
{
   int sum = 0;
   int x;
   while(cin >> x){
       sum = sumNumbers(sum, x);
   }

   cout << sum;
}
