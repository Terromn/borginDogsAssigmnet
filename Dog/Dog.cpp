#include "Dog.h"
#include <iostream>
using namespace std;

// Constructor
Dog::Dog(const string& name, int age, int weight, EatingTime eatingTime, const string& breed)
    : Pet(name, age, weight, eatingTime), breed(breed) {}

// Getters and Setters for breed
string Dog::getBreed() const {
    return breed;
}

void Dog::setBreed(const string& breed) {
    this->breed = breed;
}

// Method to make the dog bark
void Dog::bark() const {
    cout << "Woof! Woof!" << endl;
}

// Override the getDescription() method
string Dog::getDescription() const {
    return "Dog - Name: " + name + ", Age: " + to_string(age) +
           ", Weight: " + to_string(weight) + "kg, Eating Time: " +
           (eatingTime == EatingTime::Morning ? "Morning" :
            eatingTime == EatingTime::Afternoon ? "Afternoon" : "Night") +
           ", Breed: " + breed;
}
