#include "BMW.h"
#include "Car.h"
#include "Circuit.h"
int BMW::set_fuel_cap(int x)
{
	if (x == 0)
	{
		this->fuel_cap = 56;
		return fuel_cap;
	}
	if (x == 1)
	{
		this->fuel_cap = 60;
		return fuel_cap;
	}
	if (x == 2)
	{
		this->fuel_cap = 85;
		return fuel_cap;
	}
}

int BMW::set_fuel_cons(int x)
{
	if (x == 0) {
		this->fuel_cons = 50;
		return fuel_cons;
	}
	if (x == 1) {
		this->fuel_cons = 69;
		return fuel_cons;
	}
	if (x == 2) {
		this->fuel_cons = 80;
		return fuel_cons;
	}
}

int BMW::set_speed(int x)
{
	if (x == 0)
	{
		this->speed = 60;
		return speed;
	}
	if (x == 1)
	{
		this->speed = 40;
		return speed;
	}
	if (x == 2)
	{
		this->speed = 150;
		return speed;
	}
}

void BMW::afiseaza()
{
	cout << "BMW: ";
}