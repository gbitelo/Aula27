#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <locale.h>

using namespace std;

class Animal {
	string habitat;
	int numCelulas;
public:
	string getHabitat() { return this->habitat; }
	void setHabitat(string habitat) {
		this->habitat = habitat;
	}
	int getNumCelulas() { return this->numCelulas; }
	void setNumCelulas(int numCelulas) {
		this->numCelulas = numCelulas;
	}
};

class Ave : public Animal {
	string nome;
public:
	Ave() {}
	string getNome() { return this->nome; }
	void setNome(string nome) {
		this->nome = nome;
	};
};

class Reptil : public Animal {
	string nome;
public:
	Reptil() {}
	string getNome() { return this->nome; }
	void setNome(string nome) {
		this->nome = nome;
	};
};

class Mamifero : public Animal {
	string nome;
public:
	Mamifero() {}
	string getNome() { return this->nome; }
	void setNome(string nome) {
		this->nome = nome;
	};
};

class Peixe : public Animal {
	string nome;
public:
	Peixe(){}
	string getNome() { return this->nome; }
	void setNome(string nome) {
		this->nome = nome;
	};
};

int main() {
	setlocale(LC_ALL, "Portuguese");

	Ave a1;
	a1.setHabitat("terra e ar");
	cout << a1.getHabitat() << endl;
	a1.setNumCelulas(12);
	cout << a1.getNumCelulas() << endl;
	a1.setNome("Pássaro");
	cout << a1.getNome() << endl;


	Reptil r1;
	r1.setHabitat("terreno");
	cout << r1.getHabitat() << endl;
	r1.setNumCelulas(55);
	cout << r1.getNumCelulas() << endl;
	r1.setNome("cobra");
	cout << r1.getNome() << endl;

	Mamifero m1;
	m1.setHabitat("terreno");
	cout << m1.getHabitat() << endl;
	m1.setNumCelulas(22);
	cout << m1.getNumCelulas() << endl;
	m1.setNome("vaca");
	cout << m1.getNome() << endl;

	Peixe p1;
	p1.setHabitat("água");
	cout << p1.getHabitat() << endl;
	p1.setNumCelulas(35);
	cout << p1.getNumCelulas() << endl;
	p1.setNome("traira");
	cout << p1.getNome() << endl;

	system("pause");
	return 0;
}