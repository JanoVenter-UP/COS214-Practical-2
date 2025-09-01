#ifndef PIZZA_COMPONENT_H
#define PIZZA_COMPONENT_H

#include <string>

class PizzaComponent {
    public:
        PizzaComponent(double price, std::string name);

        virtual double getPrice() const;
        virtual std::string getName() const;

    private:
        double price;
        std::string name;
};

#endif