#include "Sort.h"
#include <iostream>



void Sort::swap(int a, int b)
{
	int aux;
	aux = a;
	a = b;
	b = aux;
}

int Sort::partition(int v[], int low, int high)
{
	int pivot = v[high];
	
	int i = (low - 1);

	for (int j = low; j <= high; j++)
	{
		
		if (v[j] < pivot)
		{
			
			i++;
			swap(v[i], v[j]);
		}
	}
	swap(v[i + 1], v[high]);
	return (i + 1) ;
}


void Sort::InsertSort(int v[], int n)
{
	int aux;
	for (int i = 0; i < n; i++)
		for (int j = i + 1; j < n; j++)
			if (v[i] > v[j])
			{
				swap(v[i], v[j]);
			}

}

void Sort::QuickSort(int v[], int low,int high)
{
	if (low < high) {

		
		int pi = partition(v, low, high);

		
		QuickSort(v, low, pi - 1);
		QuickSort(v, pi + 1, high);
	}
}

void Sort::BubbleSort(int v[], int n)
{
	int i, j;
	bool swapped;
	for (i = 0; i < n - 1; i++) {
		swapped = false;
		for (j = 0; j < n - i - 1; j++) {
			if (v[j] > v[j + 1]) {
				swap(v[j], v[j + 1]);
				swapped = true;
			}
		}


		if (swapped == false)
			break;
	}











