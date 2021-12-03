#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "chartdialog.h"

#include <QtCharts>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    items = new QVector<QTextEdit*>;

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
    //chartDialog = new ChartDialog(chartView);
    //chartDialog->setModal(true);
    //chartDialog->exec();

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_comBoxItems_currentTextChanged(const QString &arg1)
{
    //create vertical layout to put editText boxes
    //QVBoxLayout *vLayout = new QVBoxLayout();
    //const QRect layoutSize(200, 250, 1000, 1000);
    //vLayout->setGeometry(layoutSize);



    int yAxisPos = 300;
    int YAxisIncrement = 150;

    int num = arg1.split(" ")[0].toInt();

    for (int i = 0; i < num; i++) {
        QTextEdit test;
        test.setGeometry(200, yAxisPos, 121, 31);
        items.push_back(&test);
        yAxisPos = yAxisPos +YAxisIncrement;
    }

    for (int i = 0; i < num; i++) {
        ui->vLayoutItems->addWidget(items[0]);
    }

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

void MainWindow::on_btnNextWindow_clicked()
{

}

