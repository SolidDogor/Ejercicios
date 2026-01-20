/*
    Problema 2.2.2 Escritura de matriz en sentido inverso
    Dada una matriz N x N elementos, realice un algoritmo que recorrar la matriz por filas desde la última
    a la primera y cada fila en sentido inverso, y de la última columna a la primera,
    de modo que se vaya mostrando cada elemento.
*/
#include <iostream>

int main()
{
    int N;
    int matriz[10][10];

    std::cout << "Ingrese la cantidad de filas y columnas de la matriz: ";
    std::cin >> N;

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            std::cout << "Ingrese el valor [" << i << "][" << j << "]: ";
            std::cin >> matriz[i][j];
        }
    }

    for (int i = N - 1; i >= 0; i--)
    {
        for (int j = N - 1; j >= 0; j--)
        {
            std::cout << "[" << i << "][" << j << "]:" << matriz[i][j] << "\t";
        }
        std::cout << "\n";
    }

    system("pause");
    return 0;
}
