/*
    Problema 1.8 Raíz cuadrada entera
    Desarrolle un programa que calcule la raíz cuadrada entera por defecto de un número N positivo dado, que se define como el mayor número entero R > 0, tal que R^2 <= N
*/
#include <iostream>

int main()
{
    float n = 0, i = 1;

    std::cout << "Introduzca un numero: ";
    std::cin >> n;
   
    while(i*i < n) i++;

    std::cout << "Raiz entera aproximada de " << n << " es " << i << "\n";

    system("pause");
}
