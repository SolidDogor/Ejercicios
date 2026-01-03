/*
    Problema 2.1.3 Vector con término general dado
    Sea la sucesión: vk = k^2 + 3, desarrolle un programa que lea el número n de componentes que se quieren calcular de la sucesión y almacenarlas en un vector vec, tal que vec(i) = vi.
    Se mostrará el vector por pantalla. Puede asumir que n será siempre menor o igual a 100.
*/
#include <iostream>
#include <vector>

int main()
{
    int n;
    std::cout << "Ingrese la cantidad de componentes: ";
    std::cin >> n;
    std::vector<float> vec(n);
    
    for(int i = 0; i < n; i++) vec[i] = (i + 1) * (i + 1) + 3;
    
    std::cout << "Valores del vector:\n";
    for (int i = 0; i < n; i++) std::cout << vec[i] << "\n";

    system("pause");
}
