#include "PetHotelManager/PetHotelManager.h"
#include "Dog/Dog.h"
#include "Cat/Cat.h"
#include <iostream>

using namespace std;

void displayMenu() {
    cout << "\n----- Pet Hotel Menu -----\n";
    cout << "1. Add Pet Profile\n";
    cout << "2. Assign Pet to Room\n";
    cout << "3. Remove Pet from Room\n";
    cout << "4. View Room Statuses\n";
    cout << "5. View All Pet Profiles\n";
    cout << "6. Exit\n";
    cout << "Enter your choice: ";
}

int main() {
    PetHotelManager manager(5); // Create a hotel with 5 rooms
    int choice;

    do {
        displayMenu();
        cin >> choice;

        switch (choice) {
            case 1: {
                cout << "Enter pet type (dog/cat): ";
                string type;
                cin >> type;

                if (type == "dog") {
                    string name, breed;
                    int age, weight;
                    cout << "Enter name, age, weight, and breed: ";
                    cin >> name >> age >> weight >> breed;
                    Dog* dog = new Dog(name, age, weight, EatingTime::Morning, breed);
                    manager.addPetProfile(dog);
                } else if (type == "cat") {
                    string name, favToy;
                    int age, weight;
                    cout << "Enter name, age, weight, and favorite toy: ";
                    cin >> name >> age >> weight >> favToy;
                    Cat* cat = new Cat(name, age, weight, EatingTime::Night, favToy);
                    manager.addPetProfile(cat);
                } else {
                    cout << "Invalid pet type!" << endl;
                }
                break;
            }



            case 3: {
                cout << "Enter room number: ";
                int roomNumber;
                cin >> roomNumber;
                manager.removePetFromRoom(roomNumber);
                break;
            }

            case 4:
                manager.displayAllRoomStatuses();
                break;

            case 5:
                manager.displayAllPetProfiles();
                break;

            case 6:
                cout << "Exiting the program..." << endl;
                break;

            default:
                cout << "Invalid choice!" << endl;
        }
    } while (choice != 6);

    return 0;
}
