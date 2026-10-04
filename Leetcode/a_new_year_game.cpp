#include <bits/stdc++.h>
using namespace std;

int minimumChocolates(int arr[], int N)
{
    int max_M_needed_therotical = 0;
    for (int i = 0; i < N; i++)
    {
        if (arr[i] + i > max_M_needed_therotical)
        {
            max_M_needed_therotical = arr[i] + i;
        }
    }

    for (int M = 1; M <= max_M_needed_therotical; M++)
    {
        int current_chocolate = M;
        bool can_this_win = true;

        for (int i = 0; i < N; i++)
        {
            if (current_chocolate < arr[i])
            {
                can_this_win = false;
                break;
            }
            current_chocolate--;
        }
        if (can_this_win)
        {
            return M;
        }
    }
    return max_M_needed_therotical;
}

int main()
{

    int n = 5;
    vector<int> carpetValues = {3, 4, 3, 1, 1};

    return 0;
}