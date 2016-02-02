#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_btnGerarMatriz_clicked();

    void on_btnCalcularMatriz_clicked();

    void on_btnRelatorio_clicked(bool checked);

    void on_btnCalcularJordan_clicked(bool checked);

private:
    Ui::MainWindow *ui;
    int N;
    int A;
    bool usarGaussJordan;
    double** defMCoeficientes();
    double* defVResultados();
    void mostrarSolucao(double*);
    void tratarExcecao(std::exception&);
};

#endif // MAINWINDOW_H
