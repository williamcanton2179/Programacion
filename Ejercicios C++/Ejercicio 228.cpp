#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    cout << n / 10000 << " ";
    n %= 10000;
    cout << n / 1000 << " ";
    n %= 1000;
    cout << n / 100 << " ";
    n %= 100;
    cout << n / 10 << " ";
    cout << n % 10;

    return 0;
}