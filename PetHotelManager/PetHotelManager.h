#ifndef PETHOTELMANAGER_H
#define PETHOTELMANAGER_H

#include "../HotelRoom/HotelRoom.h"
#include <vector>

using namespace std;

class PetHotelManager {
private:
    vector<HotelRoom> rooms;
    vector<Pet*> petProfiles;

public:
    // Constructor
    PetHotelManager(int numRooms);

    // Destructor
    ~PetHotelManager();

    // Methods to manage pet profiles
    void addPetProfile(Pet* pet);
    void displayAllPetProfiles() const;

    // Methods to manage hotel rooms
    void assignRoomToPet(int roomNumber, Pet* pet);
    void removePetFromRoom(int roomNumber);
    void displayAllRoomStatuses() const;
};

#endif // PETHOTELMANAGER_H
