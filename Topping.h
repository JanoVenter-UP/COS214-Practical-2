#ifndef TOPPING_H
#define TOPPING_H

#include <string>

#include "PizzaComponent.h"

class Topping: public PizzaComponent {
    public:
        Topping(double price, std::string name);
        virtual ~Topping() = default;
        
        virtual std::string getName() const override;
        virtual double getPrice() const override;
};

#endif