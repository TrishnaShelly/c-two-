#include<iostream>
#include<string>

using namespace std;

void substring(string s, string ans)
{
    if(s.length()==0)
    {
        cout<<ans<<endl;
        return;
    }
    char ch = s[0];
    string rest= s.substr(1);
    substring(rest,ans+ch);
    substring(rest,ans);
    
}

int main()
{
    string str;
    cin >> str;
    substring(str,"");
    return 0;
}