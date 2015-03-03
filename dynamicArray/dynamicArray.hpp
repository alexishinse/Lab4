
#include <string>
using namespace std;

template <class T>
DynamicArray<T>::DynamicArray(){
	this->tabCapacite = 100;
	this->tableau = new T[100];
	for (int i = 0; i < tabCapacite; i++){
		this->tableau[i] = T();
	}
}

template <class T>
DynamicArray<T>::~DynamicArray(){
	delete[] tableau;
}

template <class T>
void DynamicArray<T>::setElement(int _indexElement, T _element){
	this->tableau[_indexElement] = _element;
}

template <class T>
int DynamicArray<T>::getCapacite(){
	return this->tabCapacite;
}

template <class T>
T DynamicArray<T>::getElement(int _indexElement){
	return this->tableau[_indexElement];
}