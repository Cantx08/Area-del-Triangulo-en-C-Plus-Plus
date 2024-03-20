#include <iostream>
#include <cmath>

using namespace std;

int main() {
    cout << "02 Programa que calcula el area de un triangulo" << endl;
    float ladoUno, ladoDos, ladoTres, sp, area;

    // Ingresar la longitud de los lados del triángulo.
    // Nota: Los lados deben tener una longitud mayor a 0!
    cout << "Ingrese la longitud del lado 1 (en cm): ";
    cin >> ladoUno;
    cout << "Ingrese la longitud del lado 2 (en cm): ";
    cin >> ladoDos;
    cout << "Ingrese la longitud del lado 3 (en cm): ";
    cin >> ladoTres;

    // Calcular el semiperímetro y aplicar la fórmula de Herón.
    sp = (ladoUno + ladoDos + ladoTres) / 2;
    area = sqrt(sp * (sp - ladoUno) * (sp - ladoDos) * (sp - ladoTres));

    // Mostrar el resultado en consola.
    cout << "El area es: " << area << " cm^2.";
    return 0;
}
