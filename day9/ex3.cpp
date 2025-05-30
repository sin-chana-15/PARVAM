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
        cin >> rolls[i];
    }

    int  key;
    cout << "Enter the number to search: ";
    cin >> key;

    bool found = false;
    for (int i = 0; i < n; i++)
    {
        if (int[i] == key)
        {
            cout << "Student" << key << " found at position " << i +  1 << endl;
            found = true;
            break;
        }
    }

    if (!found)
    {
        cout << "Student " << key << " not found in the list."  << endl; 
    }

    delete[] ;
    return 0;
}