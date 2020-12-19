#include "Polinomio.h"
#include <cmath>
#include <cstring>

// Contrutor padrão que inicializa a mensagem de erro. ✔
PosicaoInvalidaExcept::PosicaoInvalidaExcept(const char *m) {
	msg = new char[strlen(m) + 1];
	strcpy(msg, m); 
}

// Retorna a mensagem de erro. ✔
char* PosicaoInvalidaExcept::getMessage() {
	return msg; 
}

// Destrutor. ✔
PosicaoInvalidaExcept::~PosicaoInvalidaExcept() {
    delete[] msg;
}

// Operador de atribuição. ✔
PosicaoInvalidaExcept & PosicaoInvalidaExcept::operator=(const PosicaoInvalidaExcept &e) {
    if (this == &e) return *this;

    delete[] msg;
    
    msg = new char[strlen(e.msg) + 1];
	strcpy(msg, e.msg); 

    return *this;
}

// Construtor de cópia. ✔
PosicaoInvalidaExcept::PosicaoInvalidaExcept(const PosicaoInvalidaExcept &e) {
    msg = new char[strlen(e.msg) + 1];
	strcpy(msg, e.msg); 
}

// Contrutor padrão que inicializa a mensagem de erro. ✔
ArgumentoInvalidoExcept::ArgumentoInvalidoExcept(const char *m) {
	msg = new char[strlen(m) + 1];
	strcpy(msg, m); 
}

// Retorna a mensagem de erro. ✔
char* ArgumentoInvalidoExcept::getMessage() {
	return msg; 
}

// Destrutor. ✔
ArgumentoInvalidoExcept::~ArgumentoInvalidoExcept() {
    delete[] msg;
}

// Operador de atribuição. ✔
ArgumentoInvalidoExcept & ArgumentoInvalidoExcept::operator=(const ArgumentoInvalidoExcept &e) {
    if (this == &e) return *this;

    delete[] msg;
    
    msg = new char[strlen(e.msg) + 1];
	strcpy(msg, e.msg); 

    return *this;
}

// Construtor de cópia. ✔
ArgumentoInvalidoExcept::ArgumentoInvalidoExcept(const ArgumentoInvalidoExcept &e) {
    msg = new char[strlen(e.msg) + 1];
	strcpy(msg, e.msg); 
}

// Contrutor padrão que inicializa a mensagem de erro. ✔
NenhumaRaizExcept::NenhumaRaizExcept(const char *m) {
	msg = new char[strlen(m) + 1];
	strcpy(msg, m); 
}

// Retorna a mensagem de erro. ✔
char* NenhumaRaizExcept::getMessage() {
	return msg; 
}

// Destrutor. ✔
NenhumaRaizExcept::~NenhumaRaizExcept() {
    delete[] msg;
}

// Operador de atribuição. ✔
NenhumaRaizExcept & NenhumaRaizExcept::operator=(const NenhumaRaizExcept &e) {
    if (this == &e) return *this;

    delete[] msg;
    
    msg = new char[strlen(e.msg) + 1];
	strcpy(msg, e.msg); 

    return *this;
}

// Construtor de cópia. ✔
NenhumaRaizExcept::NenhumaRaizExcept(const NenhumaRaizExcept &e) {
    msg = new char[strlen(e.msg) + 1];
	strcpy(msg, e.msg); 
}

// Construtor padrão que inicializa um Polinômio de grau 0 com coeficiente 0. ✔
Polinomio::Polinomio() {
    coeficientes = new double[1];
    grau = 0;
    coeficientes[0] = 0;
}

// Construtor que inicializa um Polinômio de grau 0 com coeficiente cte. ✔
Polinomio::Polinomio(const int cte) {
    coeficientes = new double[1];
    grau = 0;
    coeficientes[0] = cte;
}

// Construtor que cria um Polinômio de grau n com todos os coeficientes com valor a (Extra). ✔
Polinomio::Polinomio(double a, unsigned int n) {
    coeficientes = new double[n + 1];
    grau = n;

    for (int i = 0; i < (grau + 1); i++) coeficientes[i] = a;
}

// Construtor que cria um Polinômio a partir de um vetor de coeficientes. ✔
Polinomio::Polinomio(unsigned int n, double *a) {
    coeficientes = new double[n + 1];
    grau = n;

    for (int i = 0; i < (grau + 1); i++) coeficientes[i] = a[i];
}

// Construtor de cópia. ✔
Polinomio::Polinomio(const Polinomio &p) {
    coeficientes = new double[p.grau + 1];
    grau = p.grau;

    for (int i = 0; i < (grau + 1); i++) coeficientes[i] = p.coeficientes[i];
}

// Destrutor. ✔
Polinomio::~Polinomio() {
    delete[] coeficientes;
}

// Operador de atribuição. ✔
Polinomio & Polinomio::operator=(const Polinomio &p) {
    if (this == &p) return *this;

    delete[] coeficientes;
    
    coeficientes = new double[p.grau + 1];
    grau = p.grau;

    for (int i = 0; i < (grau + 1); i++) coeficientes[i] = p.coeficientes[i];

    return *this;
}

// Soma uma constante em um Polinômio. ✔
Polinomio Polinomio::operator+(const double &cte) const {
    Polinomio resp(*this);

    resp.coeficientes[0] += cte;

    return resp;
}

// Subtrai uma constante em um Polinômio. ✔
Polinomio Polinomio::operator-(const double &cte) const {
    Polinomio resp(*this);

    resp.coeficientes[0] -= cte;

    return resp;
}

// Incrementa uma unidade ao termo constante. ✔
Polinomio Polinomio::operator++() {
    coeficientes[0]++;

    return *this;
}

// Incrementa uma unidade ao termo constante. ✔
Polinomio Polinomio::operator++(int) {
    Polinomio resp(*this);

    coeficientes[0]++;

    return resp;
}

// Decrementa uma unidade ao termo constante (Extra). ✔
Polinomio Polinomio::operator--() {
    coeficientes[0]--;

    return *this;
}

// Decrementa uma unidade ao termo constante (Extra). ✔
Polinomio Polinomio::operator--(int) {
    Polinomio resp(*this);

    coeficientes[0]--;

    return resp;
}

// Verifica se dois Polinômios são iguais. ✔
bool Polinomio::operator==(const Polinomio &p) const {
    const double EPSILON = 1e-15;

    if (grau == p.grau) {
        for (int i = 0; i < (grau + 1); i++) 
            if (fabs(coeficientes[i] - p.coeficientes[i]) > EPSILON) 
                return false;
        
        return true;
    }

    return false;
}

// Soma dois Polinômios. ✔
Polinomio Polinomio::operator+(const Polinomio &p) const {
    const double EPSILON = 1e-15;
    int maiorGrau = (grau > p.grau) ? grau : p.grau;
    Polinomio aux(0.0, maiorGrau);
    int i;

    for (i = 0; i < (grau + 1); i++) aux.coeficientes[i] += coeficientes[i];
    for (i = 0; i < (p.grau + 1); i++) aux.coeficientes[i] += p.coeficientes[i];

    i = maiorGrau;

    while (fabs(aux.coeficientes[i]) <= EPSILON && i > 0) i--;
    
    Polinomio resp(0.0, i);

    for (int j = 0; j < (i + 1); j++) resp.coeficientes[j] = aux.coeficientes[j];
        
    return resp;
}

// Substrai dois Polinômios. ✔
Polinomio Polinomio::operator-(const Polinomio &p) const {
    const double EPSILON = 1e-15;
    int maiorGrau = (grau > p.grau) ? grau : p.grau;
    Polinomio aux(0.0, maiorGrau);
    int i;

    for (i = 0; i < (grau + 1); i++) aux.coeficientes[i] += coeficientes[i];
    for (i = 0; i < (p.grau + 1); i++) aux.coeficientes[i] -= p.coeficientes[i];

    i = maiorGrau;

    while (fabs(aux.coeficientes[i]) <= EPSILON && i > 0) i--;
    
    Polinomio resp(0.0, i);

    for (int j = 0; j < (i + 1); j++) resp.coeficientes[j] = aux.coeficientes[j];
        
    return resp;
}

// Soma e atribui uma constante ao Polinômio. ✔
Polinomio & Polinomio::operator+=(const double &cte) {
    coeficientes[0] += cte;

    return *this;
} 

// Subtrai e atribui uma constante ao Polinômio. ✔
Polinomio & Polinomio::operator-=(const double &cte) {
    coeficientes[0] -= cte;

    return *this;
}

// Multiplica o Polinômio por uma constante. ✔
Polinomio Polinomio::operator*(const double &cte) const {
    const double EPSILON = 1e-15;
    Polinomio resp;

    if (fabs(cte) <= EPSILON) {
        Polinomio aux(0.0, 0);
        resp = aux;

    } else {
        Polinomio aux(*this);
        
        for (int i = 0; i < (grau + 1); i++) aux.coeficientes[i] *= cte;

        resp = aux;
    }

    return resp;
}

// Multiplica e atribui o Polinômio por uma constante. ✔
Polinomio & Polinomio::operator*=(const double &cte) {
    const double EPSILON = 1e-15;

    if (fabs(cte) <= EPSILON) {
        delete[] coeficientes;
        coeficientes = new double[1];
        coeficientes[0] = 0;
        grau = 0;

    } else {
        for (int i = 0; i < (grau + 1); i++) coeficientes[i] *= cte;
    }

    return *this;
}

// Soma e atribui um Polinômio p ao Polinômio this. ✔
Polinomio & Polinomio::operator+=(const Polinomio &p) {
    const double EPSILON = 1e-15;
    int maiorGrau = (grau > p.grau) ? grau : p.grau;
    double *auxiliar = new double[maiorGrau + 1];
    int i;

    for (i = 0; i < maiorGrau + 1; i++) auxiliar[i] = 0.0;
    for (i = 0; i < (grau + 1); i++) auxiliar[i] += coeficientes[i];
    for (i = 0; i < (p.grau + 1); i++) auxiliar[i] += p.coeficientes[i];

    i = maiorGrau;

    while (fabs(auxiliar[i]) <= EPSILON && i > 0) i--;

    delete[] coeficientes;

    coeficientes = new double[i + 1];
    grau = i;

    for (int j = 0; j < (i + 1); j++) coeficientes[j] = auxiliar[j];
    
    delete[] auxiliar;
        
    return *this;
}

// Subtrai e atribui um Polinômio p ao Polinômio this. ✔
Polinomio & Polinomio::operator-=(const Polinomio &p) {
    const double EPSILON = 1e-15;
    int maiorGrau = (grau > p.grau) ? grau : p.grau;
    double *auxiliar = new double[maiorGrau + 1];
    int i;

    for (i = 0; i < maiorGrau + 1; i++) auxiliar[i] = 0.0;
    for (i = 0; i < (grau + 1); i++) auxiliar[i] += coeficientes[i];
    for (i = 0; i < (p.grau + 1); i++) auxiliar[i] -= p.coeficientes[i];

    i = maiorGrau;

    while (fabs(auxiliar[i]) <= EPSILON && i > 0) i--;

    delete[] coeficientes;

    coeficientes = new double[i + 1];
    grau = i;

    for (int j = 0; j < (i + 1); j++) coeficientes[j] = auxiliar[j];
    
    delete[] auxiliar;
        
    return *this;
}

// Multiplica o Polinômio por uma constante. ✔
Polinomio operator*(const double &cte, const Polinomio &p) {
    const double EPSILON = 1e-15;
    Polinomio resp;

    if (fabs(cte) <= EPSILON) {
        Polinomio aux(0.0, 0);
        resp = aux;

    } else {
        Polinomio aux(p);
        
        for (int i = 0; i < (p.grau + 1); i++) aux.coeficientes[i] *= cte;

        resp = aux;
    }

    return resp;
}

// Divide o Polinômio por uma constante. ✔
Polinomio Polinomio::operator/(const int &cte) const {
    Polinomio resp(*this);        
        
    for (int i = 0; i < (grau + 1); i++) resp.coeficientes[i] /= cte;

    return resp;
}

// Divide e atribui o Polinômio por uma constante. ✔
Polinomio & Polinomio::operator/=(const int &cte) {    
    for (int i = 0; i < (grau + 1); i++) coeficientes[i] /= cte;

    return *this;
}

// Calcula da derivada do Polinômio. ✔
Polinomio Polinomio::derivada() const { 
    if (grau > 0) {
        Polinomio resp(0.0, grau - 1);

        for (int i = 0; i < grau; i++) {
            resp.coeficientes[i] = coeficientes[i + 1] * (i + 1);
        }

        return resp;
    }

    Polinomio resp(0.0, 0);

    return resp;
}

// Calcula a integral do Polinômio (Extra). ✔
Polinomio Polinomio::integral() const {
    const double EPSILON = 1e-15;
    
    if (grau == 0 && fabs(coeficientes[0]) <= EPSILON) {
        Polinomio resp(0.0, 0);
        return resp;
    } 

    Polinomio resp(0.0, grau + 1);

    resp.coeficientes[0] = 0; // A constante do Polinômio sempre será 0.

    for (int i = 1; i < (grau + 2); i++) {
        resp.coeficientes[i] = coeficientes[i - 1] / i;
    }

    return resp;
}

// Calcula P(a). ✔
double Polinomio::avalia(double a) const {
    double resp = 0;

    for (int i = 0; i < (grau + 1); i++) {
        resp += coeficientes[i] * pow(a, i);
    }
    
    return resp;
}

// Retorna o i-ésimo coeficiente. ✔
double Polinomio::operator[](int i) const {
    if (i < 0 || i > grau) throw PosicaoInvalidaExcept("POSIÇÃO INVÁLIDA!");
    
    return coeficientes[i];
}

// Multiplica dois Polinômios. ✔
Polinomio Polinomio::operator*(const Polinomio &p) const {
    const double EPSILON = 1e-15;
    int novoGrau;

    if (grau == 0) {
        novoGrau = p.grau;
    } else if (p.grau == 0) {
        novoGrau = grau;
    } else if (grau == 1) {
        novoGrau = p.grau + 1;
    } else if (p.grau == 1) {
        novoGrau = grau + 1;
    } else {
        novoGrau = grau * p.grau;
    }

    Polinomio aux(0.0, novoGrau);

    for (int i = 0; i < (grau + 1); i++) {
        for (int j = 0; j < (p.grau + 1); j++) {
            if (i == 0) {
                aux.coeficientes[j] += coeficientes[i] * p.coeficientes[j];
            } else if (i == 1) {
                aux.coeficientes[j + 1] += coeficientes[i] * p.coeficientes[j];
            } else {
                if (j == 0) {
                    aux.coeficientes[i] += coeficientes[i] * p.coeficientes[j];
                } else if (j == 1) {
                    aux.coeficientes[i + 1] += coeficientes[i] * p.coeficientes[j];
                } else {
                    aux.coeficientes[i * j] += coeficientes[i] * p.coeficientes[j];
                }
            }
        }
    }
    
    int i = novoGrau;

    while (fabs(aux.coeficientes[i]) <= EPSILON && i > 0) i--;
    
    Polinomio resp(0.0, i);

    for (int j = 0; j < (i + 1); j++) resp.coeficientes[j] = aux.coeficientes[j];
        
    return resp;
}

// Multiplica e atribui dois Polinômios. ✔
Polinomio & Polinomio::operator*=(const Polinomio &p) {
    const double EPSILON = 1e-15;
    int novoGrau;

    if (grau == 0) {
        novoGrau = p.grau;
    } else if (p.grau == 0) {
        novoGrau = grau;
    } else if (grau == 1) {
        novoGrau = p.grau + 1;
    } else if (p.grau == 1) {
        novoGrau = grau + 1;
    } else {
        novoGrau = grau * p.grau;
    }

    double *auxiliar = new double[novoGrau + 1];

    for (int i = 0; i < (novoGrau + 1); i++) auxiliar[i] = 0.0;

    for (int i = 0; i < (grau + 1); i++) {
        for (int j = 0; j < (p.grau + 1); j++) {
            if (i == 0) {
                auxiliar[j] += coeficientes[i] * p.coeficientes[j];
            } else if (i == 1) {
                auxiliar[j + 1] += coeficientes[i] * p.coeficientes[j];
            } else {
                if (j == 0) {
                    auxiliar[i] += coeficientes[i] * p.coeficientes[j];
                } else if (j == 1) {
                    auxiliar[i + 1] += coeficientes[i] * p.coeficientes[j];
                } else {
                    auxiliar[i * j] += coeficientes[i] * p.coeficientes[j];
                }
            }
        }
    }

    int i = novoGrau;

    while (fabs(auxiliar[i]) <= EPSILON && i > 0) i--;

    delete[] coeficientes;

    coeficientes = new double[i + 1];
    grau = i;

    for (int j = 0; j < (i + 1); j++) coeficientes[j] = auxiliar[j];
    
    delete[] auxiliar;
        
    return *this;
}

// Realiza a leitura de um Polinômio. ✔
istream& operator>>(istream &is, Polinomio &p) {
    for (int i = 0; i < p.grau + 1; i++) {
        is >> p.coeficientes[i];
    }

    return is;
}

// Realiza a impressão de um Polinômio. ✔
ostream& operator<<(ostream &os, const Polinomio &p) {
    const double EPSILON = 1e-15;
    bool primeiroCoeficiente = true; // Variável que informa se o primeiro coeficiente foi imprimido.
    
    if (p.grau == 0) { // Se o grau for 0, imprime apenas o único coeficiente.
        os << p.coeficientes[0];
    } else {
        if (fabs(p.coeficientes[0]) > EPSILON) { // Se o primeiro coeficiente não for 0, imprimimos ele.
            os << p.coeficientes[0];
            primeiroCoeficiente = false;
        }

        for (int i = 1; i < (p.grau + 1); i++) {
            if (fabs(p.coeficientes[i]) > EPSILON) { // Verificando se o coeficiente não é 0.
                if (fabs(p.coeficientes[i] - 1) <= EPSILON || fabs(p.coeficientes[i] + 1) <= EPSILON) { // Verificando se o coeficiente é 1 ou -1.
                    if (p.coeficientes[i] > 0) { // Verificando se o coeficiente é maior do que 0.
                        if (i == 1) { // Verificando se o grau do coeficiente é igual a 1.
                            if (primeiroCoeficiente == true) { // Verificando se é o primeiro coeficiente.
                                os << "x";
                                primeiroCoeficiente = false;
                            } else {
                                os << " + " << "x";
                            }
                            
                        } else {
                            if (primeiroCoeficiente == true) { // Verificando se é o primeiro coeficiente.
                                os << "x^" << i;
                                primeiroCoeficiente = false;
                            } else {
                                os << " + " << "x^" << i;
                            }
                        }
                    } else {
                        if (i == 1) { // Verificando se o grau do coeficiente é igual a 1.
                            if (primeiroCoeficiente == true) { // Verificando se é o primeiro coeficiente.
                                os << "-x";
                                primeiroCoeficiente = false;
                            } else {
                                os << " - " << "x";
                            }    
                        } else {
                            if (primeiroCoeficiente == true) { // Verificando se é o primeiro coeficiente.
                                os << "-x^" << i;
                                primeiroCoeficiente = false;
                            } else {
                                os << " - " << "x^" << i;
                            }
                        }
                    }
                        
                } else {
                    if (p.coeficientes[i] > 0) { // Verificando se o coeficiente é maior do que 0.
                        if (i == 1) { // Verificando se o grau do coeficiente é igual a 1.
                            if (primeiroCoeficiente == true) { // Verificando se é o primeiro coeficiente.
                                os << p.coeficientes[i] << "x";
                                primeiroCoeficiente = false;
                            } else {
                                os << " + " <<  p.coeficientes[i] << "x";
                            }
                        } else {
                            if (primeiroCoeficiente == true) { // Verificando se é o primeiro coeficiente.
                                os << p.coeficientes[i] << "x^" << i;
                                primeiroCoeficiente = false;
                            } else {
                                os << " + " <<  p.coeficientes[i] << "x^" << i;
                            }
                        }
                    } else {
                        if (i == 1) { // Verificando se o grau do coeficiente é igual a 1.
                            if (primeiroCoeficiente == true) { // Verificando se é o primeiro coeficiente.
                                os << p.coeficientes[i] << "x";
                                primeiroCoeficiente = false;
                            } else {
                                os << " - " <<  fabs(p.coeficientes[i]) << "x";
                            }
                        } else {
                            if (primeiroCoeficiente == true) { // Verificando se é o primeiro coeficiente.
                                os << p.coeficientes[i] << "x^" << i;
                                primeiroCoeficiente = false;
                            } else {
                                os << " - " <<  fabs(p.coeficientes[i]) << "x^" << i;
                            }   
                        }
                    }
                }
            }
        }  
    }

    return os;
}

// Divide dois Polinômios ✔
Polinomio Polinomio::operator/(const Polinomio &p) const {
    const double EPSILON = 1e-15;
    
    if (p.grau != 1 || fabs(p.coeficientes[1] - 1 || grau == 0) > EPSILON) throw ArgumentoInvalidoExcept("POLINOMIO INVALIDO!");
    
    double a;
    Polinomio resp(0.0, grau - 1);
    double *auxiliar = new double[grau + 1];

    if (p.coeficientes[0] > 0) {
        a = -1 * p.coeficientes[0];
    } else {
        a = fabs(p.coeficientes[0]);
    }

    auxiliar[0] = coeficientes[grau];

    for (int i = 1; i < (grau + 1); i++) {
        auxiliar[i] = auxiliar[i - 1] * a + coeficientes[grau - i];
    }

    for (int i = 0; i < grau; i++) {
        resp.coeficientes[i] = auxiliar[grau - i - 1];
    }
    
    delete[] auxiliar;

    return resp;
}

// Divide e atribui dois Polinômios ✔
Polinomio & Polinomio::operator/=(const Polinomio &p) {
    const double EPSILON = 1e-15;
    
    if (p.grau != 1 || fabs(p.coeficientes[1] - 1) > EPSILON || grau == 0) throw ArgumentoInvalidoExcept("POLINOMIO INVALIDO!");
    
    double a;
    double *auxiliar = new double[grau + 1];

    if (p.coeficientes[0] > 0) {
        a = -1 * p.coeficientes[0];
    } else {
        a = fabs(p.coeficientes[0]);
    }

    auxiliar[0] = coeficientes[grau];

    for (int i = 1; i < (grau + 1); i++) {
        auxiliar[i] = auxiliar[i - 1] * a + coeficientes[grau - i];
    }

    delete[] coeficientes;
    coeficientes = new double[grau];

    for (int i = 0; i < grau; i++) {
        coeficientes[i] = auxiliar[grau - i - 1];
    }

    grau--;
    
    delete[] auxiliar;

    return *this;
}

// Calcula o resto da divisão de dois Polinômios. ✔
Polinomio Polinomio::operator%(const Polinomio &p) const {
    const double EPSILON = 1e-15;
    
    if (p.grau != 1 || fabs(p.coeficientes[1] - 1) > EPSILON || grau == 0) throw ArgumentoInvalidoExcept("POLINOMIO INVALIDO!");
    
    double a;
    Polinomio resp(0.0, 0);
    double *auxiliar = new double[grau + 1];

    if (p.coeficientes[0] > 0) {
        a = -1 * p.coeficientes[0];
    } else {
        a = fabs(p.coeficientes[0]);
    }

    auxiliar[0] = coeficientes[grau];

    for (int i = 1; i < (grau + 1); i++) {
        auxiliar[i] = auxiliar[i - 1] * a + coeficientes[grau - i];
    }

    resp.coeficientes[0] = auxiliar[grau];
    
    delete[] auxiliar;

    return resp;
}

// Calcula e atribui o resto da divisão de dois Polinômios. ✔
Polinomio & Polinomio::operator%=(const Polinomio &p) {
    const double EPSILON = 1e-15;
    
    if (p.grau != 1 || fabs(p.coeficientes[1] - 1) > EPSILON || grau == 0) throw ArgumentoInvalidoExcept("POLINOMIO INVALIDO!");
    
    double a;
    double *auxiliar = new double[grau + 1];

    if (p.coeficientes[0] > 0) {
        a = -1 * p.coeficientes[0];
    } else {
        a = fabs(p.coeficientes[0]);
    }

    auxiliar[0] = coeficientes[grau];

    for (int i = 1; i < (grau + 1); i++) {
        auxiliar[i] = auxiliar[i - 1] * a + coeficientes[grau - i];
    }

    delete[] coeficientes;
    coeficientes = new double[1];

    coeficientes[0] = auxiliar[grau];
    grau = 0;
    
    delete[] auxiliar;

    return *this;
}

// Encontra as raízes do Polinômio. ✔
double* Polinomio::resolve(int &x) const {
    if (grau == 0) throw NenhumaRaizExcept("O POLINOMIO NAO POSSUI A VARIAVEL X!");

    double *raizes = new double[grau];
    const double EPSILON = 1e-15;
    double raiz1 = 1, raiz2;
    int interacao = 0;
    Polinomio p1(*this);
    x = 0;
    
    while (x != grau && interacao < 100000) {
        raiz2 = raiz1 - (p1.avalia(raiz1) / p1.derivada().avalia(raiz1));

        if (fabs(raiz1 - raiz2) <= EPSILON) {
            raizes[x] = raiz1;
            x++;
            Polinomio p2(0.0, 1);
            p2.coeficientes[0] = -1 * raiz1;
            p2.coeficientes[1] = 1;
            p1 /= p2;
        }

        if (interacao % 1000 == 0) {
            raiz1 = interacao / 1000;
        } else {
            raiz1 = raiz2;
        }
        
        interacao++;
    }

    if (x == 0) throw NenhumaRaizExcept("O POLINOMIO NAO POSSUI RAIZ REAL!");

    return raizes;
}