#include <iostream>
#include <string>
using namespace std;

void reverse(string str)
{
    if (str.length() == 0)
        return;
    string ros = str.substr(1);
    reverse(ros);
    cout << str[0];
}

int main()
{
    string str;
    getline(cin,str);
    reverse(str);
    // cout<<" "<<str;
    return 0;
}
