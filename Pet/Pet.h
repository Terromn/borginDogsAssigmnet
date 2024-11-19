#ifndef PET_H
#define PET_H

#include <string>

// Use the standard namespace to avoid std::
using namespace std;

// Enumeration for EatingTime
enum class EatingTime { Morning, Afternoon, Night };

class Pet {
protected:
    string name;
    int age;
    int weight;
    EatingTime eatingTime;

public:
    // Constructor
    Pet(const string& name, int age, int weight, EatingTime eatingTime);

    // Virtual Destructor
    virtual ~Pet();

    // Getters
    string getName() const;
    int getAge() const;
    int getWeight() const;
    EatingTime getEatingTime() const;

    // Setters
    void setName(const string& name);
    void setAge(int age);
    void setWeight(int weight);
    void setEatingTime(EatingTime eatingTime);

    // Pure virtual function (abstract method)
    virtual string getDescription() const = 0;
};

#endif // PET_H
