#include <iostream>
#include <string>

using namespace std;

void replce(string str)
{
    if(str.length()==0)
        return;
    if(str[0]=='p' && str[1]=='i'){
        cout<<"3.14";
        replce(str.substr(2));
    } 
    else{
        cout<<str[0];
        replce(str.substr(1));
    }   
}

int main()
{
    string str;
    cin>>str;
    replce(str);
    return 0;
}
