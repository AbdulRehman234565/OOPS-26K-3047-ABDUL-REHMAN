#include <iostream>
using namespace std;
class Vehicle {
private:
    string vehicleName;
    string registrationNumber;
    string vehicleType;
    int rentPerDay;
    string availabilityStatus;
public:
    void setVehicle(string name, string regNo, string type, int rent, string status);
    void displayVehicle();
    int getRentPerDay();
    int calculateRent(int rentalDays);
};
void Vehicle::setVehicle(string name, string regNo, string type, int rent, string status) {
    vehicleName = name;
    registrationNumber = regNo;
    vehicleType = type;
    rentPerDay = rent;
    availabilityStatus = status;
}
void Vehicle::displayVehicle() {
    cout << "Vehicle Name        : " << vehicleName << endl;
    cout << "Registration Number : " << registrationNumber << endl;
    cout << "Vehicle Type        : " << vehicleType << endl;
    cout << "Rent Per Day        : Rs. " << rentPerDay << endl;
    cout << "Availability Status : " << availabilityStatus << endl;
}
int Vehicle::getRentPerDay() {
    return rentPerDay;
}
int Vehicle::calculateRent(int rentalDays) {
    return rentPerDay * rentalDays;
}
int main() {
    Vehicle v1, v2;
    v1.setVehicle("Toyota Corolla", "ABC-123", "Sedan", 5000, "Available");
    v2.setVehicle("Honda BR-V", "XYZ-789", "SUV", 8500, "Rented Out");
    v1.displayVehicle();
    v2.displayVehicle();
    cout << "\nVehicle 1 Rent Per Day: Rs. " << v1.getRentPerDay() << endl;
    cout << "Vehicle 2 Rent Per Day: Rs. " << v2.getRentPerDay() << endl;
    int days1 = 4;
    int days2 = 7;
    cout << "\nTotal rent for Vehicle 1 (" << days1 << " days): Rs. " << v1.calculateRent(days1) << endl;
    cout << "Total rent for Vehicle 2 (" << days2 << " days): Rs. " << v2.calculateRent(days2) << endl;
    return 0;
}
