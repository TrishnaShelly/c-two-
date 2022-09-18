// put n items with given weight and the value in a knapsack of capacity W to
// get the maximum total value in the knapsack;

#include <iostream>
#include <algorithm>
using namespace std;

int knapsack(int value[], int weight[], int n, int w)
{
    if (n == 0 || w == 0)
        return 0;
    if (weight[n-1] > w)
        return knapsack(value, weight, n - 1, w);

    return max(knapsack(value, weight, n - 1, w - weight[n - 1] + value[n - 1]),
               knapsack(value, weight, n - 1, w));
}

int man()
{
    int wt[] = {10, 20, 30};
    int value[] = {100, 150, 20};
    int w = 50;
    cout << knapsack(value, wt, 3, w);
    return 0;
}