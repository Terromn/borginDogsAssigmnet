#include "PetHotelManager.h"
#include <iostream>
using namespace std;

// Constructor
PetHotelManager::PetHotelManager(int numRooms) {
    for (int i = 1; i <= numRooms; i++) {
        rooms.emplace_back(HotelRoom(i));
    }
}

// Destructor
PetHotelManager::~PetHotelManager() {
    for (Pet* pet : petProfiles) {
        delete pet; // Free dynamically allocated pets
    }
}

// Add a new pet profile
void PetHotelManager::addPetProfile(Pet* pet) {
    petProfiles.push_back(pet);
    cout << "Pet profile for " << pet->getName() << " has been added." << endl;
}

// Display all stored pet profiles
void PetHotelManager::displayAllPetProfiles() const {
    if (petProfiles.empty()) {
        cout << "No pet profiles available." << endl;
        return;
    }
    for (const Pet* pet : petProfiles) {
        cout << pet->getDescription() << endl;
    }
}

// Assign a pet to a room
void PetHotelManager::assignRoomToPet(int roomNumber, Pet* pet) {
    if (roomNumber < 1 || roomNumber > rooms.size()) {
        cout << "Invalid room number!" << endl;
        return;
    }
    rooms[roomNumber - 1].assignPet(pet);
}

// Remove a pet from a room
void PetHotelManager::removePetFromRoom(int roomNumber) {
    if (roomNumber < 1 || roomNumber > rooms.size()) {
        cout << "Invalid room number!" << endl;
        return;
    }
    rooms[roomNumber - 1].removePet();
}

// Display the status of all rooms
void PetHotelManager::displayAllRoomStatuses() const {
    for (const HotelRoom& room : rooms) {
        cout << room.getRoomDetails() << endl;
    }
}
