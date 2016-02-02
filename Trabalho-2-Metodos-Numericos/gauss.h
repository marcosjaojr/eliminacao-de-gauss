#ifndef GAUSS_H
#define GAUSS_H
#include<iostream>
#include <sstream>

class Gauss
{
private:
    int N;
    double** matriz;
    std::string relatorio;
    bool validarDeterminante();
    int posicaoDoPivo(int nLinha, int nColuna);
    void trocarLinhas(int linha1, int linha2);
    void zerarColuna(int linha, int coluna);
    void escalonarMatriz();
    void reduzirMatriz();
    void mostrarMatriz();
public:
    Gauss(int TAMANHO, double** paramMatriz, double* resultado);
    double* resolverSistema(bool usarGaussJordan);
    char* mostrarRelatorio();
};

#endif // GAUSS_H
