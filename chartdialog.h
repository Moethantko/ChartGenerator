#ifndef CHARTDIALOG_H
#define CHARTDIALOG_H

#include <QDialog>
#include <QtCharts>

namespace Ui {
class ChartDialog;
}

class ChartDialog : public QDialog
{
    Q_OBJECT

private:
    Ui::ChartDialog *ui;

public:
    explicit ChartDialog(QWidget *parent = nullptr);
    ~ChartDialog();
};

#endif // CHARTDIALOG_H
