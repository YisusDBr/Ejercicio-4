#include <iostream>

using namespace std;

int main() {
    int edad1, edad2, edad3;
    int mayor, media, menor;

    // Pedir al usuario que ingrese las edades de los tres hijos
    cout << "Ingresa la edad del primer hijo: ";
    cin >> edad1;
    cout << "Ingresa la edad del segundo hijo: ";
    cin >> edad2;
    cout << "Ingresa la edad del tercer hijo: ";
    cin >> edad3;

    // Encontrar la edad mayor
    mayor = edad1;
    if (edad2 > mayor) {
        mayor = edad2;
    }
    if (edad3 > mayor) {
        mayor = edad3;
    }

    // Encontrar la edad menor
    menor = edad1;
    if (edad2 < menor) {
        menor = edad2;
    }
    if (edad3 < menor) {
        menor = edad3;
    }

    // Calcular la edad media
    media = (edad1 + edad2 + edad3) - mayor - menor;

    // Mostrar los resultados
    cout << "La edad mayor es: " << mayor << endl;
    cout << "La edad media es: " << media << endl;
    cout << "La edad menor es: " << menor << endl;

    return 0;
}
