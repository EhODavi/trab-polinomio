#include <iostream>
#include "Polinomio.h"

using namespace std;

int main() {
    char resposta = 'S';
    unsigned int grau;
    double cte;

    cout << "\nTESTE I: SOMA/SUBTRACAO DE UMA CONSTANTE EM UM POLINOMIO" << endl;
    while (resposta == 'S') {
        cout << "\nINFORME O GRAU DO POLINOMIO" << endl;
        cin >> grau;

        Polinomio p(0.0, grau);

        cout << "\nINFORME OS COEFICIENTES DO POLINOMIO" << endl;

        cin >> p;

        cout << "\nINFORME A CONSTANTE A SER SOMADA/SUBTRAIDA NO POLINOMIO" << endl;
        cin >> cte;

        cout << "\nRESULTADO: " << endl;
        cout << "POLINOMIO ORIGINAL: " << p << endl;
        p = p + cte;
        cout << "+: " << p << endl;
        p = p - cte;
        p += cte;
        cout << "+=: " << p << endl;
        p = p - 2 * cte;
        cout << "-: " << p << endl;
        p = p + cte;
        p -= cte; 
        cout << "-=: " << p << endl; 

        cout << "\nDESEJA CONTINUAR [S/N]?" << endl;
        cin >> resposta;
    }

    resposta = 'S';

    cout << "\nTESTE II: ++P E P++" << endl;
    while (resposta == 'S') {
        cout << "\nINFORME O GRAU DO POLINOMIO" << endl;
        cin >> grau;

        Polinomio p(0.0, grau);

        cout << "\nINFORME OS COEFICIENTES DO POLINOMIO" << endl;

        cin >> p;

        cout << "\nRESULTADO: " << endl;
        cout << "POLINOMIO ORIGINAL: " << p << endl;
        p++;
        cout << "p++: " << p << endl;
        p = p - 1;
        ++p;
        cout << "++p: " << p << endl;  

        cout << "\nDESEJA CONTINUAR [S/N]?" << endl;
        cin >> resposta;
    }

    resposta = 'S';

    cout << "\nTESTE III: --P E P--" << endl;
    while (resposta == 'S') {
        cout << "\nINFORME O GRAU DO POLINOMIO" << endl;
        cin >> grau;

        Polinomio p(0.0, grau);

        cout << "\nINFORME OS COEFICIENTES DO POLINOMIO" << endl;

        cin >> p;

        cout << "\nRESULTADO: " << endl;
        cout << "POLINOMIO ORIGINAL: " << p << endl;
        p--;
        cout << "p--: " << p << endl;
        p = p + 1;
        --p;
        cout << "--p: " << p << endl;  

        cout << "\nDESEJA CONTINUAR [S/N]?" << endl;
        cin >> resposta;
    }

    resposta = 'S';

    cout << "\nTESTE IV: IGUALDADE DE POLINOMIOS" << endl;
    while (resposta == 'S') {
        cout << "\nINFORME O GRAU DO POLINOMIO P1" << endl;
        cin >> grau;

        Polinomio p1(0.0, grau);

        cout << "\nINFORME OS COEFICIENTES DO POLINOMIO P1" << endl;

        cin >> p1;

        cout << "\nINFORME O GRAU DO POLINOMIO P2" << endl;
        cin >> grau;

        Polinomio p2(0.0, grau);

        cout << "\nINFORME OS COEFICIENTES DO POLINOMIO P2" << endl;

        cin >> p2;

        cout << "\nRESULTADO: " << endl;
        cout << "P1: " << p1 << endl;
        cout << "p2: " << p2 << endl;

        if(p1 == p2) {
            cout << "SAO IGUAIS!" << endl;
        }  else {
            cout << "SAO DIFERENTES!" << endl;
        }

        cout << "\nDESEJA CONTINUAR [S/N]?" << endl;
        cin >> resposta;
    }

    resposta = 'S';

    cout << "\nTESTE V: DERIVADA/INTEGRAL DE UM POLINOMIO" << endl;
    while (resposta == 'S') {
        cout << "\nINFORME O GRAU DO POLINOMIO" << endl;
        cin >> grau;

        Polinomio p(0.0, grau);

        cout << "\nINFORME OS COEFICIENTES DO POLINOMIO" << endl;

        cin >> p;

        cout << "\nRESULTADO: " << endl;
        cout << "POLINOMIO ORIGINAL: " << p << endl;
        cout << "DERIVADA: " << p.derivada() << endl;
        cout << "INTEGRAL: " << p.integral() << endl;

        cout << "\nDESEJA CONTINUAR [S/N]?" << endl;
        cin >> resposta;
    }

    resposta = 'S'; 
    
    cout << "\nTESTE VI: SOMA/SUBTRACAO DE DOIS POLINOMIOS" << endl;
    while (resposta == 'S') {
        cout << "\nINFORME O GRAU DO POLINOMIO P1" << endl;
        cin >> grau;

        Polinomio p1(0.0, grau);

        cout << "\nINFORME OS COEFICIENTES DO POLINOMIO P1" << endl;

        cin >> p1;

        cout << "\nINFORME O GRAU DO POLINOMIO P2" << endl;
        cin >> grau;

        Polinomio p2(0.0, grau);

        cout << "\nINFORME OS COEFICIENTES DO POLINOMIO P2" << endl;

        cin >> p2;

        cout << "\nRESULTADO: " << endl;
        cout << "P1: " << p1 << endl;
        cout << "P2: " << p2 << endl;
        cout << "P1 + P2: " << p1 + p2 << endl;
        cout << "P1 - P2: " << p1 - p2 << endl;
        p1 += p2;
        cout << "P1 += P2: " << p1 << endl;
        p1 -= p2;
        p1 -= p2;
        cout << "P1 -= P2: " << p1 << endl;

        cout << "\nDESEJA CONTINUAR [S/N]?" << endl;
        cin >> resposta;
    }

    resposta = 'S'; 

    cout << "\nTESTE VII: MULTIPLICACAO/DIVISAO DE UM POLINOMIO POR UMA CONSTANTE" << endl;
    while (resposta == 'S') {
        cout << "\nINFORME O GRAU DO POLINOMIO" << endl;
        cin >> grau;

        Polinomio p(0.0, grau);

        cout << "\nINFORME OS COEFICIENTES DO POLINOMIO" << endl;

        cin >> p;

        cout << "\nINFORME A CONSTANTE QUE MULTIPLICARA/DIVIDIRA O POLINOMIO" << endl;
        cin >> cte;

        cout << "\nRESULTADO: " << endl;
        cout << "POLINOMIO ORIGINAL: " << p << endl;
        cout << "P * CTE: " << p * cte << endl;
        cout << "CTE * P: " << cte * p << endl;
        p *= cte;
        cout << "P *= CTE: " << p << endl;
        p /= cte;
        cout << "P / CTE: " << p / cte << endl;
        p /= cte;
        cout << "P /= CTE: " << p << endl;

        cout << "\nDESEJA CONTINUAR [S/N]?" << endl;
        cin >> resposta;
    }

    resposta = 'S'; 

    cout << "\nTESTE VIII: CALCULAR P(A)" << endl;
    while (resposta == 'S') {
        cout << "\nINFORME O GRAU DO POLINOMIO" << endl;
        cin >> grau;

        Polinomio p(0.0, grau);

        cout << "\nINFORME OS COEFICIENTES DO POLINOMIO" << endl;

        cin >> p;

        cout << "\nINFORME 'A'" << endl;
        cin >> cte;

        cout << "\nRESULTADO: " << endl;
        cout << "P: " << p << endl;
        cout << "P(A): " << p.avalia(cte) << endl;

        cout << "\nDESEJA CONTINUAR [S/N]?" << endl;
        cin >> resposta;
    }

    resposta = 'S'; 

    cout << "\nTESTE IX: MULTIPLICACAO DE DOIS POLINOMIOS" << endl;
    while (resposta == 'S') {
        cout << "\nINFORME O GRAU DO POLINOMIO P1" << endl;
        cin >> grau;

        Polinomio p1(0.0, grau);

        cout << "\nINFORME OS COEFICIENTES DO POLINOMIO P1" << endl;

        cin >> p1;

        cout << "\nINFORME O GRAU DO POLINOMIO P2" << endl;
        cin >> grau;

        Polinomio p2(0.0, grau);

        cout << "\nINFORME OS COEFICIENTES DO POLINOMIO P2" << endl;

        cin >> p2;

        cout << "\nRESULTADO: " << endl;
        cout << "P1: " << p1 << endl;
        cout << "P2: " << p2 << endl;
        cout << "P1 * P2: " << p1 * p2 << endl;
        p1 *= p2;
        cout << "P1 *= P2: " << p1 << endl;

        cout << "\nDESEJA CONTINUAR [S/N]?" << endl;
        cin >> resposta;
    }

    resposta = 'S'; 

    cout << "\nTESTE X: DIVISAO DE DOIS POLINOMIOS" << endl;
    while (resposta == 'S') {
        cout << "\nINFORME O GRAU DO POLINOMIO P1" << endl;
        cin >> grau;

        Polinomio p1(0.0, grau);

        cout << "\nINFORME OS COEFICIENTES DO POLINOMIO P1" << endl;

        cin >> p1;

        cout << "\nINFORME O GRAU DO POLINOMIO P2" << endl;
        cin >> grau;

        Polinomio p2(0.0, grau);

        cout << "\nINFORME OS COEFICIENTES DO POLINOMIO P2" << endl;

        cin >> p2;

        try {
            cout << "\nRESULTADO: " << endl;
            cout << "P1: " << p1 << endl;
            cout << "P2: " << p2 << endl;
            cout << "P1 / P2: " << p1 / p2 << endl;
            p1 /= p2;
            cout << "P1 /= P2: " << p1 << endl;
        } catch(ArgumentoInvalidoExcept &e) {
            cout << e.getMessage() << endl;
        }
        
        cout << "\nDESEJA CONTINUAR [S/N]?" << endl;
        cin >> resposta;
    }

    resposta = 'S'; 

    cout << "\nTESTE XI: RESTO DA DIVISAO DE DOIS POLINOMIOS" << endl;
    while (resposta == 'S') {
        cout << "\nINFORME O GRAU DO POLINOMIO P1" << endl;
        cin >> grau;

        Polinomio p1(0.0, grau);

        cout << "\nINFORME OS COEFICIENTES DO POLINOMIO P1" << endl;

        cin >> p1;

        cout << "\nINFORME O GRAU DO POLINOMIO P2" << endl;
        cin >> grau;

        Polinomio p2(0.0, grau);

        cout << "\nINFORME OS COEFICIENTES DO POLINOMIO P2" << endl;

        cin >> p2;

        try {
            cout << "\nRESULTADO: " << endl;
            cout << "P1: " << p1 << endl;
            cout << "P2: " << p2 << endl;
            cout << "P1 % P2: " << p1 % p2 << endl;
            p1 %= p2;
            cout << "P1 %= P2: " << p1 << endl;
        } catch(ArgumentoInvalidoExcept &e) {
            cout << e.getMessage() << endl;
        }
        
        cout << "\nDESEJA CONTINUAR [S/N]?" << endl;
        cin >> resposta;
    }

    resposta = 'S'; 

    cout << "\nTESTE XII: ENCONTRAR RAIZES REAIS DO POLINOMIO" << endl;
    while (resposta == 'S') {
        cout << "\nINFORME O GRAU DO POLINOMIO P" << endl;
        cin >> grau;

        Polinomio p(0.0, grau);
        int x = 0;

        cout << "\nINFORME OS COEFICIENTES DO POLINOMIO P" << endl;

        cin >> p;
        
        try {
            cout << "\nRESULTADO:" << endl;
            cout << "P: " << p << endl;
            cout << "RAIZES REAIS:" << endl;
            
            double *raizes = p.resolve(x);
            
            for (int i = 0; i < x; i++) {
                cout << "X" << i << ": " << raizes[i] << endl;
            }

            delete[] raizes;

        } catch(NenhumaRaizExcept &e) {
            cout << e.getMessage() << endl;
        }
        
        cout << "\nDESEJA CONTINUAR [S/N]?" << endl;
        cin >> resposta;
    }

    resposta = 'S'; 

    cout << "\nTESTE XIII: OPERADOR DE []" << endl;
    while (resposta == 'S') {
        cout << "\nINFORME O GRAU DO POLINOMIO P" << endl;
        cin >> grau;

        Polinomio p(0.0, grau);
        int posicaoX;

        cout << "\nINFORME OS COEFICIENTES DO POLINOMIO P" << endl;

        cin >> p;

        cout << "\nINFORME A POSICAO" << endl;
        cin >> posicaoX;
        
        try {
            cout << "\nRESULTADO:" << endl;
            cout << "P: " << p << endl;
            cout << "COEFICIENTE RESGATADO: " << p[posicaoX] << endl;
            
        } catch(PosicaoInvalidaExcept &e) {
            cout << e.getMessage() << endl;
        }
        
        cout << "\nDESEJA CONTINUAR [S/N]?" << endl;
        cin >> resposta;
    }

    return 0;
}