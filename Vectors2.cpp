#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

void ShiftRight(vector<int> &v1){

    size_t size; int i = 0;
    vector<int> product;

    int input, input2;

    cout << "Enter vector size: ";
    cin >> size;

    cout << "Enter vector values: ";
    while (i++ != size) {
        cin >> input;
        v1.push_back(input);
    }
  int shift = size-1;
  rotate(v1.begin(),v1.begin()+shift,v1.end());

  cout << "Shifted to the right: ";
  for (vector<int>::iterator it=v1.begin(); it!=v1.end(); ++it)
    cout << ' ' << *it;

}

int main()
{
    vector<int> v1;
    ShiftRight(v1);

	return 0;
}
