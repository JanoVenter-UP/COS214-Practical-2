#include "ToppingGroup.h"
#include <iostream>
ToppingGroup::ToppingGroup(double price, std::string name) : PizzaComponent(price, name)
{
    this->toppings = std::list<PizzaComponent*>();
}

std::string ToppingGroup::getName() const {
    std::string toppingsNames = PizzaComponent::getName() + " (";

    for(std::list<PizzaComponent*>::const_iterator it = this->toppings.cbegin(); it != this->toppings.cend(); ++it) {
        toppingsNames += (*it)->getName();
        
        if(++it != this->toppings.cend()) {
            toppingsNames += ", ";
        }
        --it;
    }   

    return toppingsNames + ')';
}

double ToppingGroup::getPrice() const {
    double totalPrice = 0.0;

    for(std::list<PizzaComponent*>::const_iterator it = this->toppings.cbegin(); it != this->toppings.cend(); ++it) {
        totalPrice += (*it)->getPrice();
    }

    return totalPrice;
}

void ToppingGroup::addTopping(PizzaComponent* component) {
    this->toppings.push_back(component);
}