// count the number of paths possible from start point 
//to end point in gameboard

#include <iostream>
using namespace std;

int path(int s,int e)
{
    if(s==e)
      return 1;
    if(s>e)
      return 0;
    int count=0;
    for(int i =1;i<=6;i++)
    {
        count+=path(s+i,e);
    }
    return count;
}

int main()
{
    cout<<path(1,6);
    return 0;
}

