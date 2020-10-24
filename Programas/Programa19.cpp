/*
INSTITUTO TECNOLOGICO DE TIJUANA
CARLOS FERNANDO LEAL OLIVA
NO.CONTROL: 18212205
*/
//Programa 19. - Encontrar la suma de los enteros del 1 al 1000. 

#include <iostream>
#include <string>
using namespace std;

int main() { int acum=0;

for (int i = 1; i <= 1000; i++)
{
    acum += i;
}

cout << "La suma es: " + to_string(acum);
}
