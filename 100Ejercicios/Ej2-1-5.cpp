/*
    Problema 2.1.5 Vector de factoriales
    Ddado un vector, Vec, que contiene los primeros 15 números naturales, calcule un vector fact con sus factoriales y mostrarlo por pantalla
*/
#include <iostream>
#include <vector>

int main()
{
    int n = 15;
    std::vector<int> vec(n);
    std::vector<int> fact(n);
    
    for(int i = 0; i < n; i++)
    {
        vec[i] = i + 1;
        std::cout << vec[i] << "\n";
    }

    for(int i = 0; i < n; i++)
    {
        fact[i] = vec[i] * vec[i];
        std::cout << fact[i] << "\n";
    }

    system("pause");
}
