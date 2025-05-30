#include <iostream>
using namespace std;

int main()
{
    int arr[] = {64, 25, 12, 22, 11};
    int a = sizeof(arr) / sizeof(ar(0))

    for (int i = 0; i < n, i++)
    {
        for (int i = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr [j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;

            }
        }
    }

    cout << "Sorted array: ";
    for {int i = 0; i < n; i++}
    {
        cout << arr[i] << " ";
    }
    return 0;
}