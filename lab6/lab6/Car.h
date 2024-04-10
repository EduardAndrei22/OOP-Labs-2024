#pragma once

#include<iostream>
class Car {
public:
	int fuel_cap;
	int fuel_cons;
	int speed;
	virtual int set_fuel_cap(int x) = 0;
	virtual int set_fuel_cons(int x) = 0;
	virtual int set_speed(int x) = 0;
	virtual void afiseaza() = 0;

};