/*
INSTITUTO TECNOLOGICO DE TIJUANA
CARLOS FERNANDO LEAL OLIVA
NO.CONTROL: 18212282
*/
//Programa 17. - Calcular e imprimir la suma de los enteros del 1 al 20. 

#include <iostream>
#include <string>
using namespace std;

int main() { 
int acum = 0; 
for (int i = 1; i <= 20; i++) 
{ acum += i; } 
cout << acum << endl; 
}
