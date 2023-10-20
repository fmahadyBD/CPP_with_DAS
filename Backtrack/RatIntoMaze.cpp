#include <iostream>
using namespace std;

bool isSafe(int **arr, int x, int y, int n)
{
    if (x < n && y < n && arr[x][y] == 1)
    {

        return true;
    }

    return false;
}

bool ratinMaze(int **arr, int x, int y, int n, int **sarr)
{

    if ((x ==( n - 1)) && (y == (n-1)))
    {
        sarr[x][y] = 1;
        return true;
    }
    if (isSafe(arr, x, y, n))
    {

        sarr[x][y] = 1;
        if (ratinMaze(arr, x + 1, y, n, sarr))
        {
            return true;
        }
        if (ratinMaze(arr, x, y + 1, n, sarr))
        {
            return true;
        }
        sarr[x][y] = 0;
        return false;
    }
    return false;
}
int main()
{
    int n;
    cin >> n;
    int **arr = new int *[n];
    // dynamic arr
    for (int i = 0; i < n; i++)
    {
        arr[i] = new int[n];
    }


    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }


    int **sarr = new int *[n];
    for (int i = 0; i < n; i++)
    {
        sarr[i] = new int[n];
        for (int j = 0; j < n; j++)
        {
            sarr[i][j] = 0;
        }
    }


    if (ratinMaze(arr, 0, 0, n, sarr))
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << sarr[i][j] << " ";
            }
            cout<<endl;
        }
    }
    else
{
    cout << "No solution exists" << endl;
}
}