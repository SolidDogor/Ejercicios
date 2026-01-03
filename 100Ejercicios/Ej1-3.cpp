/*
    Problema 1.3 Divisible
    Desarrolle un programa que lea dos números enteros por teclado y determine si el primero de ellos es divisible por el segundo. 
    Se mostrará por pantalla el resultado.
*/
#include <iostream>

int main()
{
    int x, y;
    std::cout << "Ingrese 'x' y 'y': ";
    std::cin >> x >> y;

    (x % y == 0) ? std::cout << "Divisible\n" : std::cout << "No divisible\n";
    system("pause");
}
