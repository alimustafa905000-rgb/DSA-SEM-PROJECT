#include<iostream>
#include <stack>
#include <queue>
using namespace std;

const int MAX_SLOTS = 5;
const int PARKING_FEE = 100;

class ParkingSystem {
private:
    stack<string> parkingSlots;
    queue<string> waitingQueue;
    int totalEarnings = 0;

public:

    
    void parkCar(string carNumber) {
        if (parkingSlots.size() < MAX_SLOTS) {
            parkingSlots.push(carNumber);
            cout << "\nCar " << carNumber << " parked successfully.\n";
        } else {
            waitingQueue.push(carNumber);
            cout << "\nParking Full! Car added to waiting queue.\n";
        }
    }

   
    void removeCar() {
        if (parkingSlots.empty()) {
            cout << "\nParking is empty.\n";
            return;
        }

        string removedCar = parkingSlots.top();
        parkingSlots.pop();
        totalEarnings += PARKING_FEE;

        cout << "\nCar " << removedCar << " removed successfully.\n";
        cout << "Parking Fee Collected: Rs. " << PARKING_FEE << endl;

        
        if (!waitingQueue.empty()) {
            string nextCar = waitingQueue.front();
            waitingQueue.pop();
            parkingSlots.push(nextCar);

            cout << "Waiting Car " << nextCar << " moved into parking.\n";
        }
    }

    
    void displayParkedCars() {
        if (parkingSlots.empty()) {
            cout << "\nNo cars parked.\n";
            return;
        }

        stack<string> temp = parkingSlots;

        cout << "\n===== Parked Cars =====\n";
        while (!temp.empty()) {
            cout << temp.top() << endl;
            temp.pop();
        }
    }

    
    void displayWaitingCars() {
        if (waitingQueue.empty()) {
            cout << "\nNo waiting cars.\n";
            return;
        }

        queue<string> temp = waitingQueue;

        cout << "\n===== Waiting Queue =====\n";
        while (!temp.empty()) {
            cout << temp.front() << endl;
            temp.pop();
        }
    }

     
    void searchCar(string carNumber) {
        stack<string> temp = parkingSlots;
        bool found = false;

        while (!temp.empty()) {
            if (temp.top() == carNumber) {
                found = true;
                break;
            }
            temp.pop();
        }

        if (found) {
            cout << "\nCar " << carNumber << " found in parking.\n";
        } else {
            cout << "\nCar not found.\n";
        }
    }

     
    void availableSlots() {
        cout << "\nAvailable Slots: " 
             << MAX_SLOTS - parkingSlots.size() << endl;
    }

    
    void showEarnings() {
        cout << "\nTotal Earnings: Rs. " << totalEarnings << endl;
    }
};

int main() {
    ParkingSystem parking;
    int choice;
    string carNumber;

    do {
        cout << "\n========== Parking Management System ==========\n";
        cout << "1. Park Car\n";
        cout << "2. Remove Car\n";
        cout << "3. Display Parked Cars\n";
        cout << "4. Display Waiting Queue\n";
        cout << "5. Search Car\n";
        cout << "6. Check Available Slots\n";
        cout << "7. Show Total Earnings\n";
        cout << "8. Exit\n";
        cout << "Enter Choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter Car Number: ";
                cin >> carNumber;
                parking.parkCar(carNumber);
                break;

            case 2:
                parking.removeCar();
                break;

            case 3:
                parking.displayParkedCars();
                break;

            case 4:
                parking.displayWaitingCars();
                break;

            case 5:
                cout << "Enter Car Number to Search: ";
                cin >> carNumber;
                parking.searchCar(carNumber);
                break;

            case 6:
                parking.availableSlots();
                break;

            case 7:
                parking.showEarnings();
                break;

            case 8:
                cout << "\nExiting Program...\n";
                break;

            default:
                cout << "\nInvalid Choice!\n";
        }

    } while (choice != 8);

    return 0;
}