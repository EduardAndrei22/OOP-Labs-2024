#pragma once
#include "Car.h"
#include<iostream>
using namespace std;
class Seat : public Car {
	int set_fuel_cap(int x);
	int set_fuel_cons(int x);
	int set_speed(int x);
	void afiseaza();

};