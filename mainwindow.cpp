#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QtCharts>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QBarSet *set0 = new QBarSet("Jane");
     QBarSet *set1 = new QBarSet("John");
        QBarSet *set2 = new QBarSet("Axel");
        QBarSet *set3 = new QBarSet("Mary");
        QBarSet *set4 = new QBarSet("Samantha");

        *set0 << 1 << 2 << 3 << 4 << 5 << 6;
        *set1 << 5 << 0 << 0 << 4 << 0 << 7;
        *set2 << 3 << 5 << 8 << 13 << 8 << 5;
        *set3 << 5 << 6 << 7 << 3 << 4 << 5;
        *set4 << 9 << 7 << 5 << 3 << 1 << 2;

        QBarSeries *series = new QBarSeries();
            series->append(set0);
            series->append(set1);
            series->append(set2);
            series->append(set3);
            series->append(set4);

            QChart *chart = new QChart();
                chart->addSeries(series);
                chart->setTitle("Simple barchart example");
                chart->setAnimationOptions(QChart::SeriesAnimations);


                QStringList categories;
                    categories << "Jan" << "Feb" << "Mar" << "Apr" << "May" << "Jun";
                    QBarCategoryAxis *axisX = new QBarCategoryAxis();
                    axisX->append(categories);
                    chart->addAxis(axisX, Qt::AlignBottom);
                    series->attachAxis(axisX);

                    QValueAxis *axisY = new QValueAxis();
                    axisY->setRange(0,15);
                    chart->addAxis(axisY, Qt::AlignLeft);
                    series->attachAxis(axisY);


                    QChartView *chartView = new QChartView(chart);
                    chartView->setRenderHint(QPainter::Antialiasing);



                    //setCentralWidget(chartView);


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

    //setCentralWidget(test);


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








