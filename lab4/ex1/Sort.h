#pragma once
class Sort
{
    int v[100];
    int n;

public:
    void swap(int a, int b);
    int partition(int v[], int low, int high);
    void InsertSort(int v[], int n);
    void QuickSort(int v[], int low, int high);
    void BubbleSort(int v[], int n);
    void Print(int v[], int n);
    int  GetElementsCount(int n);
    int  GetElementFromIndex(int index);
};
