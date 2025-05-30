#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;  
    cout << "Enter number of students: ";
    cin >> n;

    int   *names = new string[n];
    cout << "Enter student names:\n";
    for (int i = 0; i < n , i++)
    {
        cout << i + 1 << ". ";
        cin >> names[i];
    }

    sting key;
    cout << "Enter the name to search: ";
    cin >> key;
    
    bool found = false;
    cout |
    << "Found in position: ";
    for (int i = 0; i < n; i++)
    {
        if (name[i] == key)
        {
            cout << i +  1 << " .";
            found = true;
        }
    }

    if (!found)
    {
        cout << "\nStudent not founf in the list,";
    }

    cout << endl;
    delete[] names;
    return 0;
}

