/*
    Problema 2.1.6 Ordenación de un vector
    Desarrolle un programa que ordene un vector de 10 componentes de mayor a menor valor. Asuma que el vector está ya leído y almacenado en memoria.
*/
#include <iostream>
#include <vector>

int main() {
    const int n = 10;
    std::vector<int> vec(n);

    for (int i = 0; i < n; i++)
    {
        std::cout << "Digite el valor #" << i + 1 << ": ";
        std::cin >> vec[i];
    }

    for (int i = 0; i < n - 1; i++)
    {
        int maxIdx = i;
        for (int j = i + 1; j < n; j++) if (vec[j] > vec[maxIdx]) maxIdx = j;
        std::swap(vec[i], vec[maxIdx]);
    }

    std::cout << "Ordenado (mayor a menor): ";
    for (int i = 0; i < n; i++) std::cout << vec[i] << (i < n - 1 ? " " : "\n");

    system("pause");
}
