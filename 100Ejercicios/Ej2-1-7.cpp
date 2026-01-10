/*
    Problema 2.1.7 Palabras y letras
    Escriba un programa que lea una frase de longitud máxima 100 caracteres, cuyo fin viene determinado por el carácter '.'.
    A continuación se debe mostrar cada palabra que compone la frase en una línea distina, detallando el número de letras que compone cada palabra.
*/
#include <iostream>

int main() {
    const int n = 100;
    char frase[n];
    std::cout << "Digite su frase: ";
    std::cin >> frase;

    for (int i = 0; i < n; i++)
    {
        (frase[i] == ' ') ? std::cout << "\n" : std::cout << frase[i];
    }

    system("pause");
}
