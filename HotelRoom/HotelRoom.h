#ifndef HOTELROOM_H
#define HOTELROOM_H

#include "../Pet/Pet.h"

using namespace std;

class HotelRoom {
private:
    int roomNumber;
    bool isOccupied;
    Pet* petStaying;

public:
    // Constructor
    HotelRoom(int roomNumber);

    // Getters
    int getRoomNumber() const;
    bool getIsOccupied() const;
    Pet* getPetStaying() const;

    // Setters
    void setRoomNumber(int roomNumber);
    void setIsOccupied(bool isOccupied);
    void setPetStaying(Pet* pet);

    // Functional methods
    void assignPet(Pet* pet);
    void removePet();
    string getRoomDetails() const;
};

#endif // HOTELROOM_H
