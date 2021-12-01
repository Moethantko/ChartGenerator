#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);


}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_comBoxItems_currentTextChanged(const QString &arg1)
{
    qDebug() << arg1;

    QTextEdit *test = new QTextEdit();
    test->resize(121, 31);

    setCentralWidget(test);


}


void MainWindow::on_comBoxGroups_currentTextChanged(const QString &arg1)
{
    qDebug() << arg1;
}

void MainWindow::on_comBoxItems_currentIndexChanged(int index)
{
    //qDebug() << index;
}

void MainWindow::on_comBoxGroups_currentIndexChanged(int index)
{

}

void MainWindow::on_comboBox_currentIndexChanged(int index)
{

}








