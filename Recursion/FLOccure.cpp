#include <iostream>
using namespace std;
int FL(int arr[], int key, int n, int i)
{

    if (n == i)
    {
        return -1;
    }

    if (arr[i] == key)
    {
        return i;
    }
    return FL(arr, key, n, i + 1);
}
int LF(int arr[], int key, int n, int i)
{

    if (i == n)
    {
        return -1;
    }
    int a = FL(arr, key, n, i + 1);
    if (a != -1)
    {
        return a;
    }
    else
    {
        if (arr[i] == key)
        {
            return i;
        }
        else
        {
            return -1;
        }
    }
}
int main()
{
    int arr[] = {1, 2, 3, 2, 4, 2, 1};
    int fl = FL(arr, 2, 7, 0);
    if (fl != -1)
    {
        cout << "Index of first Occerd:" << fl << endl;
    }
    int lf = LF(arr, 2, 7, 0);
    cout << "Index of last Occerd: " << lf << endl;
}