#include <iostream>
#include <vector>
using namespace std;

// int main()
// {
//     vector<int> vec = {1, 2, 2, 2, 2};
//     int n = vec.size();
//     vector<int> vecUniq;
//     int i = 0;
//     int j = 0;

//     while (i < n)
//     {
//         while (j < n && vec[i] == vec[j])
//         {
//             j++;
//         }
//         vecUniq.push_back(vec[i]);
//         i = j;
//     }

//     for (int x : vecUniq)
//     {
//         cout << x << " ";
//     }
// }

int main()
{
    vector<int> vec = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};
    int n = vec.size();

    int insertedIndex = 1;
    for (int i = 1; i < n; i++)
    {
        if (vec[i - 1] != vec[i])
        {
            vec[insertedIndex] = vec[i];
            insertedIndex++;
        }
    }

    for (int x : vec)
    {
        cout << x << " ";
    }
}