#include <iostream>
using namespace std;


int main() {
    int i;
    double d;
    string s;
    cin >> i >> d;
    getline(cin >> ws, s);
    printf("%d\n%.1lf\n%s%s", i + 4, d + 4, "HackerRank ", s.c_str());
    return 0;
}