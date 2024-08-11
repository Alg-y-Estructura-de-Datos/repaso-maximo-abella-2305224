#include <iostream>
using namespace std;

int factorial(int n) {
    int res = n;
    if (n == 0){res = 1;return res;}
    for (int i = 1; i < n; i++)
    {
        res = (res * (n-i));
    }
    return res;
}


int main() {

    cout << "Programacion 3 Repaso Ej2:" << endl;
    std::cout<<"ingrese el numero al cual le quiere calcular el factorial"<<std::endl;
    unsigned int n;
    std::cin>>n;
    std::cout<<"El factorial de "<<n<<" es "<<factorial(n)<<std::endl;
    return 0;
}
