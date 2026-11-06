#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
using namespace std;

struct Planet {
	string name;
	double mass;
	double radius;
	double distance;
};

double WeightCal(double earthWeigth, Planet p) {
	double userWeight = earthWeigth / 9.8;
	const double Gravitational = 6.6743e-11;
	double planetGravity = (Gravitational * p.mass) / (p.radius * p.radius);
	double finalWeight = userWeight * planetGravity;
	return finalWeight;
}

int main() {
	Planet solarsystem[8] = {
		{ "Mercury", 3.30e23, 2.4397e6, 0.39 },
		{ "Venus", 4.87e24, 6.0518e6, 0.72 },
		{ "Earth", 5.97e24, 6.371e6, 1.00 },
		{ "Mars", 6.42e23, 3.3895e6, 1.52 },
		{ "Jupiter", 1.898e27, 6.9911e7, 5.20 },
		{ "Saturn", 5.68e26, 5.8232e7, 9.58 },
		{ "Uranus", 8.68e25, 2.5362e7, 19.20 },
		{ "Neptune", 1.02e26, 2.4622e7, 30.05 },
	};

	double inputWeight;
	cout << "Welcome To Planet Data\n";
	cout << "Please enter your weight (KG): ";
	cin >> inputWeight;
	cout << "\nChoose a planet\n";

	for (int i = 0; i < 8; i ++) {
		cout << i + 1 << ". " << solarsystem[i].name << "\n";
	}

	int choice;
	cout << "Enter a choice (1-8): ";
	cin >> choice;

	if (choice >= 1 && choice <= 8) {
		double calculatedWeight = WeightCal(inputWeight, solarsystem[choice - 1]);
		cout << "\n-----PLANET PROFILE-----\n";
		cout << "Planet: " << solarsystem[choice - 1].name << "\n";
		cout << "Mass: " << solarsystem[choice - 1].mass << " kg." << "\n";
		cout << fixed << setprecision(2);
		cout << "Radius: " << solarsystem[choice - 1].radius << " m." << "\n";
		cout << "Distance From Sun: " << solarsystem[choice - 1].distance << " AU." << "\n";
		cout << "Your weight on " << solarsystem[choice - 1].name << " would be " << calculatedWeight << " kg.";
	} 
	else {
		cout << "\nError: Invalid Choice! Please select a planet between 1 to 8.\n ";
	}
	return 0;
}