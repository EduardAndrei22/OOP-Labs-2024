#pragma once
#include<iostream>
using namespace std;
template <class T>
class node
{
private:
	T val;
	node<T>* parent;
	node<T>** children;
	int nrChildren;
	int maxChildren;


public:
	node(const T valoare) : val(valoare)
	{
		children = new node<T>[maxChildren];
		for (int i = 0; i < maxChildren; i++)
			children[i] = nullptr;
	}

	~node()
	{
		for (int i = 0; i < maxChildren; i++)
			delete children[i];

		delete[] children;

	}
	void add_node(node<T>nod)
	{

		nod.nrChildren++;
		nod.children[nrChildren] = ;
		parent = nod;
		cout << nod.val << " ";

	}

		int get_node(T index)
		{
			if (this->children[index] == nullptr)
				return -1;
			else
			{
				node<T>* nou = this->children[index];
				return nou->val;
			}

		}

		void delete_node()
		{
			for (int i = 0;i < this->nrChildren;i++)
			{
				this->children[i] = nullptr;

			}
			for (int i = 0;i < this->parent->nrChildren;i++)
			{
				if (this->parent->children[i]->val == this->val)
				{
					this->parent->children[i] = nullptr;
				}

			}
		}

		void print(node<T>nod)
		{
			if (nod)
			{
				print(nod->children);
				cout << this->val << " ";
				print(nod->children);

			}
		}

		int find(T valoare)
		{
			if (this)
			{
				this->parent = this;
				if (this->val == valoare)
					return 1;
				else
				{
					for (int i = 1;i <= this->nrChildren;i++)
					{
						this->parent = this->children[i];
						return 1 + parent->find(valoare);

					}

				}
			}

		}
	
};