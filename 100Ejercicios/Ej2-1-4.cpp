/*
    Problema 2.1.4 Comprobar si dos valores pertenecen a un vector
    Realice un algoritmo que lea dos números enteros por teclado y determine si ambos valores forman parte de un vector de enteros
    previamente definido de dimensión 15
*/
#include <iostream>
#include <vector>

bool buscarValor (std::vector<int> v, int x);

int main()
{
    int n = 15, x, y;
    std::vector<int> vec(n);
    
    for(int i = 0; i < n; i++)
    {
        std::cout << "Ingrese el valor #" << i + 1 << ": ";
        std::cin >> vec[i];
    }
    
    std::cout << "Ingrese el primer numero a buscar: "; std::cin >> x;
    std::cout << "Ingrese el primer numero a buscar: "; std::cin >> y;

    (buscarValor(vec, x)) ? std::cout << x << " se encuentra en el vector.\n" : std::cout << x << " no se encuentra en el vector.\n";
    (buscarValor(vec, y)) ? std::cout << y << " se encuentra en el vector.\n" : std::cout << y << " no se encuentra en el vector.\n";

    system("pause");
}

bool buscarValor (std::vector<int> v, int x)
{
    for (int i = 0; i < v.size(); i++) if (v[i] == x) return true;
    return false;
}
