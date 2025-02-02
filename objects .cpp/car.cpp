#include <iostream>
#include <string>
using namespace std;

// Step 1: Define a class named Car
class Car {
public:
    // Step 2: Public data members
    string brand;
    string model;
    float price;
    int mileage;

    // Step 4: Public member function to display car details
    void display() {
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model << endl;
        cout << "Price: $" << price << endl;
        cout << "Mileage: " << mileage << " miles" << endl;
    }

    // Step 5: Public member function to simulate driving
    void drive(int distance) {
        mileage += distance; // Increase mileage by the distance driven
        cout << "Driven " << distance << " miles. Updated mileage: " << mileage << " miles" << endl;
    }
};

int main() {
    // Step 6: Create a Car object with the given details
    Car myCar;
    myCar.brand = "Toyota";
    myCar.model = "Corolla";
    myCar.price = 20000;
    myCar.mileage = 5000;

    // Step 7: Use the display function to show the car's details
    cout << "Car Details:" << endl;
    myCar.display();

    // Step 8: Simulate driving the car for 150 miles
    cout << "\nDriving the car..." << endl;
    myCar.drive(150);

    // Step 9: Simulate driving the car for 300 miles
    cout << "\nDriving the car again..." << endl;
    myCar.drive(300);

    return 0;
}