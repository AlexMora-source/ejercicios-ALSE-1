#include <iostream>
#include <cmath>
using namespace std;
int main() {
  double P, r;
  int n, t;
  cout << "Se hallarà el valor del interes compuesto de los valores ingresados: \n";
  cout << "Ingrese la cantidad invertida: ";
  cin >> P;
  cout << "\n";
  cout << "Ingrese la cantidad de interes anual: ";
  cin >> r;
  cout << "\n";
  cout << "Ingrese el número de veces que aplica el interés al año: ";
  cin >> n;
  cout << "\n";
  cout << "Cantidad de años: ";
  cin >> t;
  cout << "\n";
  double A = P * pow(1 + (r / n), n * t);
  cout << "El valor del interes compuesto es: " << A << endl;
  return 0;
}
