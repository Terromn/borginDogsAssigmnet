#ifndef DOG_H
#define DOG_H

#include "../Pet/Pet.h"

using namespace std;

// Derived Dog class
class Dog : public Pet {
private:
    string breed;

public:
    // Constructor
    Dog(const string& name, int age, int weight, EatingTime eatingTime, const string& breed);

    // Getters and Setters for breed
    string getBreed() const;
    void setBreed(const string& breed);

    // Method to make the dog bark
    void bark() const;

    // Override the getDescription() method
    string getDescription() const override;
};

#endif // DOG_H
