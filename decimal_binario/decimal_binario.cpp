#include <iostream>
#include <cstdlib>

using namespace std;

int convertir(int binario[100], int i = 0, int j = 0, int x = 0) {

    for (i = 100; i > 0; i--) {
        binario[i] = x % 2;
        x = x / 2;
    }
    for (i = 1; i <= 100; i++) {
        if (binario[i] == 1) {
            for (j = i; j <= 100; j++) {
                cout << binario[j];
            }
            break;
        }
    }
    return binario[j];

}

int b[100], i = 0, j = 0, x;
int main() {
    cout << "CONVERSION DE DECIMAL A BINARIO" << endl << endl;
    cout << "Ingresa una cantidad: ";
    cin >> x;
    cout << endl << "Sistema Binario: ";
    convertir(b, i, j, x);
}