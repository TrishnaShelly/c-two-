#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> ans;

// void permute(vector<int> &a, int ind)
// {
//     if(ind == a.size())
//     {
//         ans.push_back(a);
//         return ;
//     }
//     for(int i =ind;i<a.size();i++)
//     {
//         swap(a[i],a[ind]);
//         permute(a,ind+1);
//         swap(a[i],a[ind]);
//     }
//     return;
// }

// int main()
// {
//     int n;
//     cin >> n;
//     vector<int> a(n);
//     for (auto &i : a)
//         cin >> i;
//     permute(a, 0);
//     for (auto v : ans)
//     {
//         for (auto i : v)
//         {
//             cout << i << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }

//short method


int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &i : a)
        cin >> i;
    sort(a.begin(),a.end());
    do{
        ans.push_back(a);
    }while(next_permutation(a.begin(),a.end()));
    for (auto v : ans)
    {
        for (auto i : v)
        {
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}
