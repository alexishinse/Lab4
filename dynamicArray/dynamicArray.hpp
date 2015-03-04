
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
DynamicArray<T>::DynamicArray(int _capacite){

	if (_capacite < 1) throw invalid_argument("La capacite ne peut etre inferieur a 1.");

	this->tabCapacite = _capacite;
	this->tableau = new T[_capacite];
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
	if (_indexElement >= tabCapacite) { 
		setCapacite(_indexElement + 1);
	}
	this->tableau[_indexElement] = _element;
}

template <class T>
int DynamicArray<T>::getCapacite(){
	return this->tabCapacite;
}

template <class T>
void DynamicArray<T>::setCapacite(int _capacite){

	if (_capacite < 1) throw invalid_argument("La capacite ne peut etre inferieur a 1.");

	T* nouvelleTable = new T[_capacite];
	int nbIteration;

	if (_capacite < tabCapacite){
		nbIteration = _capacite;
	}
	else{
		nbIteration = tabCapacite;
	}

	for (int i = 0; i < nbIteration; i++){
		nouvelleTable[i] = this->tableau[i];
	}

	if (_capacite > tabCapacite){
	    for (int i = tabCapacite; i < _capacite; i++){
		nouvelleTable[i] = T();
	    }
    } 

	delete[] tableau;
	this->tableau = nouvelleTable;
	this->tabCapacite = _capacite;
}

template <class T>
T DynamicArray<T>::getElement(int _indexElement){

	if (_indexElement >= tabCapacite) throw std::out_of_range("L'element indiqué par l'index ne fait pas partie du tableau.");

	return this->tableau[_indexElement];
}