#include <iostream>
using namespace std;

int main()
{
    int result = 0;
    int numbers[4];
    cin >> numbers[0] >> numbers[1] >> numbers[2] >> numbers[3];
    for (int i = 0; i < 4; i++)
    {
        if (numbers[i] > result)
        {
            result = numbers[i];
        }
    }
    cout << result;
    return 0;
}