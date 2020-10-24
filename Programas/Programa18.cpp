/*
INSTITUTO TECNOLOGICO DE TIJUANA
CARLOS FERNANDO LEAL OLIVA
NO.CONTROL: 18212205
*/
//Programa 18. - Encontrar la suma de 35 enteros. 

#include <iostream>
#include <string>
using namespace std;

int main() { int acum = 0; int num; 
for (int i = 1; i <= 35; i++) 
{ cout << "Ingresa el numero " + to_string(i) + ": "; cin >> num;

    acum += num;
}
cout << acum << endl;
}
