#include <iostream>
#include <string>

using namespace std;

void permutat(string s,string ans){
    if(s.length()==0)
    {
        cout<<ans<<endl;
        return;
    }
    for(int i =0;i<s.length();i++){
        char ch = s[i];
        string ros=s.substr(0,i)+s.substr(i+1);
        permutat(ros,ans+ch);
    }
}

int main()
{
    permutat("ABC","");
    return 0;
}