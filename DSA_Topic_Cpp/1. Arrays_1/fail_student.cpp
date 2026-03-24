#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of students: ";
    cin >> n;
    int marks[n];
    cout << "Enter the marks: ";
    for (int i = 0; i < n; i++)
    {
        cin >> marks[i];
    }
    int fail_count = 0;
    for (int i = 0; i < n; i++)
    {
        if (marks[i] < 35)
            fail_count++;
    }
    cout << "Number of failed students: " << fail_count << endl;
    return 0;
}
