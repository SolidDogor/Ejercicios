/*
    Problema 1.9 Número primo
    Desarolle un programa que lea por teclado un número entero mayor que 1 y determine si es primo o no.
*/
#include <iostream>

void determinarPrimo(int x);

int main()
{
    int x;
    std::cout << "Ingrese su numero: ";
    std::cin >> x;

    if (x >= 1) determinarPrimo(x);
    else std::cout << "Numero ingresado no valido.\n";

    system("pause");
}

void determinarPrimo(int x)
{
    int divisores = 0;
    for (int i = 1; i <= x; i++)
    {
        if (x % i == 0) divisores++;
        if (divisores > 2) break;
    }

    (divisores == 2) ? std::cout << "El numero es primo\n" : std::cout << "El numero no es primo\n";
}
