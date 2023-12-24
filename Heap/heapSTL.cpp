#include <iostream>
#include <vector>
#include <string>
#include <math.h>
#include <stack>
#include <queue>
#include <algorithm>
using namespace std;

/*
--> Mahady Hasan Fahim
--> Github:fmahadyBD

*/

#define vi vector<int>
#define pi pair<int, int>
#define vii vector<pi>
#define rep(i, a, n) for (int i = a; i < n; i++)

signed main()
{

    priority_queue<int, vector<int>> maxheap;
    maxheap.push(1);
    maxheap.push(2);
    maxheap.push(3);
    maxheap.push(5);
    cout << maxheap.top() << endl;
    maxheap.pop();
    cout << maxheap.top() << endl;
    cout << endl;
    priority_queue<int, vector<int>, greater<int>> minHeap;
    minHeap.push(4);
    minHeap.push(5);
    minHeap.push(1);
    minHeap.push(2);
    cout << minHeap.top() << endl;
    minHeap.pop();
    cout << minHeap.top() << endl;
}
