#include <iostream>

#include "pizza/Farmhouse.h"
#include "pizza/Margherita.h"
#include "pizza/VegDelight.h"

#include "toppings/ExtraCheese.h"
#include "toppings/Mushroom.h"

using namespace std;

int main() {

    // Margherita + Extra Cheese + Mushroom

    BasePizza* pizza =new Mushroom(new ExtraCheese(new Margherita()));

    cout << "Total Cost : " << pizza->cost() << endl;

    // Farmhouse + Mushroom

    BasePizza* pizza2 =  new Mushroom(new Farmhouse());

    cout << "Total Cost : " << pizza2->cost() << endl;

    delete pizza;
    delete pizza2;

    return 0;
}