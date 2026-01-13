/*
    Problema 2.1.8 Número de veces que aparece cada vocal en un texto.
    Realice un programa que lea una frase del teclado y determine cuántas veces aparece cada vocal en el texto.
    La longitud de la frase se conoce a priori, y se leerá de teclado detectando el fin de cadena con el carácter '.',
    o bien si se alcanzan 100 caracteres. Supongo, por simplicidad, que todas las letras del texto son minúsculas.
*/
#include <iostream>

int main()
{
    const int N = 100;
    char frase[N];
    char c;
    int j = 0;
    int a = 0, e = 0, i = 0, o = 0, u = 0;

    std::cout << "Digite su frase: ";

    while (j < N - 1)
    {
        std::cin.get(c);
        if (c == '.')
            break;
        frase[j++] = c;

        if (c == 'a')
            a++;
        else if (c == 'e')
            e++;
        else if (c == 'i')
            i++;
        else if (c == 'o')
            o++;
        else if (c == 'u')
            u++;
    }

    std::cout << "Cantidad de veces que salio 'a': " << a << "\n";
    std::cout << "Cantidad de veces que salio 'e': " << e << "\n";
    std::cout << "Cantidad de veces que salio 'i': " << i << "\n";
    std::cout << "Cantidad de veces que salio 'o': " << o << "\n";
    std::cout << "Cantidad de veces que salio 'u': " << u << "\n";

    system("pause");
    return 0;
}
