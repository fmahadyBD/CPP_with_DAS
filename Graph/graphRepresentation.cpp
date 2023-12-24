#include <iostream>
#include <vector>
#include <string>
#include <math.h>
#include <stack>
#include <queue>
#include <algorithm>
#include "bits/stdc++.h"
using namespace std;

/*
--> Mahady Hasan Fahim
--> Github:fmahadyBD


*/

#define vi vector<int>
#define vvi vector<vi>
#define vii vector<pi>
#define pii pair<int, int>
#define ff first
#define ss second
#define rep(i, a, n) for (int i = a; i < n; i++)
const int N = 1e5 + 2, MOD = 1e9 + 7;

// for adjacency list we must declear vectot
vi adjl[N];
signed main()
{
    /* input row column:
7 7
1 2
1 3
2 4
2 5
2 6
2 7
3 7
        */

    int n, m;
    cin >> n >> m;
    // adjacency matrix
    vvi adjm(n + 1, vi(n + 1, 0));
    rep(i, 0, m)
    {
        int x, y;
        cin >> x >> y;
        adjm[x][y] = 1;
        adjm[y][x] = 1;
    }
    rep(i, 1, n + 1)
    {
        rep(j, 1, n + 1)
        {
            cout << adjm[i][j] << " ";
        }
        cout << endl;
    }

    // there is any edgs??:
    if (adjm[3][7])
    {
        cout << "edges between 3 and 7" << endl;
    }
    else
    {
        cout << " There is no edges" << endl;
    }

    // adjacency list
    cout << endl
         << endl
         << endl;
    cin >> n >> m;
    rep(i, 0, n)
    {
        int x, y;
        cin >> x >> y;
        adjl[x].push_back(y);
        adjl[y].push_back(x);
    }
    rep(i, 1, n + 1)
    {
        cout << i << "->";
        vector<int>::iterator it;
        for (it = adjl[i].begin(); it != adjl[i].end(); it++)
        {
            cout << *it << " ";
        }
        cout << endl;
    }
}
