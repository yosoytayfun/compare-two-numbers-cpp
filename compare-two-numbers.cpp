#include <iostream>
using namespace std;

int numero;

int main() {
    int numero2;

    cout << "Introduce un numero entero: ";
    cin >> numero;

    cout << "El numero que introdujiste es: " << numero << endl;

    cout << "Introduce un segundo numero entero: ";
    cin >> numero2;

    if (numero < numero2) {
        cout << "El numero " << numero << " es menor que el numero " << numero2 << endl;
    } 
    else if (numero > numero2) {
        cout << "El numero " << numero << " es mayor que el numero " << numero2 << endl;
    } 
    else {
        cout << "Ambos numeros son iguales." << endl;
    }

    return 0;
}

