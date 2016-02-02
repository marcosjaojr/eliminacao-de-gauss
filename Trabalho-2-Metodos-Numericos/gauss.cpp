#include "gauss.h"
#include<iostream>

using namespace std;

Gauss::Gauss(int TAMANHO, double** paramMatriz, double* resultado)
{
    N = TAMANHO;
    matriz = new double*[N];
    for(int i = 0; i < N; ++i) {
        matriz[i] = new double[N+1];
        matriz[i][N] = resultado[i];
        for (int j = 0; j < N; ++j) {
            matriz[i][j] = paramMatriz[i][j];
        }
    }

    relatorio += "RELATÓRIO\n";

    mostrarMatriz();
}

bool Gauss::validarDeterminante()
{
    //Verificar se o determinante é diferente de zero
   return true;
}

//Calcula a posição do maior elemento da coluna a partir do parametro nLinha
int Gauss::posicaoDoPivo(int nLinha, int nColuna)
{
    int linhaPivo = nLinha;

    for (int var = nLinha; var < N; ++var) {
        if (matriz[var][nColuna] > matriz[linhaPivo][nColuna])
            linhaPivo = var;
    }

    return linhaPivo;
}

//Trocar toda as linhas de posição
void Gauss::trocarLinhas(int linha1, int linha2)
{
    double temp;

    if(linha1 != linha2)
        for (int var = 0; var < N+1; ++var) {
            temp = matriz[linha1][var];
            matriz[linha1][var] = matriz[linha2][var];
            matriz[linha2][var] = temp;
        }
}

//Os parametros são a posição do pivô
void Gauss::zerarColuna(int linhaPivo, int colunaPivo)
{
    std::stringstream s;

    for (int i = linhaPivo+1; i < N; ++i) {
        double numerador = matriz[i][colunaPivo];
        double pivo = matriz[linhaPivo][colunaPivo];
        double multiplicador = (numerador/pivo);
        s << "M" << i+1 << colunaPivo+1 << ": " << multiplicador << " ";

        for (int j = colunaPivo; j < N+1; ++j)
            matriz[i][j] -= ((matriz[linhaPivo][j])*multiplicador);
    }
    s << "\n";
    relatorio += s.str();
}

void Gauss::escalonarMatriz()
{
    if (validarDeterminante())
        for (int j = 0; j < N; ++j) {
            int i = j;
            int pivo = posicaoDoPivo(i, j);// linha do pivo
            trocarLinhas(pivo, i);

            zerarColuna(i, j);

            mostrarMatriz();
        }
}

void Gauss::reduzirMatriz()
{
    relatorio += "REDUZIDA\n";
    for (int colunaPivo = N-1; colunaPivo >= 0; --colunaPivo) {
        int linhaPivo = colunaPivo;

        for (int i = linhaPivo; i > 0; --i) {
            double numerador = matriz[i-1][colunaPivo];
            double pivo = matriz[linhaPivo][colunaPivo];
            double multiplicador = (numerador/pivo);

            matriz[i-1][colunaPivo] -= ((matriz[linhaPivo][colunaPivo])*multiplicador);
            matriz[i-1][N] -= ((matriz[linhaPivo][N])*multiplicador);
        }
        mostrarMatriz();

        matriz[linhaPivo][N] = matriz[linhaPivo][N]/matriz[linhaPivo][colunaPivo];
        matriz[linhaPivo][colunaPivo] = matriz[linhaPivo][colunaPivo]/matriz[linhaPivo][colunaPivo];
    }

    mostrarMatriz();
}

//Método para imprimir os valores da matriz
void Gauss::mostrarMatriz() {
    std::stringstream s;
    s << "------------------------------------" << "\n";
    //Mostrar matriz na tela
    for(int i = 0; i < N; ++i) {
        s << "| ";
        for(int j = 0; j < N+1; ++j)
            s << matriz[i][j] << " | ";
        s << "\n";
    }
    s << "------------------------------------" << "\n";
    relatorio += s.str();
}

double* Gauss::resolverSistema(bool usarGaussJordan)
{
    double* x = new double[N];

    escalonarMatriz();

    if(usarGaussJordan)
        reduzirMatriz();

    for (int i = 1; i <= N; ++i) {
        double numerador = matriz[N-i][N];
        for (int j = 1; j < i; ++j) {
            numerador -= (matriz[N-i][N-j]*x[N-j]);
        }
        x[N-i] = numerador/matriz[N-i][N-i];

    }

    return x;
}

char* Gauss::mostrarRelatorio() {
    return &relatorio[0u];
}
