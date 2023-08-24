#include <iostream>
#include <string>
using namespace std;

char MaxOccChar(string s)
{
    int arr[26] = {0};
    for (int i = 0; i < s.length(); i++)
    {
        char ch = s[i];
        int number = 0;
        number = ch - 'a';
        arr[number]++;
    }

    int max = -1;
    int answer = 0;
    for (int i = 0; i < 26; i++)
    {
        if (max < arr[i])
        {
            answer = i;
            max = arr[i];
        }
    }
    char finalAns = answer + 'a';
    return finalAns;
}

int main()
{
    string s;
    cin >> s;
    cout << MaxOccChar(s);
}
