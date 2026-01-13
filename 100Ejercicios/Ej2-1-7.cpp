/*
    Problema 2.1.7 Palabras y letras
    Escriba un programa que lea una frase de longitud máxima 100 caracteres, cuyo fin viene determinado por el carácter '.'.
    A continuación se debe mostrar cada palabra que compone la frase en una línea distina, detallando el número de letras que compone cada palabra.
*/
#include <iostream>

int main()
{
    const int N = 100;
    char frase[N];
    char c;
    int i = 0;

    std::cout << "Digite su frase: ";

    while (i < N - 1)
    {
        std::cin.get(c);
        if (c == '.')
            break;
        frase[i++] = c;
    }
    frase[i] = '\0';

    int letras = 0;

    for (int j = 0; j <= i; j++)
    {
        if (frase[j] != ' ' && frase[j] != '\0')
        {
            std::cout << frase[j];
            letras++;
        }
        else
        {
            if (letras > 0)
            {
                std::cout << " (" << letras << " letras)\n";
                letras = 0;
            }
        }
    }

    system("pause");
    return 0;
}
