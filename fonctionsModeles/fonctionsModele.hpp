
template <typename T>
T TrouverMax(const T _tabValeur[], int _nbElement){
	T valeurMax = _tabValeur[0];

	for (int i = 0; i < _nbElement; i++){
		if (valeurMax < _tabValeur[i]){
			valeurMax = _tabValeur[i];
		}
	}

	return valeurMax;

}

template <typename T>
T CalculerSomme(const T _tabValeur[], int _nbElement){
	T sommeTotal = _tabValeur[0];

	for (int i = 1; i < _nbElement; i++){
		sommeTotal = sommeTotal + _tabValeur[i];
	}

	return sommeTotal;

}