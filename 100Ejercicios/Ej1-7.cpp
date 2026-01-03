/*
    Problema 1.7 Máximo, mínimo y media de alturas
    Desarrolle un programa que lea por teclado un número indeterminado de alturas y que deje de leer cuando se haya introducido una negativa.
    El programa debe calcular e imprimir la media, el máximo y el mínimo de las alturas introducidas
*/
#include <iostream>

int main()
{
    int n = 0;
    float x = 0, med = 0, max = 0, min = 0;

    std::cout << "Introduzca una altura: ";
    std::cin >> x;
    n++;
    med += x;
    max = x;
    min = x;

    while (true)
    {
        std::cout << "Introduzca una altura: ";
        std::cin >> x;
        if (x < 0) break;
        n++;
        med += x;
        if (x > max) max = x;
        if (x < min) min = x;
    }

    med /= n;

    
    std::cout << "Media: " << med << "\n";
    std::cout << "Maximo: " << max << "\n";
    std::cout << "Minimo: " << min << "\n";

    system("pause");
}
