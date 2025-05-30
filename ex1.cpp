#include <iostream>
using namespace std;

int main()
{
    int array[] = {4,2,7,2,9};
    int key = 7;
    int size =sizeof(arr) / sizeof(arr(0));
    bool found = false;

    for (int i = 0; i <size; i++)
    {
        if (array[i] == key)
        {
            cout << "Element " < key << " found at index " << i << endl;
            found = true;
            break;
        }
    }

    if (!found)
    {
        cout << "Element "  << key << " not found." << endl;
    }

    return 0;
}
