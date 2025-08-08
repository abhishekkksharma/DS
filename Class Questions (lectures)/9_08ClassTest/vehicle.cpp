#include <iostream>
#include <string>
using namespace std;

class Vehicle {
protected:
    string registrationNumber;
    double mileage;
    static int vehicleCount;

public:
    Vehicle(const string& reg, double miles) : registrationNumber(reg), mileage(miles) {
        vehicleCount++;
    }

    virtual void printDetails() const {
        cout << "Vehicle [Reg: " << registrationNumber << ", Mileage: " << mileage << " km]" << endl;
    }

    virtual ~Vehicle() {
        vehicleCount--;
    }

    static int getVehicleCount() {
        return vehicleCount;
    }
};

int Vehicle::vehicleCount = 0;

class Car : public Vehicle {
private:
    int doors;

public:
    Car(const string& reg, double miles, int doors) : Vehicle(reg, miles), doors(doors) {}

    void printDetails() const override {
        cout << "Car [Reg: " << registrationNumber << ", Mileage: " << mileage
             << " km, Doors: " << doors << "]" << endl;
    }
};

class Bike : public Vehicle {
private:
    bool hasCarrier;

public:
    Bike(const string& reg, double miles, bool carrier) : Vehicle(reg, miles), hasCarrier(carrier) {}

    void printDetails() const override {
        cout << "Bike [Reg: " << registrationNumber << ", Mileage: " << mileage
             << " km, Carrier: " << (hasCarrier ? "Yes" : "No") << "]" << endl;
    }
};


int main() {
    Vehicle* v1 = new Car("AP09CA1234", 15000.5, 4);
    Vehicle* v2 = new Bike("TS10BB4321", 8000.0, true);

    v1->printDetails();
    v2->printDetails();

    cout << "Total vehicles: " << Vehicle::getVehicleCount() << endl;

    delete v1;
    delete v2;
}
