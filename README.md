# 2.2-Elabora-la-QEMU-de-RaspberryPI-virtual-y-corra-sus-programas-de-CPP.

![](imagen/portadatcnm.png)

#    Tecnológico Nacional de México
#   Instituto Tecnológico de Tijuana
#        Subdirección Académica

# Departamento de Sistemas y Computación
# Ingeniería en Sistemas Computacionales
# Lenguajes de interfaz 

# Practica: 2.2-Elabora-la-QEMU-de-RaspberryPI-virtual-y-corra-sus-programas-de-CPP. 
# Bloque: 2


# 📝 Leal Oliva, Carlos Fernando 18212205
   

# Profesor:
# MC. René Solis Reyes
# Semestre sep - ene 2020

# Clonando el repositorio.

![](https://github.com/FernandoOliva18212205/2.2-RaspberryPI-virtual/blob/main/imagen/Imagen1Clonando.PNG)

# Programa 1
//Programa 16.- imprimir la tabla de multiplicar hasta 12x12 

```bash
#include <iostream>
#include <string>
using namespace std;

int main() {

int m;
for (int i = 1; i <= 12; i++)
{
    for (int b = 1; b <= 12; b++)
    {
        m = i * b;

        string resultado = to_string(i) + " x " + to_string(b) + " = " + to_string(m);

        cout << resultado << endl;
        
    }
    cout << "-----------------------------------\n" << endl;
    
}
}

```
![](https://github.com/FernandoOliva18212205/2.2-RaspberryPI-virtual/blob/main/imagen/Imagen2Programa1.PNG)

# Programa 2
//Programa 17. - Calcular e imprimir la suma de los enteros del 1 al 20. 
```bash
#include <iostream>
#include <string>
using namespace std;

int main() { 
int acum = 0; 
for (int i = 1; i <= 20; i++) 
{ acum += i; } 
cout << acum << endl; 
}
```
![](https://github.com/FernandoOliva18212205/2.2-RaspberryPI-virtual/blob/main/imagen/Imagen3Programa2.PNG)

# Programa 3
//Programa 18. - Encontrar la suma de 35 enteros. 

```bash
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

```
![](https://github.com/FernandoOliva18212205/2.2-RaspberryPI-virtual/blob/main/imagen/Imagen4Programa3-1.PNG)
![](https://github.com/FernandoOliva18212205/2.2-RaspberryPI-virtual/blob/main/imagen/Imagen5Programa3-2.PNG)

# Programa 4
//Programa 19. - Encontrar la suma de los enteros del 1 al 1000. 
```bash
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
```
![](https://github.com/FernandoOliva18212205/2.2-RaspberryPI-virtual/blob/main/imagen/Imagen6Programa4.PNG)

# Programa 5
//Programa 20.- Encontrar la suma de todos los enteros pares del 2 al 2000.
```bash
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
```
![](https://github.com/FernandoOliva18212205/2.2-RaspberryPI-virtual/blob/main/imagen/Imagen7Programa5-1.PNG)
![](https://github.com/FernandoOliva18212205/2.2-RaspberryPI-virtual/blob/main/imagen/Imagen8Programa5-2.PNG)

## Conclusion 
Bueno yo considero que esto es importante por que nos demuestra mucho la flexibilidad de estas herramientas que nosotros estamos utilizando 
c++ ha sido un lenguaje muy interesante y ver como se ejecuta en la raspberry me parecio muy impresionante solo creando un nuevo archivo para
correrlo ahi.
Al correrlo en Linux se comprueba que el programa funciona perfectamente y en este caso sucedio asi. 
