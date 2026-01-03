/*
    Problema 1.10 Números primos comprendidos entre dos números dados
    Desarolle un programa que muestre por pantalla todos los números primos comprendidos entre dos números enteros introducidos por teclado.
*/
#include <iostream>

void determinarPrimos(int x, int y);
bool determinarPrimo(int x);

int main()
{
    int x, y;
    std::cout << "Ingrese el primer numero: ";
    std::cin >> x;
    std::cout << "Ingrese el segundo numero: ";
    std::cin >> y;

    if (x >= 1) determinarPrimos(x, y);
    else std::cout << "Numero ingresado no valido.\n";

    system("pause");
}

void determinarPrimos(int x, int y)
{
    std::cout << "Imprimiendo primos en el rango " << x << "-" << y << ":\n";
    for (int i = x; i <= y; i++)
    {
        if (determinarPrimo(i)) std::cout << i << "\n";
    }
}

bool determinarPrimo(int x)
{
    int divisores = 0;
    for (int i = 1; i <= x; i++)
    {
        if (x % i == 0) divisores++;
        if (divisores > 2) return false;
    }

    return true;
}
