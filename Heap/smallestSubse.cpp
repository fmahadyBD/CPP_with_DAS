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
    int k, n;
    cin >> n >> k;
    vi a(n);
    rep(i, 0, n)
    {
        cin >>a[i];
    }
    priority_queue<int, vi> pq;
    rep(i, 0, n)
    {
        pq.push(a[i]);
    }
    int sum = 0;
    int ctn = 0;
    while (!pq.empty())
    {
        sum += pq.top();
        pq.pop();
        ctn++;
        if (sum >= k)
        {
            break;
        }
    }
    if (sum < k)
        cout << "-1";
    else
        cout << ctn << endl;
}
