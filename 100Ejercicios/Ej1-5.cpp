/*
    Problema 1.5 Conversión de unidades de tiempo
    Desarrolle un programa que lea por teclado un valor entero x e, interprando este valor como el número de segundos que
    dura un evento, calcule y muestre por pantalla cuántos días, horas, minutos y segundos representa x
*/
#include <iostream>

int main()
{
    int x, s, m = 0, h = 0, d = 0;
    std::cout << "Ingrese los segundos: ";
    std::cin >> x;

    d = x / (24*60*60);
    x %= (24*60*60);

    h = x / (60*60);
    x %= (60*60);

    m = x / 60;
    x %= 60;

    s = x;

    std::cout << "Duracion del evento: ";
    (d < 10) ? std::cout << "0" << d : std::cout << d;
    std::cout << ":";
    (h < 10) ? std::cout << "0" << h : std::cout << h;
    std::cout << ":";
    (m < 10) ? std::cout << "0" << m : std::cout << m;
    std::cout << ":";
    (s < 10) ? std::cout << "0" << s : std::cout << s << "\n";

    system("pause");
}
