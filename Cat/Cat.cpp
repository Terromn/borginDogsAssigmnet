#include "Cat.h"
#include <iostream>
using namespace std;

// Constructor
Cat::Cat(const string& name, int age, int weight, EatingTime eatingTime, const string& favToy)
    : Pet(name, age, weight, eatingTime), favToy(favToy) {}

// Getters and Setters for favToy
string Cat::getFavToy() const {
    return favToy;
}

void Cat::setFavToy(const string& favToy) {
    this->favToy = favToy;
}

// Method to make the cat meow
void Cat::meow() const {
    cout << "Meow!" << endl;
}

// Override the getDescription() method
string Cat::getDescription() const {
    return "Cat - Name: " + name + ", Age: " + to_string(age) +
           ", Weight: " + to_string(weight) + "kg, Eating Time: " +
           (eatingTime == EatingTime::Morning ? "Morning" :
            eatingTime == EatingTime::Afternoon ? "Afternoon" : "Night") +
           ", Favorite Toy: " + favToy;
}
