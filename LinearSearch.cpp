#include <iostream>
using namespace std;

int search(int arr[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            return 1;
        }
    }
    return 0;
}

int main()
{
    int num[20];
    int size;
    cout << "Enter size of array" << endl;
    cin >> size;

    cout << "Enter " << size << " elements: " << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> num[i];
    }

    int key;
    cout << "Enter the element you want to search: ";
    cin >> key;

    int found = search(num, size, key);
    if (found)
    {
        cout << "Key is Present" << endl;
    }
    else
        cout << "Key is absent" << endl;
}