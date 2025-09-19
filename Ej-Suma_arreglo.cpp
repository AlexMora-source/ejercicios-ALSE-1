#include <iostream>
using namespace std;
int main() {
  int arreglo[5] = {5, 10, 30, 14, 20};
  int suma = 0;
  for (int i = 0; i <5; i++){
  suma += arreglo[i];
  }
  cout << "La suma de los elementos del arreglo es: " << suma << endl;
  return 0;
}
