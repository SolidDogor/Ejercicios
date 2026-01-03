/*
    Problema 1.1 Media de dos valores
    Desarrolle un programa que lea dos números reales del teclado e imprima su media
*/
#include <iostream>

int main() 
{
    float x, y, res;
    std::cout << "Ingrese 'x' y luego 'y': ";
    std::cin >> x >> y;
    res = (x + y) / 2;
    std::cout << "Media de 'x' y 'y': " << res << "\n";

    system("pause");
}