#include <iostream>

#include "PizzaComponent.h"
#include "Topping.h"
#include "ToppingGroup.h"

int main() {
    std::cout << "\t===> Testing Main <===\n";
    
    std::cout << "\t---> Testing Composite Pattern <---\n";

    PizzaComponent* mushrooms = new Topping(1.5, "Mushrooms");
    PizzaComponent* greenPeppers = new Topping(5.0, "Green Peppers");
    PizzaComponent* onions = new Topping(2.5, "Onions");
    PizzaComponent* olives = new Topping(1.0, "Olives");
    PizzaComponent* pepperoni = new Topping(2.0, "Pepperoni");
    PizzaComponent* feta = new Topping(3.0, "Feta");

    PizzaComponent* vegeterianPizza = new ToppingGroup(0.0, "Vegeterian");
    dynamic_cast<ToppingGroup*>(vegeterianPizza)->addTopping(mushrooms);
    dynamic_cast<ToppingGroup*>(vegeterianPizza)->addTopping(greenPeppers);
    dynamic_cast<ToppingGroup*>(vegeterianPizza)->addTopping(onions);

    PizzaComponent* vegeterianDeluxePizza = new ToppingGroup(0.0, "Vegeterian Deluxe");
    dynamic_cast<ToppingGroup*>(vegeterianDeluxePizza)->addTopping(vegeterianPizza);
    dynamic_cast<ToppingGroup*>(vegeterianDeluxePizza)->addTopping(feta);
    dynamic_cast<ToppingGroup*>(vegeterianDeluxePizza)->addTopping(olives);

    std::cout << vegeterianPizza->getName() << " Price: $" << vegeterianPizza->getPrice() << '\n';
    std::cout << vegeterianDeluxePizza->getName() << " Price: $" << vegeterianDeluxePizza->getPrice() << '\n';

    delete mushrooms;
    delete greenPeppers;
    delete onions;
    delete olives;
    delete pepperoni;
    delete feta;

    delete vegeterianPizza;
    delete vegeterianDeluxePizza;

    std::cout << "\t----------------------\n";

    std::cout << "\t======================\n";
    return 0;
}