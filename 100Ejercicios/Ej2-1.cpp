/*
    Problema 2.1 Vector al revés
    Desarolle un programa que lea las N componentes de un vector y las escriba a continuación en orden inverso al introducido.
    El valor de N se introduce por teclado y se supone que será igual o menor a 10
*/
#include <iostream>
#include <vector>

int main()
{
    int n = 10;
    float x;
    std::vector<float> vec(n);
    for(int i = 0; i < n; i++) 
    {
        std::cout << "Ingrese el valor #" << i + 1 << ": ";
        std::cin >> vec[i];
    }
    
    std::cout << "Valores del vector:\n";
    for (int i = n - 1; i >= 0; i--) std::cout << vec[i] << "\n";

    system("pause");
}
