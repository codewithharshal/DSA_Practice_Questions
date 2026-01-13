#include <iostream>
using namespace std;

int main()
{
    int mat[5][5] = {
        {1, 2, 3, 4, 5},
        {6, 7, 8, 9, 10},
        {11, 12, 13, 14, 15},
        {16, 17, 18, 19, 20},
        {21, 22, 23, 24, 25}};

    int top = 0, bottom = 4;
    int left = 0, right = 4;

    while (top <= bottom && left <= right)
    {
        // top
        for (int i = left; i <= right; i++)
        {
            cout << mat[top][i] << " ";
        }
        top++;

        // right
        for (int j = top; j <= bottom; j++)
        {
            cout << mat[j][right] << " ";
        }
        right--;

        // bottom
        if (top <= bottom)
        {

            for (int k = right; k >= left; k--)
            {
                cout << mat[bottom][k] << " ";
            }
            bottom--;
        }

        // left
        if (left <= right)
        {

            for (int l = bottom; l >= top; l--)
            {
                cout << mat[l][left] << " ";
            }
            left++;
        }
    }

    return 0;
}
