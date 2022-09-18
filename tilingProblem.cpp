// given a "2xn" board and tiles of size "2x1" , count the number of ways to tile
// the given board using this tiles.
#include <iostream>
using namespace std;

int ways(int n)
{
     if (n == 0 || n==1)
        return n;
    return ways(n-1)+ways(n-2);    
}

int main()
{
   cout<< ways(4);
    return 0;
}