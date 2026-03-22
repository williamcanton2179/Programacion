#include <iostream>
using namespace std;

int main() {

    for(int f = 1; f <= 10; f++) {
        for(int c = 1; c <= 10; c++) {
            if((f + c) % 2 == 0)
                cout << "<";
            else
                cout << ">";
        }
        cout << endl;
    }

    return 0;
}