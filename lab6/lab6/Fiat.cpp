#include "Car.h"
#include "Circuit.h"
#include "Fiat.h"
int Fiat::set_fuel_cap(int x)
{
	if (x == 0)
	{
		this->fuel_cap = 50;
		return fuel_cap;
	}
	if (x == 1)
	{
		this->fuel_cap = 35;
		return fuel_cap;
	}
	if (x == 2)
	{
		this->fuel_cap = 85;
		return fuel_cap;
	}
}

int Fiat::set_fuel_cons(int x)
{
	if (x == 0) {
		this->fuel_cons = 60;
		return fuel_cons;
	}
	if (x == 1) {
		this->fuel_cons = 40;
		return fuel_cons;
	}
	if (x == 2) {
		this->fuel_cons = 98;
		return fuel_cons;
	}
}

int Fiat::set_speed(int x)
{
	if (x == 0)
	{
		this->speed = 55;
		return speed;
	}
	if (x == 1)
	{
		this->speed = 33;
		return speed;
	}
	if (x == 2)
	{
		this->speed = 130;
		return speed;
	}
}

void Fiat::afiseaza()
{
	cout << "Fiat: ";
}