/*
    Problema 2.2.3 Máximo de una fila
    Escriba un programa que lea una matriz de N filas y N columnas de valores enteros.
    A continuación, el programa debe pedir el número de una fila y mostrar por pantalla
    el valor de la mayor componente de esa fila.
*/
#include <iostream>

int main()
{
    int N, may, fila;
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

    std::cout << "Ingrese el numero de fila a buscar: ";
    std::cin >> fila;

    may = matriz[fila][0];

    for (int i = 1; i < N; i++)
    {
        if (matriz[fila][i] > may)
        {
            may = matriz[fila][i];
        }
    }

    std::cout << "Mayor valor de la fila " << fila << ": " << may << "\n";

    system("pause");
    return 0;
}
