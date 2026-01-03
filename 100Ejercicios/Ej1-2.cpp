/*
    Problema 1.2 Valor absoluto de x al cubo
    Desarrolle un programa que lea un número real x y escriba por pantalla |x|³
*/

#include <iostream>
int main()
{
    float x, y, res;
    std::cout << "Ingrese un numero real: ";
    std::cin >> x;
    (x < 0) ? y = x * (-1) : y = x;
    res = y * y * y;
    std::cout << x << "^3 = " << res << "\n";

    system("pause");
}