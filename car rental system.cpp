#include <iostream>
#include <string>
#include <vector>
using namespace std;
class Car {
private:
string make;
string model;
string color;
double dailyRate;
bool rented;
public:
Car(string make, string model, string color, double dailyRate) {
this->make = make;
this->model = model;
this->color = color;
this->dailyRate = dailyRate;
this->rented = false;
}
string getMake() {
return make;
}
string getModel() {
return model;
}
string getColor() {
return color;
}
double getDailyRate() {
return dailyRate;
}
bool isRented() {
return rented;
}
void rent() {
rented = true;
}
void returnCar() {
rented = false;
}
};
class Rental {
private:
int rentalCode;
Car* car;
int days;
public:
Rental(int rentalCode, Car* car, int days) {
this->rentalCode = rentalCode;
this->car = car;
this->days = days;
car->rent();
}
~Rental() {
car->returnCar();
}
double calculateCost() {
return car->getDailyRate() * days;
}
void printRental() {
cout << " Rental Code: " << rentalCode << endl;
cout << " Make: " << car->getMake() << endl;
cout << " Model: " << car->getModel() << endl;
cout << " Color: " << car->getColor() << endl;
cout << " Days Rented: " << days << endl;
cout << " Total Cost: $" << calculateCost() << endl;
}
};
int main() {
vector<Car*> cars;
cars.push_back(new Car("Toyota", "Camry", "Red", 50.0));
cars.push_back(new Car("Honda", "Accord", "Blue", 60.0));
cars.push_back(new Car("Nissan", "Altima", "White", 55.0));
cars.push_back(new Car("Ford", "Mustang", "Black", 65.0));
cars.push_back(new Car("Porsche", "Cayenne", "White", 100.0));
cout << "--------WELCOME TO THE CAR RENTAL SYSTEM--------" << endl;
cout << "Available Cars:" << endl;
for (int i = 0; i < cars.size(); i++) {
cout << i+1 << ". " << cars[i]->getMake() << " " << cars[i]->getModel() << " (" << cars[i]->getColor() << ")" << endl;
}
vector<Rental*> rentals;
int rentalCode = 1001;
while (true) {
cout << "Enter car number (1-" << cars.size() << "), and 0 for billing: ";
int carNum;
cin >> carNum;
if (carNum == 0) {
break;
}
else if (carNum < 1 || carNum > cars.size()) {
cout << "Invalid car number." << endl;
continue;
}
cout << "Enter rental days: ";
int days;
cin >> days;
Rental* rental = new Rental(rentalCode, cars[carNum-1], days);
rentals.push_back(rental);
rentalCode++;
}
if (rentals.size() > 0) {
cout << "Booking Details:" << endl;
for (Rental* rental : rentals) {
rental->printRental();
}
while (true) {
cout << "Do you want to complete booking or delete(c/d): " << endl;
char process;
cin >> process;
if (process == 'c') {
cout << "----------The vehicle is booked and the car will be delivered shortly----------" << endl;
cout << "----------------- Thank you for using the car rental system -----------------" << endl;
cout << "" << endl;
cout << "For any Queries or Issue contact the number : +91 12345 12345"<< endl;
cout << "Kindly fill the feedback to help us know how the program is: " << endl;
cout << " https://forms.gle/VeAHe3AgGf4HncSR6" << endl;
break;
}
else if (process == 'd') {
cout << "Thank you for using the car rental system" << endl;
cout << "" << endl;
cout << "For any Queries or Issue contact the number : +91 12345 12345"<< endl;
cout << "Kindly fill the feedback to help us know how the program is: " << endl;
cout << " https://forms.gle/VeAHe3AgGf4HncSR6" << endl;
break;
}
}
}
else {
cout << "No bookings found." << endl;
}
for (Rental* rental : rentals) {
delete rental;
}
for (Car* car : cars) {
delete car;
}
return 0;
}
