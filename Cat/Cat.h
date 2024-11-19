#ifndef CAT_H
#define CAT_H

#include "../Pet/Pet.h"

using namespace std;

// Derived Cat class
class Cat : public Pet {
private:
    string favToy;

public:
    // Constructor
    Cat(const string& name, int age, int weight, EatingTime eatingTime, const string& favToy);

    // Getters and Setters for favToy
    string getFavToy() const;
    void setFavToy(const string& favToy);

    // Method to make the cat meow
    void meow() const;

    // Override the getDescription() method
    string getDescription() const override;
};

#endif // CAT_H
