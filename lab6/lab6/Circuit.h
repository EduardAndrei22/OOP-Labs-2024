#pragma once

#include "Car.h"
#include "RangeRover.h"
#include "Fiat.h"
#include "Seat.h"
#include "Volvo.h"
class Circuit {
private:int lenght;
	   int vreme;
	   Car** masina;
	   int indexmax;
	   int indexcurent;
	   float* time;
	   int numar;

public:
	Circuit();

	void SetLength(int x);

	int SetWeather(int x);

	void AddCar(Car* masina);

	void Race();

	void ShowFinalRanks();

	void ShowWhoDidNotFinish();
};