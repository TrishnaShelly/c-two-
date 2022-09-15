#include <iostream>
using namespace std;

void primefactor(int);

void prime(int n)
{
    int arr[100] = {0};
    for (int i = 2; i <= n; i++)
    {
        if (arr[i] == 0)
        {
            for (int j = i * i; j <= n; j += i)
            {
                arr[j] = 1;
            }
        }
    }
    for (int i = 2; i <= n; i++)
    {
        if (arr[i] == 0)
            cout << i << " ";
    }
}

int main()
{
    int n;
    cin >> n;
    primefactor(n);
    return 0;
}

// prime factorisation using sieve
void primefactor(int n)
{
    int spf[100] = {0};
    for (int i = 2; i <= n; i++){
        spf[i] = i;
    }
        
    for (int i = 2; i <= n; i++)
    {
        if (spf[i] == i)
        {
            for (int j = i * i; j <= n; j +=i)
            {
                if (spf[j] == j){
                    spf[j] = i;
                }
                    
            }
        }
    }
    while(n>1){
        cout<<spf[n]<<" ";
        n=n/spf[n];
    }
}