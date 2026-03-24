#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vec = {7, 1, 5, 3, 6, 4};
    int n = vec.size();
    int miniPrice = INT8_MAX;
    int maxProfit = 0;

    for (int i = 0; i < n; i++)
    {
        if (vec[i] < miniPrice)
        {
            miniPrice = vec[i];
        }
        else if (vec[i] - miniPrice > maxProfit)
        {
            maxProfit = vec[i] - miniPrice;
        }
    }
    cout << maxProfit;
}
