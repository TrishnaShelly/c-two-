#include<iostream>
#include<string>

using namespace std;

string move(string s){
    if(s.length()==0){
        return "";
    }
    char ch = s[0];
    string ans= move(s.substr(1));
    if(ch =='x')
    {
        return ans+ch;
    }
    return  ch+ans;
}

int main()
{
    string str;
    cin >> str;
    cout << move(str); 
    return 0;
}