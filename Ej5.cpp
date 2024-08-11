#include <iostream>
#include "Ej5_Calculadora.h"
using namespace std;

int main() {
    std::cout<<"Programacion 3 repaso Ej5:"<<std::endl;
    float A,B;
    int opcion;
    bool menu =1;

    std::cout<<"Ingrese un numero A"<<std::endl;
    std::cin>>A;
    std::cout<<"Ingrese un numero A"<<std::endl;
    std::cin>>B;
    calculadora c(A,B);

    while (menu == 1)
    {
        std::cout<<"|| Menu ||"<<std::endl;
        std::cout<<"1. Sumar los numeros"<<std::endl;
        std::cout<<"2. Restar los numeros"<<std::endl;
        std::cout<<"3. Multiplicar los numeros"<<std::endl;
        std::cout<<"4. Dividir los numeros"<<std::endl;
        std::cout<<"0. Salir"<<std::endl;
        std::cout<<"Ingrese una opcion (0-4)"<<std::endl;

        std::cin>>opcion;
        
            switch (opcion)
            {
            case 0:
                menu = 0;
                break;
            case 1:{
                std::cout<<"La suma de los numeros es "<<c.suma()<<std::endl;
                break;
            }

            case 2: {
                std::cout<<"La resta de los numeros es "<<c.resta()<<std::endl;
                break;
            }

            case 3: {
                std::cout<<"La multiplicacion de los numeros es "<<c.mult()<<std::endl;
                break;
            }
            case 4: {
                try
                {
                    std::cout<<"La division de los numeros es "<<c.div()<<std::endl;
                }
                catch(const std::invalid_argument& e)
                {
                    std::cerr << e.what() <<", Vuelva a ingresar los numeros e intente nuevamente"<< '\n';
                }
                break;
            }
            default:
            std::cout<<"Opcion No esta en la lista, Ingrese otra opcion"<<std::endl;
                break;
            }
    };
    
    return 0;
}
