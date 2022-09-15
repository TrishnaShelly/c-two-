#include <iostream>
using namespace std;

int numOne(int n)
{
    int count = 0;
    while (n)
    {
        n = n & n - 1;
        count++;
    }
    return count;
}

int main()
{
    cout << numOne(1);
    return 0;
}