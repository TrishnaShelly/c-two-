#include <iostream>
using namespace std;

int getBit(int n, int pos)
{
    return (n & (1 << pos));
}

void unique(int arr[], int n)
{
    int xorsum = 0;
    for (int i = 0; i < n; i++)
    {
        xorsum = xorsum ^ arr[i];
    }
    int temp = xorsum;
    int pos = 0;
    int last = 0;
    while (last != 1)
    {
        last = temp & 1;
        pos++;
        temp = temp >> 1;
    }
    int first = 0;
    for (int i = 0; i < n; i++)
    {
        if (getBit(arr[i], pos-1))
        {
            first = first ^ arr[i];
        }
    }
    int second = first ^ xorsum;
    cout << first << " " << second;
}

int main()
{
    int arr[] = {2, 2, 4, 6, 6, 8};
    unique(arr, 6);
    return 0;
}