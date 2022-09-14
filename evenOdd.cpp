#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    bool result= (n & 1<<0);
    if(result)
    cout<<"even";
    else
    cout<<"odd";
    return 0;
}