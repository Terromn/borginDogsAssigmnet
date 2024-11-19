#include "HotelRoom.h"
#include <iostream>
using namespace std;

// Constructor
HotelRoom::HotelRoom(int roomNumber) : roomNumber(roomNumber), isOccupied(false), petStaying(nullptr) {}

// Getters
int HotelRoom::getRoomNumber() const {
    return roomNumber;
}

bool HotelRoom::getIsOccupied() const {
    return isOccupied;
}

Pet* HotelRoom::getPetStaying() const {
    return petStaying;
}

// Setters
void HotelRoom::setRoomNumber(int roomNumber) {
    this->roomNumber = roomNumber;
}

void HotelRoom::setIsOccupied(bool isOccupied) {
    this->isOccupied = isOccupied;
}

void HotelRoom::setPetStaying(Pet* pet) {
    this->petStaying = pet;
    this->isOccupied = (pet != nullptr); // Automatically update occupancy status
}

// Functional Methods
void HotelRoom::assignPet(Pet* pet) {
    if (isOccupied) {
        cout << "Room " << roomNumber << " is already occupied!" << endl;
        return;
    }
    setPetStaying(pet);
    cout << "Pet assigned to room " << roomNumber << endl;
}

void HotelRoom::removePet() {
    if (!isOccupied) {
        cout << "Room " << roomNumber << " is already empty!" << endl;
        return;
    }
    setPetStaying(nullptr);
    cout << "Pet removed from room " << roomNumber << endl;
}

string HotelRoom::getRoomDetails() const {
    string details = "Room " + to_string(roomNumber) + " - ";
    if (isOccupied && petStaying) {
        details += "Occupied by: " + petStaying->getDescription();
    } else {
        details += "Vacant";
    }
    return details;
}
