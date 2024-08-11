#include <iostream>
using namespace std;

void intercambiarJugos(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {

    cout << "Programacion 3 Repaso Ej1:" << endl;
    int jugo1, jugo2;

    try
    {
        std::cout<<"Ingrese la catidad de jugo en el vaso 1"<<std::endl;
        std::cin>>jugo1;
        std::cout<<"Ingrese la catidad de jugo en el vaso 2"<<std::endl;
        std::cin>>jugo2;
        if (jugo1<0 || jugo2<0)
        {
            throw std::invalid_argument("La cantidad de jugo no puede ser negativa");
        }
    }
    catch(const std::invalid_argument &e)
    {
        std::cerr << e.what() << '\n';
        return 0;
    }
    std::cout<<"La cantidad de jugo en el vaso 1 es de "<<jugo1<<" y la cantidad de jugo en el vaso 2 es de "<<jugo2<<std::endl;
    intercambiarJugos(jugo1,jugo2);
    std::cout<<"Jugos intercambiados"<<std::endl;
    std::cout<<"La cantidad de jugo en el vaso 1 es de "<<jugo1<<" y la cantidad de jugo en el vaso 2 es de "<<jugo2<<std::endl;
    return 0;
}
