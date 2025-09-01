#ifndef TOPPING_GROUP_H
#define TOPPING_GROUP_H

#include <string>
#include <list>
#include <iterator>

#include "PizzaComponent.h"

class ToppingGroup: public PizzaComponent {
    public:
        ToppingGroup(double price, std::string name);

        virtual std::string getName() const override;
        virtual double getPrice() const override;

        void addTopping(PizzaComponent* component);
    
    private:
        std::list<PizzaComponent*> toppings;
};

#endif