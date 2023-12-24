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

priority_queue<int, vi, greater<int>> pqmin;
priority_queue<int, vi> pqmax;
void insert(int x)
{
    if (pqmax.size() == pqmin.size())
    {
        if (pqmax.size() == 0)
        {
            pqmax.push(x);
            return;
        }

        if (x < pqmax.top())
        {
            pqmax.push(x);
        }
        else
        {
            pqmin.push(x);
        }
    }
    else
    {
        {
            if (pqmax.size() > pqmin.size())
            {
                if (x >= pqmax.top())
                {
                    pqmin.push(x);
                }
                else
                {
                    int temp = pqmax.top();
                    pqmax.pop();
                    pqmin.push(temp);
                    pqmax.push(x);
                }
            }
            else
            {
                if (x < pqmax.top())
                {
                    pqmax.push(x);
                }
                else
                {
                    int temp = pqmin.top();
                    pqmin.pop();
                    pqmin.push(x);
                    pqmax.push(temp);
                }
            }
        }
    }
}
double median()
{
    if (pqmin.size() == pqmax.size())
    {
        {
            return (pqmax.top() + pqmin.top()) / 2.0;
        }
    }
    else if (pqmin.size() > pqmax.size())
    {
        return pqmin.top();
    }
    else
    {
        return pqmax.top();
    }
}
signed main()
{
    insert(10);
    cout << median() << endl;
    insert(15);
    cout << median() << endl;
    insert(21);
    cout << median() << endl;
    insert(30);
    cout << median() << endl;
    insert(18);
    cout << median() << endl;
    insert(19);
    cout << median() << endl;
}
