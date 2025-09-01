#include "Topping.h"

Topping::Topping(double price, std::string name) : PizzaComponent(price, name)
{

}

std::string Topping::getName() const {
    return PizzaComponent::getName();
}

double Topping::getPrice() const {
    return  PizzaComponent::getPrice();
}