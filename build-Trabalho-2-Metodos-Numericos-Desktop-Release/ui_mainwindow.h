/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QSpinBox *_tamanhoMatriz;
    QLabel *label_4;
    QSpinBox *_parametroA;
    QPushButton *btnGerarMatriz;
    QVBoxLayout *verticalLayout_3;
    QPushButton *btnCalcularMatriz;
    QPushButton *btnCalcularJordan;
    QPushButton *btnRelatorio;
    QHBoxLayout *horizontalLayout_5;
    QTableWidget *tblCoeficientes;
    QTableWidget *tblResultado;
    QLabel *label_2;
    QTableWidget *tblRaizes;
    QLabel *label_3;
    QTableWidget *tblAmplitudes;
    QVBoxLayout *verticalLayout_4;
    QPlainTextEdit *pteRelatorio;
    QMenuBar *menuBar;
    QMenu *menuMatriz;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(602, 477);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        _tamanhoMatriz = new QSpinBox(centralWidget);
        _tamanhoMatriz->setObjectName(QStringLiteral("_tamanhoMatriz"));

        verticalLayout->addWidget(_tamanhoMatriz);

        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        verticalLayout->addWidget(label_4);

        _parametroA = new QSpinBox(centralWidget);
        _parametroA->setObjectName(QStringLiteral("_parametroA"));

        verticalLayout->addWidget(_parametroA);

        btnGerarMatriz = new QPushButton(centralWidget);
        btnGerarMatriz->setObjectName(QStringLiteral("btnGerarMatriz"));

        verticalLayout->addWidget(btnGerarMatriz);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        btnCalcularMatriz = new QPushButton(centralWidget);
        btnCalcularMatriz->setObjectName(QStringLiteral("btnCalcularMatriz"));
        btnCalcularMatriz->setEnabled(false);
        btnCalcularMatriz->setFlat(false);

        verticalLayout_3->addWidget(btnCalcularMatriz);

        btnCalcularJordan = new QPushButton(centralWidget);
        btnCalcularJordan->setObjectName(QStringLiteral("btnCalcularJordan"));
        btnCalcularJordan->setEnabled(false);
        btnCalcularJordan->setCheckable(true);

        verticalLayout_3->addWidget(btnCalcularJordan);

        btnRelatorio = new QPushButton(centralWidget);
        btnRelatorio->setObjectName(QStringLiteral("btnRelatorio"));
        btnRelatorio->setEnabled(false);
        btnRelatorio->setCheckable(true);

        verticalLayout_3->addWidget(btnRelatorio);


        horizontalLayout->addLayout(verticalLayout_3);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        tblCoeficientes = new QTableWidget(centralWidget);
        tblCoeficientes->setObjectName(QStringLiteral("tblCoeficientes"));

        horizontalLayout_5->addWidget(tblCoeficientes);

        tblResultado = new QTableWidget(centralWidget);
        tblResultado->setObjectName(QStringLiteral("tblResultado"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(tblResultado->sizePolicy().hasHeightForWidth());
        tblResultado->setSizePolicy(sizePolicy);
        tblResultado->setMaximumSize(QSize(87, 16777215));

        horizontalLayout_5->addWidget(tblResultado);


        verticalLayout_2->addLayout(horizontalLayout_5);


        gridLayout->addLayout(verticalLayout_2, 0, 0, 1, 1);

        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        tblRaizes = new QTableWidget(centralWidget);
        tblRaizes->setObjectName(QStringLiteral("tblRaizes"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(tblRaizes->sizePolicy().hasHeightForWidth());
        tblRaizes->setSizePolicy(sizePolicy1);
        tblRaizes->setMaximumSize(QSize(16777215, 55));
        tblRaizes->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tblRaizes->setGridStyle(Qt::SolidLine);
        tblRaizes->setRowCount(0);

        gridLayout->addWidget(tblRaizes, 2, 0, 1, 1);

        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 3, 0, 1, 1);

        tblAmplitudes = new QTableWidget(centralWidget);
        tblAmplitudes->setObjectName(QStringLiteral("tblAmplitudes"));
        sizePolicy1.setHeightForWidth(tblAmplitudes->sizePolicy().hasHeightForWidth());
        tblAmplitudes->setSizePolicy(sizePolicy1);
        tblAmplitudes->setMaximumSize(QSize(16777215, 55));

        gridLayout->addWidget(tblAmplitudes, 4, 0, 1, 1);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        pteRelatorio = new QPlainTextEdit(centralWidget);
        pteRelatorio->setObjectName(QStringLiteral("pteRelatorio"));
        pteRelatorio->setMaximumSize(QSize(16777215, 16777215));
        pteRelatorio->setTextInteractionFlags(Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        verticalLayout_4->addWidget(pteRelatorio);


        gridLayout->addLayout(verticalLayout_4, 0, 1, 5, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 602, 25));
        menuMatriz = new QMenu(menuBar);
        menuMatriz->setObjectName(QStringLiteral("menuMatriz"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QStringLiteral("toolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        menuBar->addAction(menuMatriz->menuAction());

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Matriz", 0));
        label->setText(QApplication::translate("MainWindow", "N\303\232MERO DE DESLOCAMENTOS", 0));
        label_4->setText(QApplication::translate("MainWindow", "PAR\303\202METRO \"a\":", 0));
        btnGerarMatriz->setText(QApplication::translate("MainWindow", "GERAR MATRIZ", 0));
        btnCalcularMatriz->setText(QApplication::translate("MainWindow", "CALCULAR SISTEMA", 0));
        btnCalcularJordan->setText(QApplication::translate("MainWindow", "GAUSS-JORDAN", 0));
        btnRelatorio->setText(QApplication::translate("MainWindow", "MOSTRAR RELAT\303\223RIO >", 0));
        label_2->setText(QApplication::translate("MainWindow", "DESLOCAMENTOS:", 0));
        label_3->setText(QApplication::translate("MainWindow", "AMPLITUDES:", 0));
        menuMatriz->setTitle(QApplication::translate("MainWindow", "Matriz", 0));
        toolBar->setWindowTitle(QApplication::translate("MainWindow", "toolBar", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
