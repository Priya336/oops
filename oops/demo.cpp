#include <iostream>
using namespace std;

// Parent class
class Vehicle {
public:
	int wheels;
	string color;
	void start() { 
        cin>>color;
        cout << "Vehicle started." << endl; }
};

// Child class
class Car : public Vehicle {
public:
	string model;
	void drive()
	{
		cout << "Driving the " << color << " " << model
			<< " car on " << wheels << " wheels." << endl;
	}
};

int main()
{
	// Create an object of the child class
	Car myCar;
	myCar.wheels = 4;
	myCar.color = "blue";
	myCar.model = "SUV";

	// Call functions from the parent and child classes
	myCar.start();
	myCar.drive();

	return 0;
}
