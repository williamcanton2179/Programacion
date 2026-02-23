#include <iostream>
using namespace std;

int main() {

    for(int f = 1; f <= 10; f++) {
        for(int c = 1; c <= f; c++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}