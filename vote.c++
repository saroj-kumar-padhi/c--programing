#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i];
    }
}
int main()
{
    int arr[5] = {0, 1, 0, 1, 0};

    cout << "before sorting"
         << "\n";
    printArray(arr, 5);
    cout << "after swapping"
         << "\n";
    sort(arr, arr + 5);
    printArray(arr, 5);

    return 0;
}