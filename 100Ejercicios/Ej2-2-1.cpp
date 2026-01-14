/*
    Problema 2.2.1 Suma de componentes de una matriz
    Halle la suma de las componentes de una matriz, cuya dimensión y componentes se han de leer por teclado y por filas.
    Suponga que el número de filas N y columnas M son menores o iguales a 10.
*/
#include <iostream>

int main()
{
    int N, M, a, sum = 0;
    int matriz[10][10];

    std::cout << "Ingrese la cantidad de filas: ";
    std::cin >> N;
    std::cout << "Ingrese la cantidad de columnas: ";
    std::cin >> M;

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            std::cout << "Ingrese el valor [" << i << "][" << j << "]: ";
            std::cin >> a;
            matriz[i][j] = a;
            sum += a;
        }
    }

    std::cout << "Suma de los componentes de la matriz: " << sum << "\n";

    system("pause");
    return 0;
}
