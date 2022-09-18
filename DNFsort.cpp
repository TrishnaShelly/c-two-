// duch national flag algorithm

#include <iostream>
using namespace std;

void snfSort(int arr[],int n)
{
    int l=0;
    int mid=0;
    int h=n-1;
    while(mid<=h)
    {
        if(arr[mid]==0)
        {
            int temp=arr[l];
            arr[l]= arr[mid];
            arr[mid]=temp;
            // mid++;
            l++;
        }
        else if (arr[mid]==1)
        {
            mid++;
        }
        else
        {
            int temp=arr[h];
            arr[h]= arr[mid];
            arr[mid]=temp;
            h--;
        }
    }
}

int main()
{
    int arr[12]={1,0,2,1,2,1,0,0,1,2,1,2};
    snfSort(arr,12);
    for(int i =0;i<12;i++)
    {
        cout<<arr[i]<<' ';
    }
    return 0;
}