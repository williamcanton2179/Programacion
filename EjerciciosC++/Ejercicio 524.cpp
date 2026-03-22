#include <iostream>
using namespace std;

int main() {

    for(int i = 1; i <= 10; i++) {

        if(i == 5) {
            cout << "Se encontro el 5, se detiene el ciclo." << endl;
            break;
        }

        cout << i << endl;
    }

    return 0;
}