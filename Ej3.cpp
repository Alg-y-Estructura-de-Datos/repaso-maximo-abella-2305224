#include <iostream>
using namespace std;

void marcarAsiento(bool asientos[],int n) {
    asientos[n] = 1;
}


int main() {

    cout << "Programacion 3 Repaso Ej3:" << endl;

    bool asientos[10]{1,0,0,1,0,0,1,0,1,1};
    int n;

    std::cout<<"Estos son los estados de los asientos"<<std::endl;
    for (int i = 0; i < 10; i++)
    {
        std::cout<<i+1<<" ";
        if (asientos[i] == 1 )
        {
            std::cout<<"Ocupado ";
        } else
        {
            std::cout<<"Libre ";
        }   
    } std::cout<<std::endl;

    std::cout<<"Ingrese el numero de asiento que quiere elegir (1-10)"<<std::endl;
    try
    {
        std::cin>>n;
        if (asientos[n-1] == 1){ throw std::invalid_argument("El asinto esta ocupado"); }
    }
    catch(const std::invalid_argument& e)
    {
        std::cerr << e.what() << '\n';
        return 0;
    }
    marcarAsiento(asientos,n-1);

        std::cout<<"Estos son los estados de los asientos"<<std::endl;
    for (int i = 0; i < 10; i++)
    {
        std::cout<<i+1<<" ";
        if (asientos[i] == 1 )
        {
            std::cout<<"Ocupado ";
        } else
        {
            std::cout<<"Libre ";
        }   
    } std::cout<<std::endl;

    return 0;
}
