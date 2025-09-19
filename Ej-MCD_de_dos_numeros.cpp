#include <iostream>
using namespace std;

int main() {
    int n1, n2;
    cout << "Ingrese los valores de los numeros de tipo entero:\n";
    cout << "Primer numero: ";
    cin >> n1;
    cout << "Segundo numero: ";
    cin >> n2;

    bool MCD = false;

    if (n1 > 0 && n2 > 0) {
        if (n1 > n2) {
            int aux = n1;
            n1 = n2;
            n2 = aux;
        }
        int i = n1;
        while (!MCD && i >= 1) {
            if (n1 % i == 0 && n2 % i == 0) {
                cout << "El maximo comun divisor (MCD) es: " << i << endl;
                MCD = true;
            } else {
                i--;
            }
        }
    } else {
        if (n1 == n2) {
            cout << "Los numeros ingresados son iguales\n";
        } else {
            cout << "Los numeros ingresados son negativos o nulos\n";
        }
    }

    return 0;
}
