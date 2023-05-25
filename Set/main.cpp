#include <bits/stdc++.h>
using namespace std;
int main()
{
    set<int> s;
    s.insert(10);
    int in;
    for (int i = 0; i < 5; i++)
    {
        cin >> in;
        s.insert(in);
    }

    set<int>::iterator it = s.begin();
    for (; it != s.end(); it++)
    {
        cout << *it << endl;
    }
    cout<<s.size()<<endl;
   // cout<<s.max_size()<<endl;
    cout<<s.empty()<<endl;
    s.erase(1);
    // if 1 is stay
    s.erase(s.begin,s.find(39));
    // erase still finding 29. and 29 will stay;
    s.clear();
    // decending order
    set<int, greater<int>>gg;
    gg.insert(40);
    gg.insert(500);

    set<int ,greater<int>>:: iterator itr;
    for(it=gg.begin();it!=gg.end();++it){
        cout<<*it<<endl;
    }

}
