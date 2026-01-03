/*
    Problema 1.6 Media de números positivos
    Desarrolle un programa que lea tres números reales del teclado y escriba por pantalla la media aritmética únicamente de los números positivos
    leídos. Realice el algoritmo en dos versiones: empleando una iteración con salida en cabeza y con salida en la cola
*/
#include <iostream>

void mostrarCabeza(float[]);
void mostrarCola(float[]);

int main()
{
    float arreglo[3];
    for (int i = 0; i < 3; i++)
    {
        std::cout << "Ingrese el elemento #" << i + 1 << ":";
        std::cin >> arreglo[i];
    }

    mostrarCabeza(arreglo);
    mostrarCola(arreglo);

    system("pause");
}

void mostrarCabeza(float arreglo[]) 
{
    float media = 0;
    int cantidad = 0;
    for (int i = 0; i < 3; i++)
    {
        if(arreglo[i] >= 0) 
        {
            media += arreglo[i];
            cantidad++;
        }
    }
    media /= cantidad;
    std::cout << "Media del arreglo (Salida en cabeza): " << media << "\n";
}

void mostrarCola(float arreglo[]) 
{
    float media = 0;
    int cantidad = 0;
    for (int i = 2; i >= 0; i--)
    {
        if(arreglo[i] >= 0) 
        {
            media += arreglo[i];
            cantidad++;
        }
    }
    media /= cantidad;
    std::cout << "Media del arreglo (Salida en cola): " << media << "\n";
}