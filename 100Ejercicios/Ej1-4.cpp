/*
    Problema 1.4 Intervalo
    Desarrolle un programa que lea un número real del teclado y determine si pertenece al intervalo (0,10], indicando por pantalla el resultado
*/
#include <iostream>

int main()
{
    float x, min = 0, max = 10;
    std::cout << "Ingrese su numero: ";
    std::cin >> x;

    ((x > min) && (x <= 10)) ? std::cout << "Pertenece al intervarlo (" << min << "-" << max << "]\n" : std::cout << "No pertenece al intervarlo (" << min << "-" << max << "]\n";
    system("pause");
}
