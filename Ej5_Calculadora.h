#include <iostream>
#pragma once

class calculadora
{
    private:
        float n1;
        float n2;
    public:
    calculadora(float n1,float n2){
        this->n1 = n1;
        this->n2 = n2;
    };

    float suma() {
        return (n1+n2);
    }

    float resta() {
        return (n1-n2);
    }

    float mult() {
        return(n1*n2);
    }

    float div() {
        if (n2 == 0)
        {
            throw std::invalid_argument("El divisor no puede ser 0");
        } else
        {
            return (n1/n2);
        }
    }

};

