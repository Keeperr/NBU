#include <iostream>
#include <set>
#include <algorithm>

using namespace std;

void print(const std::string& item)
{
    cout << item << endl;
}

int main()
{
    std::set<std::string> sortedItems;
    cout << "Enter three strings: ";

    for(int i = 1; i <= 3; i++)
    {
        std::string name;
        cin >> name;

        sortedItems.insert(name);
    }

    std::for_each(sortedItems.begin(), sortedItems.end(), &print);


    return 0;
}
