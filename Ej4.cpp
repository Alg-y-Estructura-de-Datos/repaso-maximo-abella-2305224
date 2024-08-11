#include <iostream>
using namespace std;
#include <cmath>

int main() {
    int opcion;
    bool menu =1;
    std::cout<<"Programacion 3 repaso Ej4:"<<std::endl;
    while (menu == 1)
    {
        std::cout<<"|| Menu ||"<<std::endl;
        std::cout<<"1. Sumar 2 enteros"<<std::endl;
        std::cout<<"2. Calcular area de un circulo"<<std::endl;
        std::cout<<"3. Calcular la potencia de un numero"<<std::endl;
        std::cout<<"4. Salir"<<std::endl;
        std::cout<<"Ingrese una opcion (0-3)"<<std::endl;
        std::cin>>opcion;
        
            switch (opcion)
            {
            case 0:
                menu = 0;
                break;
            case 1:{
                int A,B;
                std::cout<<"Ingrese un numero entero A"<<std::endl;                
                std::cin>>A;
                std::cout<<"Ingrese un numero entero B"<<std::endl;                
                std::cin>>B;
                std::cout<<"La suma de "<<A<<" + "<<B<<" es "<<A+B<<std::endl;
                break;
            }

            case 2: {
                int r;
                float PI = 3.14159265359;
                std::cout<<"Ingrese el radio del circulo"<<std::endl;
                std::cin>>r;
                std::cout<<"El area del circulo es de "<<pow(r,2)*PI<<std::endl;
                break;
            }

            case 3: {
                float n,potencia;
                std::cout<<"Ingrese un numero a potenciar"<<std::endl;
                std::cin>>n;
                std::cout<<"Ingrese la potencia a utilizar"<<std::endl;
                std::cin>>potencia;
                std::cout<<"La potencia del numero "<<n<<" a la "<<potencia<<" es "<<pow(n,potencia)<<std::endl;
                break;
            }

            default:
            std::cout<<"Opcion No esta en la lista, Ingrese otra opcion"<<std::endl;
                break;
            }
    };
    
    return 0;
}