#ifndef __POLINOMIO
#define __POLINOMIO

#include <iostream>

using namespace std;

// Classe que representa uma Exceção que ocorrerá ao acessar uma posição inválida do vetor. ✔
class PosicaoInvalidaExcept {
	private:
		// Variável que armazena a mensagem de erro. ✔
		char *msg;
	
	public:
		PosicaoInvalidaExcept(const char *m); // Contrutor padrão que inicializa a mensagem de erro. ✔
		char* getMessage(); // Retorna a mensagem de erro. ✔
		~PosicaoInvalidaExcept(); // Destrutor. ✔
		PosicaoInvalidaExcept & operator=(const PosicaoInvalidaExcept &e); // Operador de atribuição. ✔
		PosicaoInvalidaExcept(const PosicaoInvalidaExcept &e); // Construtor de cópia. ✔
};

// Classe que representa uma Exceção que ocorrerá quando o denominador da divisão estiver no formato inválido. ✔
class ArgumentoInvalidoExcept {
	private:
		// Variável que armazena a mensagem de erro. ✔
		char *msg;
		
	public:
		ArgumentoInvalidoExcept(const char *m); // Construtor padrão que inicializa a mensagem de erro. ✔
		char* getMessage(); // Retorna a mensagem de erro. ✔
		~ArgumentoInvalidoExcept(); // Destrutor. ✔
		ArgumentoInvalidoExcept & operator=(const ArgumentoInvalidoExcept &e); // Operador de atribuição. ✔
		ArgumentoInvalidoExcept(const ArgumentoInvalidoExcept &e); // Construtor de cópia. ✔
};

// Classe que representa uma Exceção que ocorrerá quando um Polinômio não possuir raízes reais. ✔
class NenhumaRaizExcept {
	private:
		// Variável que armazena a mensagem de erro. ✔
		char *msg;
		
	public:
		NenhumaRaizExcept(const char *m); // Contrutor padrão que inicializa a mensagem de erro. ✔
		char* getMessage(); // Retorna a mensagem de erro. ✔
		~NenhumaRaizExcept(); // Destrutor. ✔
		NenhumaRaizExcept & operator=(const NenhumaRaizExcept &e); // Operador de atribuição. ✔
		NenhumaRaizExcept(const NenhumaRaizExcept &e); // Construtor de cópia. ✔
};

// Classe que representa um Polinômio. ✔
class Polinomio {
	private:
		// Declarando um vetor que guardará os coeficientes do Polinômio e uma
		// variável que guardará o grau do Polinômio. ✔
		double *coeficientes;
		unsigned int grau;

	public:
		Polinomio(); // Construtor padrão que inicializa um Polinômio de grau 0 com coeficiente 0. ✔
		Polinomio(const int cte); // Construtor que inicializa um Polinômio de grau 0 com coeficiente cte. ✔
		Polinomio(double a, unsigned int n); // Construtor que cria um Polinômio de grau n com todos os coeficientes com valor a (Extra). ✔
		Polinomio(unsigned int n, double *a); // Construtor que cria um Polinômio a partir de um vetor de coeficientes. ✔
		Polinomio(const Polinomio &p); // Construtor de cópia. ✔
		~Polinomio(); // Destrutor. ✔
		Polinomio & operator=(const Polinomio &p); // Operador de atribuição. ✔
		Polinomio operator+(const double &cte) const; // Soma uma constante em um Polinômio. ✔
		Polinomio operator-(const double &cte) const; // Subtrai uma constante em um Polinômio. ✔
		Polinomio operator++(); // Incrementa uma unidade ao termo constante. ✔
		Polinomio operator++(int); // Incrementa uma unidade ao termo constante. ✔
		Polinomio operator--(); // Decrementa uma unidade ao termo constante (Extra). ✔
		Polinomio operator--(int); // Decrementa uma unidade ao termo constante (Extra). ✔
		bool operator==(const Polinomio &p) const; // Verifica se dois Polinômios são iguais. ✔
		Polinomio operator+(const Polinomio &p) const; // Soma dois Polinômios. ✔
		Polinomio operator-(const Polinomio &p) const; // Subtrai dois Polinômios. ✔
		Polinomio & operator+=(const double &cte); // Soma e atribui uma constante ao Polinômio. ✔
		Polinomio & operator-=(const double &cte); // Subtrai e atribui uma constante ao Polinômio. ✔
		Polinomio operator*(const double &cte) const; // Multiplica o Polinômio por uma constante. ✔
		Polinomio & operator*=(const double &cte); // Multiplica e atribui o Polinômio por uma constante. ✔
		Polinomio & operator+=(const Polinomio &p); // Soma e atribui um Polinômio p ao Polinômio this. ✔
		Polinomio & operator-=(const Polinomio &p); // Subtrai e atribui um Polinômio p ao Polinômio this. ✔
		friend Polinomio operator*(const double &cte, const Polinomio &p); // Multiplica o Polinômio por uma constante. ✔
		Polinomio operator/(const int &cte) const; // Divide o Polinômio por uma constante. ✔
		Polinomio & operator/=(const int &cte); // Divide e atribui o Polinômio por uma constante. ✔
		Polinomio derivada() const; // Calcula da derivada do Polinômio. ✔
		Polinomio integral() const; // Calcula a integral do Polinômio (Extra). ✔
		double avalia(double a) const; // Calcula P(a). ✔
		double operator[](int i) const; // Retorna o i-ésimo coeficiente. ✔
		Polinomio operator*(const Polinomio &p) const; // Multiplica dois Polinômios. ✔
		Polinomio & operator*=(const Polinomio &p); // Multiplica e atribui dois Polinômios. ✔
		friend istream& operator>>(istream &is, Polinomio &p); // Realiza a leitura de um Polinômio. ✔
		friend ostream& operator<<(ostream &os, const Polinomio &p); // Realiza a impressão de um Polinômio. ✔
		Polinomio operator/(const Polinomio &p) const; // Divide dois Polinômios ✔
		Polinomio & operator/=(const Polinomio &p); // Divide e atribui dois Polinômios ✔
		Polinomio operator%(const Polinomio &p) const; // Calcula o resto da divisão de dois Polinômios. ✔
		Polinomio & operator%=(const Polinomio &p); // Calcula e atribui o resto da divisão de dois Polinômios. ✔
		double* resolve(int &x) const; // Encontra as raízes do Polinômio. ✔
};

Polinomio operator*(const double &cte, const Polinomio &p); // Multiplica o Polinômio por uma constante. ✔
istream& operator>>(istream &is, Polinomio &p); // Realiza a leitura de um Polinômio. ✔
ostream& operator<<(ostream &os, const Polinomio &p); // Realiza a impressão de um Polinômio. ✔

#endif