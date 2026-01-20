/*
    Problema 2.2.4 Ordenación de una matriz por filas
    Escriba un programa que lea una matriz cuadrada de N filas y N columnas de valores enteros.
    A continuación, el programa debe ordenar cada fila de la matriz en forma ascendente,
    intercambiando los elementos necesarios, y finalmente mostrar la matriz resultante por pantalla.
*/
#include <iostream>

int main()
{
    int N, min;
    bool ordenado = false;
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

    for (int i = 0; i < N; i++)
    {

        for (int j = 0; j < N; j++)
        {
            min = matriz[i][j];
            for (int k = 0; k < N; k++)
            {
                if ()
            }
            if ()
        }
    }

    std::cout << "Mayor valor de la fila " << fila << ": " << may << "\n";

    system("pause");
    return 0;
}
