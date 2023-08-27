#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the no. of rows you want in 2-D Array:" << endl;
    cin >> n;

    int **arr = new int *[n];
    int *size = new int[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Enter the size of array no. " << i << " : ";
        cin >> size[i];
        arr[i] = new int[size[i]];
    }

    cout << endl
         << "Enter the elements of Jaggered Array" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < size[i]; j++)
        {
            cin >> arr[i][j];
        }
    }

    cout << endl
         << "Your Jaggered Array is " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < size[i]; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}