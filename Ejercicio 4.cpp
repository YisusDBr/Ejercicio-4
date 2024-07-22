#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main() {
    string nombreCliente;
    string producto;
    double precio;
    int cantidad;
    double totalCompra = 0.0;

    // Solicitar datos del cliente
    cout << "Ingrese el nombre del cliente: ";
    getline(cin, nombreCliente);

    // Información sobre el producto
    cout << "Ingrese el nombre del producto: ";
    getline(cin, producto);
    cout << "Ingrese el precio del producto: ";
    cin >> precio;
    cout << "Ingrese la cantidad de productos: ";
    cin >> cantidad;

    // Calcular total de la compra
    double subtotal = precio * cantidad;
    totalCompra += subtotal;

    // Calcular descuento si aplica
    double descuento = 0.0;
    if (totalCompra > 1000) {
        descuento = totalCompra * 0.20; // 20% de descuento
    }

    double totalAPagar = totalCompra - descuento;

    // Mostrar resultados
    cout << fixed << setprecision(2); // Formato para mostrar dos decimales
    cout << "\n--- Detalles de la compra ---" << endl;
    cout << "Nombre del cliente: " << nombreCliente << endl;
    cout << "Producto: " << producto << endl;
    cout << "Precio unitario: $" << precio << endl;
    cout << "Cantidad: " << cantidad << endl;
    cout << "Subtotal: $" << subtotal << endl;
    cout << "Descuento: $" << descuento << endl;
    cout << "Total a pagar: $" << totalAPagar << endl;

    return 0;
}
