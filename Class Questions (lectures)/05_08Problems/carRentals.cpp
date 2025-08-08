#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

// Base class Vehicle
class Vehicle {
protected:
    string vehicleName;
    double rentPerDay;
    int days;

public:
    Vehicle(string name, double rent, int d) : vehicleName(name), rentPerDay(rent), days(d) {}

    virtual double calculateFinalRent() const {
        return rentPerDay * days;
    }

    virtual void display() const {
        cout << "Vehicle Name: " << vehicleName << endl;
        cout << "Days: " << days << endl;
        cout << "Final Rent: " << fixed << setprecision(2) << calculateFinalRent() << endl;
    }
    
    // Virtual destructor for proper cleanup
    virtual ~Vehicle() {}
};

// Derived class CarRental
class CarRental : public Vehicle {
public:
    CarRental(string name, double rent, int d) : Vehicle(name, rent, d) {}

    double calculateFinalRent() const override {
        double totalRent = rentPerDay * days;
        if (days > 7) { //
            totalRent *= 0.90; // 10% discount
        }
        return totalRent;
    }

    void display() const override {
        cout << "Car Rental: " << vehicleName << endl;
        cout << "Days: " << days << endl;
        cout << "Final Rent: " << fixed << setprecision(2) << calculateFinalRent() << endl;
    }
};

// Derived class BikeRental
class BikeRental : public Vehicle {
public:
    BikeRental(string name, double rent, int d) : Vehicle(name, rent, d) {}

    double calculateFinalRent() const override {
        double totalRent = rentPerDay * days;
        if (totalRent > 3000) { //
            totalRent -= 200; // Flat ₹200 discount
        }
        return totalRent;
    }

    void display() const override {
        cout << "Bike Rental: " << vehicleName << endl;
        cout << "Days: " << days << endl;
        cout << "Final Rent: " << fixed << setprecision(2) << calculateFinalRent() << endl;
    }
};

// Main function to run the program
int main() {
    // Example from the document
    Vehicle* v1 = new CarRental("Sedan", 2000, 10);
    Vehicle* v2 = new BikeRental("Yamaha", 500, 7);

    v1->display();
    cout << endl;
    v2->display();

    // Clean up allocated memory
    delete v1;
    delete v2;

    return 0;
}