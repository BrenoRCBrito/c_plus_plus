#include <iostream>
#include <format>
using namespace std;

int main()
{
    char c1;
    long l1, l2;
    float f1;
    double d1;

    cin >> l1 >> l2 >> c1 >> f1 >> d1;

    string formatted_f1 = format("{:.3f}\n", f1);
    string formatted_d1 = format("{:.9f}\n", d1);

    cout << l1 << "\n"
         << l2 << "\n"
         << c1 << "\n"
         << formatted_f1
         << formatted_d1;

    return 0;
}
