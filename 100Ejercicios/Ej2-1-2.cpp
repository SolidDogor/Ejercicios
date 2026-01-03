/*
    Problema 2.1.2 Norma de un vector al cuadrado
    Desarrolle un programa que lea las n componentes reales de un vector vec y calcule: m = vect^T x vec.
    El tamaño de n se introduce por teclado y puede suponer que es igual o menor que 10
*/
#include <iostream>
#include <vector>

int main ()
{
    int n = 10;
    float x, res;
    std::vector<float> vec(n);
    for (int i = 0; i < n; i++) 
    {
        std::cout << "Ingrese el valor #" << i + 1 << ": ";
        std::cin >> vec[i];
        res += (vec[i] * vec[i]);
    }
    
    std::cout << "Norma del vector: " << res << "\n";
    
    system("pause");
}
