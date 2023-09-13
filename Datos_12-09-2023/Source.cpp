#include <iostream>
#include <vector>
using namespace std;

int getPadre(vector<int>&, int);
int getMayor(vector<int>&);
int getHijoIzq(vector<int>&, int);
int getHijoDere(vector<int>&, int);

int main() {

	vector<int> aux;



	return 0;
}

int getPadre(vector<int>& aux, int i)
{
	return aux[i/2]; // Si empieza en 1, si empieza en 0 seria (i-1)/2
}

int getMayor(vector<int>& aux)
{
	return aux[1];
}

int getHijoIzq(vector<int>& aux, int i)
{
	return aux[i * 2]; // Si empieza en 1, si empieza en 0 seria i * 2 + 1
}

int getHijoDere(vector<int>& aux, int i)
{
	return aux[i * 2 + 1]; // Si empieza en 1, si empieza en 0 seria i * 2 + 2
}
