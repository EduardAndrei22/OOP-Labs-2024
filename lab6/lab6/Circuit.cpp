#include "Circuit.h"
#include "Car.h"
#include<iostream>
using namespace std;
Circuit::Circuit()
{
	this->indexmax = 100;
	this->indexcurent = 0;
	this->masina = new Car * [indexmax];
	this->time = new float[100];
	this->numar = 0;
}

void Circuit::SetLength(int x)
{
	this->lenght = x;
}

int Circuit::SetWeather(int x)
{
	if (x == 0)
		return this->vreme = 0;
	else
		if (x == 1)
			this->vreme = 1;
		else
			if (x == 2)
				this->vreme = 2;
}

void Circuit::AddCar(Car* masini)
{
	if (this->indexcurent < this->indexmax)
		this->masina[this->indexcurent++] = masini;
}

void Circuit::Race()
{
	for (int i = 0; i <= indexmax; i++)
		time[i] = 0;
	for (int i = 0; i < this->indexcurent; i++)
	{
		float timp = ((float)this->lenght) / (this->masina[i]->set_speed(this->vreme));
		this->time[this->numar] = timp;
		numar++;

	}

}

void Circuit::ShowFinalRanks()
{
	float aux; Car* aux1;
	for (int i = 0; i < this->numar - 1; i++)
	{
		for (int j = i + 1; j < this->numar; j++)
			if (this->time[i] > this->time[j])
			{
				aux = this->time[i];
				this->time[i] = this->time[j];
				this->time[j] = aux;
				aux1 = this->masina[i];
				this->masina[i] = this->masina[j];
				this->masina[j] = aux1;



			}
	}
	for (int i = 0; i < this->numar; i++)
	{
		this->masina[i]->afiseaza();
		cout << this->time[i] << endl;
	}

}

void Circuit::ShowWhoDidNotFinish()
{
	for (int i = 0; i < indexcurent; i++)
	{
		int verifica = this->masina[i]->set_fuel_cap(this->vreme) * this->lenght / this->masina[i]->set_fuel_cons(this->vreme);
		if (verifica < this->lenght)
		{
			masina[i]->afiseaza();
			cout << " Nu ajunge la destinatie.";
		}

	}
}