#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<iostream>
#include "gauss.h"
#include <stdexcept>
#include <QMessageBox>
#include <time.h>

using namespace std;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->pteRelatorio->hide();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_btnGerarMatriz_clicked()
{
    N = ui->_tamanhoMatriz->value();

    // MATRIZ DOS COEFICIENTES
    ui->tblCoeficientes->setColumnCount(N);
    ui->tblCoeficientes->setRowCount(N);
    // Cabeçalhos
    QStringList colCoefHeaders;
    for (int i = 0; i < N; ++i)
        colCoefHeaders << QString("X%1").arg(1+i);
    ui->tblCoeficientes->setHorizontalHeaderLabels(colCoefHeaders);

    // MATRIZ DOS RESULTADOS
    ui->tblResultado->setColumnCount(1);
    ui->tblResultado->setRowCount(N);
    ui->tblResultado->verticalHeader()->hide();

    ui->btnCalcularMatriz->setEnabled(true);
    ui->btnCalcularJordan->setEnabled(true);
}

void MainWindow::on_btnCalcularMatriz_clicked()
{
    A = ui->_parametroA->value();

    try {
        clock_t inicio;
        inicio = clock();

        // CALCULAR VETOR SOLUÇÃO
        Gauss* metodo = new Gauss(N, defMCoeficientes(), defVResultados());
        double* r = metodo->resolverSistema(usarGaussJordan);

        double tempoSegundos = (clock() - inicio) / (double)CLOCKS_PER_SEC;

        mostrarSolucao(r);

        ui->pteRelatorio->clear();
        ui->pteRelatorio->insertPlainText(metodo->mostrarRelatorio());
        ui->pteRelatorio->insertPlainText(QString::number(tempoSegundos) + "s");

        ui->btnRelatorio->setEnabled(true);

    } catch (exception& e) {
        tratarExcecao(e);
    }
}

void MainWindow::on_btnCalcularJordan_clicked(bool checked)
{
    usarGaussJordan = checked;
}

// DEFININDO MATRIZ DOS COEFICIENTES
double** MainWindow::defMCoeficientes() {

    double** matriz = new double*[N];
    for (int i = 0; i < N; ++i) {
        double* linha = new double[N];
        for (int j = 0; j < N; ++j) { // Criando elementos da linha
            if(ui->tblCoeficientes->item(i,j) != NULL)
                linha[j] = ui->tblCoeficientes->item(i,j)->text().toDouble();
            else
                throw invalid_argument( "Os coeficientes são inválidos" );
        }
        matriz[i] = linha;
    }

    return matriz;
}

// DEFININDO VETOR RESULTADO
double* MainWindow::defVResultados() {

    double* resultado = new double[N];
    for (int i = 0; i < N; ++i) {
        if(ui->tblResultado->item(i,0) != NULL)
            resultado[i] = ui->tblResultado->item(i,0)->text().toDouble();
        else
            throw invalid_argument( "O vetor de resultados é inválido" );
    }

    return resultado;
}

// MOSTRAR SOLUÇÃO
void MainWindow::mostrarSolucao(double* r) {
    ui->tblAmplitudes->setColumnCount(N);
    ui->tblAmplitudes->setRowCount(1);
    ui->tblAmplitudes->verticalHeader()->hide();

    ui->tblRaizes->setColumnCount(N);
    ui->tblRaizes->setRowCount(1);
    ui->tblRaizes->verticalHeader()->hide();

    QStringList colHeaders;
    for(int i = 0; i < N; ++i) {
        colHeaders << QString("X%1").arg(1+i);
        ui->tblAmplitudes->setItem(0,i,new QTableWidgetItem(QString::number(A*r[i])));
        ui->tblRaizes->setItem(0,i,new QTableWidgetItem(QString::number(r[i])));
    }
    // Cabeçalhos
    ui->tblAmplitudes->setHorizontalHeaderLabels(colHeaders);
    ui->tblRaizes->setHorizontalHeaderLabels(colHeaders);
}

void MainWindow::tratarExcecao(exception& e) {
    QMessageBox erro;
    erro.setWindowTitle("Ops!");
    erro.setText(e.what());
    erro.exec();
    cout << e.what() << endl;
}

void MainWindow::on_btnRelatorio_clicked(bool checked)
{
    if(checked) {
        ui->btnRelatorio->text() = "MOSTRAR RELATÓRIO >";
        ui->pteRelatorio->show();
    }
    else {
        ui->btnRelatorio->text() = "< ESCONDER RELATÓRIO";
        ui->pteRelatorio->hide();
    }
}
