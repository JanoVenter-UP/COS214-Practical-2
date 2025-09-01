#include "PizzaComponent.h"

PizzaComponent::PizzaComponent(double price, std::string name) : price(price), name(name)
{

}

double PizzaComponent::getPrice() const
{
    return price;
}

std::string PizzaComponent::getName() const
{
    return name;
}