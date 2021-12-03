#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTextEdit>
#include "chartdialog.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    QVector<QTextEdit*> items;


private:
    ChartDialog *chartDialog;

private slots:



    void on_comboBox_currentIndexChanged(int index);

    void on_comBoxGroups_currentIndexChanged(int index);

    void on_comBoxItems_currentIndexChanged(int index);

    void on_comBoxItems_currentTextChanged(const QString &arg1);

    void on_comBoxGroups_currentTextChanged(const QString &arg1);

    void on_btnNextWindow_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
