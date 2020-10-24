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

