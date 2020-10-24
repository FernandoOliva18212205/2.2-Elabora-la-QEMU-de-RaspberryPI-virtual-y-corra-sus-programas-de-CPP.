/*
INSTITUTO TECNOLOGICO DE TIJUANA
CARLOS FERNANDO LEAL OLIVA
NO.CONTROL: 18212205
*/
//Programa 20.- Encontrar la suma de todos los enteros pares del 2 al 2000.

#include <iostream>
#include <string>
using namespace std;

int main() { int acum = 0;

for (int i = 2; i <= 2000; i=i+2)
{
    cout << to_string(i) + "\n";
    acum += i;
}

cout << "La suma es: " + to_string(acum);
}
