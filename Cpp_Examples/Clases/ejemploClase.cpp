/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <stdio.h>

using namespace std;

class Fabian
{
private:
    char letra = 'F';

public:
    int valor = 0;
    void cambiarLetra(char nueva);
    char leerLetra(void);
};

void Fabian::cambiarLetra(char nueva)
{
    letra = nueva;
}

char Fabian::leerLetra(void)
{
    return letra;
}

Fabian fabian;

int main()
{
    cout << "Hello World\r\n";

    printf("%d\r\n", fabian.valor);
    fabian.valor = 1;
    printf("%d\r\n", fabian.valor);
    printf("%c\r\n", fabian.leerLetra());
    fabian.cambiarLetra('H');
    printf("%c\r\n", fabian.leerLetra());

    return 0;
}