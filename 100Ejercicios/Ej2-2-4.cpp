/*
    Problema 2.2.4 Ordenación de una matriz por filas
    Escriba un programa que lea una matriz cuadrada de N filas y N columnas de valores enteros.
    A continuación, el programa debe ordenar cada fila de la matriz en forma ascendente,
    intercambiando los elementos necesarios, y finalmente mostrar la matriz resultante por pantalla.
*/
#include <iostream>

int main()
{
    int N;
    int matriz[10][10];

    std::cout << "Ingrese N (max 10): ";
    std::cin >> N;

    if (N < 1 || N > 10)
    {
        std::cout << "N invalido. Debe estar entre 1 y 10.\n";
        return 0;
    }

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            std::cout << "Ingrese el valor [" << i << "][" << j << "]: ";
            std::cin >> matriz[i][j];
        }
    }

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N - 1; j++)
        {
            int posMin = j;

            for (int k = j + 1; k < N; k++)
            {
                if (matriz[i][k] < matriz[i][posMin])
                {
                    posMin = k;
                }
            }

            int temp = matriz[i][j];
            matriz[i][j] = matriz[i][posMin];
            matriz[i][posMin] = temp;
        }
    }

    std::cout << "\nMatriz ordenada por filas (ascendente):\n";
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            std::cout << matriz[i][j] << "\t";
        }
        std::cout << "\n";
    }

    return 0;
}