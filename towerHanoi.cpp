// Tower of Hanoi
#include <iostream>
using namespace std;

void toh(int n ,char src,char des, char help){
    if(n==0)
    return;
    toh(n-1,src,help,des);
    cout<<"move from "<<src<<" to "<<des<<endl;
    toh(n-1,help,des,src);
}

int main()
{
    toh(6,'A','C','B');
    return 0;
}