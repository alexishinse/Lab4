#pragma once

template <class T>
class DynamicArray{

public:
	DynamicArray<T>();
	DynamicArray<T>(int _capacite);
	~DynamicArray<T>();
	void setCapacite(int _capacite);
	int getCapacite();
	void setElement(int _indexElement, T _element);
	T getElement(int _indexElement);
private:
	T* tableau;
	int tabCapacite;
};

#include "dynamicArray.hpp"