#include "Pet.h"

// Constructor
Pet::Pet(const string& name, int age, int weight, EatingTime eatingTime)
    : name(name), age(age), weight(weight), eatingTime(eatingTime) {}

// Virtual Destructor
Pet::~Pet() {}

// Getters
string Pet::getName() const {
    return name;
}

int Pet::getAge() const {
    return age;
}

int Pet::getWeight() const {
    return weight;
}

EatingTime Pet::getEatingTime() const {
    return eatingTime;
}

// Setters
void Pet::setName(const string& name) {
    this->name = name;
}

void Pet::setAge(int age) {
    this->age = age;
}

void Pet::setWeight(int weight) {
    this->weight = weight;
}

void Pet::setEatingTime(EatingTime eatingTime) {
    this->eatingTime = eatingTime;
}
