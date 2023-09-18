#include <iostream>

using namespace std;

const char *numberNames[] = {
    "one",
    "two",
    "three",
    "four",
    "five",
    "six",
    "seven",
    "eight",
    "nine"};

int main()
{
    int a, b;
    cin >> a >> b;
    for (int i = a; i <= b; i++)
    {
        if (i >= 1 && i <= 9)
        {
            cout << numberNames[i - 1];
        }
        else if (i % 2 == 0)
        {
            cout << "even";
        }
        else
        {
            cout << "odd";
        }
        cout << "\n";
    }

    return 0;
}