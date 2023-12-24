#include <iostream>
#include <vector>
#include <string>
#include <math.h>
#include <stack>
#include <queue>
#include <algorithm>
using namespace std;
#define vi vector<int>
#define pi pair<int, int>
#define vii vector<pi>
// for(int i=a;i<n;i++)
#define rep(i, a, n) for (int i = a; i < n; i++)
// #define setbits(n builtin_popcout(n))

void hepify(vi &a, int n, int i)
{
    int maxIdx = i;// i will be parent node 
    int l = 2 * i + 1;// it will be left of i
    int r = 2 * i + 2;// it will be right of i node
    if (l < n && a[l] > a[maxIdx])
    {
        maxIdx = l;
        // cout << "maxIdx-> l" << endl;
    }
    if (r < n && a[r] > a[maxIdx])
    {
        maxIdx = r;
        // cout << "maxIdx-> r" << endl;
    }
    if (maxIdx != i)
    {
        // cout << "maxIdx != i" << endl;
        swap(a[i], a[maxIdx]);
        hepify(a, n, maxIdx);
    }
}

void heapsort(vi &a)
{
    int n = a.size();
    for (int i = n / 2 - 1; i >= 0; i--)
    {
        hepify(a, n, i);
        // this loop make the heap as a max heap.
        //last non leaf node that willbe heapify down, 
    }
    rep(i, 0, n)
    {

        cout << a[i] << " ";
    }

    cout<<"end->\n";


    for (int i = n - 1; i > 0; i--)
    {
        // this is for sorted the array 
        swap(a[0], a[i]);
        hepify(a, i, 0);
    }
}

signed main()
{
    int n;
    cin >> n;
    vi a(n);
    rep(i, 0, n)
    {
        cin >> a[i];
    }
    heapsort(a);
    // cout << "Okay " << endl;
    rep(i, 0, n)
    {

        cout << a[i] << " ";
    }

    return 0;
}
