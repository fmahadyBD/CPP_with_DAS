#include <iostream>
#include <unordered_set>
using namespace std;
int main()
{
    unordered_set<int> s;
    s.insert(1);
    s.insert(11);
    s.insert(2);
    s.insert(21);
    s.insert(14);
    s.insert(10);

    for (auto i : s)
        cout << i << " ";

    return 0;
}
