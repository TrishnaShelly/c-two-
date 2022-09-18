#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    for (auto i : v)
    {
        cout << i << " ";
    }
    cout << endl;
    vector<int>::iterator it;
    for (it = v.begin(); it != v.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    v.pop_back();

    vector<int> v2(3, 50);
    for (auto i : v2)
    {
        cout << i << " ";
    }
    cout<<endl;
    swap(v, v2);
    for (auto i : v)
    {
        cout << i << " ";
    }
    cout<<endl;
    for (auto i : v2)
    {
        cout << i << " ";
    }
    cout<<endl;

    sort(v.begin(),v.end());
}
